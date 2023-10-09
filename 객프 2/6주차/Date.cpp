    #include <iostream> // ������� iosteram�� include
#include <ctime> // ������� ctime�� include // �Ű������� ���� ������ (Date()) ���� ����ð��� �ҷ��� �� ���ȴ�.
#include <string> // ������� string�� include
#include <iomanip> // ������� iomanip�� include // YY���·� ǥ���� ���� ����ϴ� setw, setfill�� ���� include�ߴ�.
using namespace std; // std::�� �����ϵ��� ����.

#include "Date.h" // Date.h��� ��������� include

int yy__; // setYYYYFromYY���� ���� �⵵�� õ,�����ڸ��� �̸� �����صδ� �����̴�. (UML���̾�׷��� �̰� ����Ǿ� ���� �ʾƼ� �ۿ� ���� �����ߴ�.)

// ------------------------------------------------------------

Date::Date() { // �Ű������� ���� ������, �ý����� ����ð��� �ҷ��� �� month, day, year�� ����.
    time_t t = time(NULL);  // ctime�� class�� time_t�� t�� �����ϰ�, time�� NULL���� �־�д�.
    struct tm tm; // struct tm�� tm���� �����Ѵ�. �̴� �ð��� ������ �޸� �ּҷ� ���δ�.
    localtime_s(&tm, &t); // localtime_s�� �̿��� �ý����� ���糯¥�� �����Ѵ�.
    // �� tm�� tm_year���� 1900�⵵ ���ĺ����� '�⵵'��, tm_mon���� '��'�� ����(0���ͽ���)�ȴ�. tm_mday���� �ý����� '��'�� ����.
    this->year = tm.tm_year+1900; // 1900�� ���� �츮�� �˰��ִ� ��¥�� �����Ѵ�.
    yy__ = year / 100; // �⵵�� õ,�����ڸ��� ����ȴ�.
    this->month = tm.tm_mon+1; // 1�� ���� �츮�� �ٷ�� �� ǥ��������� �����Ѵ�.
    this->day = tm.tm_mday; // �ٷ� day�� �����Ѵ�.
}

Date::Date(int ddd, int yyyy) { // int�� �Ű������� 2���� ������, ddd,yyyy ���·� �޴´�.
    this->year = yyyy; // �켱 yyyy�� �� Ŭ������ year�� �����Ѵ�.
    yy__ = year / 100; // �⵵�� õ,�����ڸ��� ����ȴ�.
    setMMDDFromDDD(ddd); // ddd���¸� MMDD���·� �����Ѵ�. �˾Ƽ� day, month�� ����ȴ�.
    
}

Date::Date(int dd, int mm, int yyyy) { // int�� �Ű������� 3���� ������, dd,mm,yyyy ���·� �޴´�.
    this->year = yyyy; // �켱 yyyy�� �� Ŭ������ year�� �����Ѵ�.
    yy__ = year / 100; // �⵵�� õ,�����ڸ��� ����ȴ�.
    if (mm > 0 && mm <= 12) this->month = mm; // ���� ���� mm���� 1�̻� 12���϶�� �״�� �����ϰ�,
    else {                                      // ���� �׷��� �ʴٸ� �����޽����� �Բ� 1�� �����Ѵ�.
        this->month = 1;
        cout << "Invalid month (" << mm << ") set to 1.\n";
    }

    this->day = checkDay(dd); // ���� �Ű����� dd�� checkDay�� �־������ν� ��¥�� �⵵,�� �� �������� �� ����ε� ������ �Ǵ��Ѵ�. �׸��� �̸� �����Ѵ�.
}

Date::Date(string Month, int dd, int yyyy) { // string�� �Ű����� 1���� int�� �Ű����� 2���� ���� ������. Month,dd,yyyy���·� �޴´�.
    this->year = yyyy; // �켱 yyyy�� �� Ŭ������ year�� �����Ѵ�.
    yy__ = year / 100; // �⵵�� õ,�����ڸ��� ����ȴ�.
    setMMFromMonth(Month); // Month(string)���¸� MM���·� �ٲپ� �� Ŭ������ month�� �����Ѵ�.
    this->day = checkDay(dd); // ���� �Ű����� dd�� checkDay�� �־������ν� ��¥�� �⵵,�� �� �������� �� ����ε� ������ �Ǵ��Ѵ�. �׸��� �̸� �����Ѵ�.
}

//-------------------------------------------------

void Date::print() const { // month / day / year ���·� ����ϴ� �Լ�.
    cout << this->month << " / " << this->day << " / " << this->year << endl;
}

void Date::printDDDYYYY() const {  // DDD / year���·� ����ϴ� �Լ�.
    int ddd = convertDDToDDD(); // ���� Ŭ������ day���� ddd���·� �ٲپ���.
    cout << ddd << " " << this->year << endl;
}
void Date::printMMDDYY() const { // MM / DD / YY ���·� ����ϴ� �Լ�.
    int yy = convertYYYYToYY(); // ���� Ŭ������ year�� YY���·� �ٲ�.
    cout << this->month << "/" << this->day << "/";
    cout << setw(2) << setfill('0') << yy << endl; // �������� ���� 2�ڸ��� ������ ����ϵ��� �ڵ�. (ex. 2004 -> 4 -> 04)
}
void Date::printMonthDDYYYY() const { // Month(string) / DD / YYYY ���·� ����ϴ� �Լ�.
    string Month = convertMMToMonth(this->month); // ���� Ŭ������ month�� string������ '��'�� �ٲپ���.
    cout << Month << " " << this->day << ", " << this->year << endl;
}

//---------------------------------------------

int Date::checkDay(int testDay) const { // ��¥�� ��/�⵵�� ������� ��, �ùٸ��� �ԷµȰ����� �Ǵ��ϴ� �Լ�.
    if (testDay > 0 && testDay <= daysInMonth(this->month)) return testDay; 
    // �� ����: daysMonth�� ���� ���� ������ �۰ų� ����, �׸��� 0���� ũ�ٸ� �޾Ҵ� ���� �״�� �����Ѵ�.

    cout << "Invalid day (" << testDay << ") set to 1.\n"; 
    return 1; // ���� �� if���� �������� ������ ��¥�� �߸��ԷµȰ��̹Ƿ�, 1�� �ʱ�ȭ.
}

int Date::daysInMonth(int) const { // �� checkDay���� ���δ�. '��'�� �Է����� �� �̿� �ش��ϴ� ���ڸ� return ���ִ� �Լ��̴�.
    static const int daysPerMonth[13] = // �̴� �Һ��ϴ� ���̱� ������, �̷��� ������ �̸� const�� �����صд�. (�Ʒ�����, ������ ���ܽ�Ų��,)
    { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (this->month == 2) { // ���� �ش� ���� 2���̰�, �����̶�� daPerMonth���� 1�� ���� (��, 29��) �̸� ����ϵ��� �Ѵ�.
        if (isLeapYear() == 1) return daysPerMonth[this->month]+1;
    }
    return daysPerMonth[this->month]; // �� Ư�������� ���ٸ� �׳� ���� ���� ���ڸ� return���ش�.
}

bool Date::isLeapYear() const { // �� daysInMonth���� ���δ�. �� Ŭ������ �ԷµǾ��ִ� �⵵�� �������� �Ǵ��ϴ� �Լ��̴�. return �ڷ����� bool�̴�.
    if ((this->year % 400) == 0 || ((this->year % 100) != 0 && (this->year % 4) == 0)) return 1;  // true : is leap year
    // �� if���� ������ Ȯ���ϴ� �Լ��̴�. �� ������ �������� ������ (������ �ƴ϶��) 0�� return�Ѵ�.
    return 0;
}


int Date::convertDDToDDD() const { // DD���¸� DDD���·� �ٲ��־� int�ڷ������� return �ϴ� �Լ��̴�. �̴� printDDDYYYY���� ���δ�.
    static const int daysPerMonth[13] = // �̴� �Һ��ϴ� ���̱� ������, �̷��� ������ �̸� const�� �����صд�. (�Ʒ�����, ������ ���ܽ�Ų��,)
    { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int ddd = this->day;
    for (int i = 1; i < this->month; i++) {
        ddd += daysPerMonth[i];
    }
    if ((this->month >= 3) && (isLeapYear() == 1)) ddd++;
    // ���� �ش�⵵�� �����̶�� ddd�� 1 �߰�. (���, 3�� �̻��϶��� 1�� ���ؾ� �ҿ��ֱ⿡ �̷��� �ڵ��ߴ�.)
    return ddd; // �� ddd�� �����ϸ� MMDD�� DDD���·� �ٲ�� ���̴�.
}

void Date::setMMDDFromDDD(int ddd) { // DDD���¸� MMDD���·� �ٲپ� �����ϴ� �Լ��̴�. �����ڸ� Date(ddd,yyyy)�� �޾��� ���� ���δ�.
    static int daysPerMonth_S[13] = // ����� ���� ���� '��' �ϼ��� �����س��� �迭�̴�.
    { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int i = 0;  
    if (isLeapYear() == 1) daysPerMonth_S[2] += 1; // ���� �����̶�� 2���� �ش��ϴ� 3��° �迭�� 1�� ������ ������ �����ϰ� ���ش�.
    for (;;) { // ���ѷ����� ����, ��갪�� �µ��� ddd������ '��'��'��'�� ����ؼ� �������� �Ͽ���.
        i++;
        if (daysPerMonth_S[i] >= ddd) break; // ddd���� �� �� �ִ� ������ �۴ٸ� break�ϵ��� �ߴ�.
        ddd -= daysPerMonth_S[i];
    }
    this->day = ddd;
    this->month = i;
}

string Date::convertMMToMonth(int mm) const { // MM���¸� Month(string) �� �ٲپ� string �ڷ������� return ���ִ� �Լ��̴�. �̴� printMonthDDYYYY���� ���δ�. 
    static const string Months[13] = // 1������ 12������ ����� '��'�� �������� ��, �ش� ���� ���� string���� return���־���.
    { "Error", "Janyary", "February", "March", "April", "May", "June", "July",
    "August", "September", "October", "November", "December" };
    return Months[mm];
}
void Date::setMMFromMonth(string Month) { // Month���¸� MM���·� �ٲپ� �����ϴ� �Լ��̴�. �����ڸ� Date(Month,dd,yyyy)�� �޾��� ���� ���δ�.
    static const string Months[13] =  // 1������ 12������ ����� '��'�� ����.
    { "Error", "Janyary", "February", "March", "April", "May", "June", "July",
    "August", "September", "October", "November", "December" };
    for (int i = 1; i <= 12; i++) // if���� ���� �Ű���� Month�� Months(string��)�� ��, ����� �� '��'���� �����Ѵ�.
    {
        if (Month == Months[i]) this->month = i;
    }
}
int Date::convertYYYYToYY() const { // YYYY���¸� YY�� �ٲپ� int�ڷ������� return �ϴ� �Լ��̴�. �̴� printMMDDYY���� ���δ�. 
    int yy = this->year % 100; // 100���� ������ ���� �������� �����ϸ� yyyy���°� yy���°� �ȴ�.
    return yy;
}
void Date::setYYYYFromYY(int yy) { // YY���¸� YYYY���·� �ٲپ� ������ ���� ���δ�. �ƹ��������� ������ �ʴ´�. (������ �߰������� ���ڴ�.)
    this->year = yy + yy__ * 100; // �ýö����� �����صξ��� �⵵�� õ,�����ڸ��� 100�� ���� �� yy�� ���Ͽ� yyyy���·� ǥ���Ѵ�.
}
