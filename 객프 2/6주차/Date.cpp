    #include <iostream> // 헤더파일 iosteram을 include
#include <ctime> // 헤더파일 ctime을 include // 매개변수가 없는 생성자 (Date()) 에서 현재시간을 불러올 때 사용된다.
#include <string> // 헤더파일 string을 include
#include <iomanip> // 헤더파일 iomanip를 include // YY형태로 표현할 때에 사용하는 setw, setfill을 위해 include했다.
using namespace std; // std::을 생략하도록 설정.

#include "Date.h" // Date.h라는 헤더파일을 include

int yy__; // setYYYYFromYY에서 쓰일 년도의 천,백의자리를 미리 저장해두는 변수이다. (UML다이어그램에 이가 선언되어 있지 않아서 밖에 따로 선언했다.)

// ------------------------------------------------------------

Date::Date() { // 매개변수가 없는 생성자, 시스템의 현재시간을 불러와 각 month, day, year에 저장.
    time_t t = time(NULL);  // ctime의 class중 time_t를 t로 선언하고, time에 NULL값을 넣어둔다.
    struct tm tm; // struct tm을 tm으로 선언한다. 이는 시간을 저정할 메모리 주소로 쓰인다.
    localtime_s(&tm, &t); // localtime_s를 이용해 시스템의 현재날짜를 저장한다.
    // 위 tm에 tm_year에는 1900년도 이후부터의 '년도'가, tm_mon에는 '월'이 저장(0부터시작)된다. tm_mday에는 시스템의 '일'이 들어간다.
    this->year = tm.tm_year+1900; // 1900을 더해 우리가 알고있는 날짜로 저장한다.
    yy__ = year / 100; // 년도의 천,백의자리가 저장된다.
    this->month = tm.tm_mon+1; // 1을 더해 우리가 다루는 월 표현방법으로 저장한다.
    this->day = tm.tm_mday; // 바로 day에 저장한다.
}

Date::Date(int ddd, int yyyy) { // int형 매개변수가 2개인 생성자, ddd,yyyy 형태로 받는다.
    this->year = yyyy; // 우선 yyyy를 이 클래스의 year에 저장한다.
    yy__ = year / 100; // 년도의 천,백의자리가 저장된다.
    setMMDDFromDDD(ddd); // ddd형태를 MMDD형태로 저장한다. 알아서 day, month가 저장된다.
    
}

Date::Date(int dd, int mm, int yyyy) { // int형 매개변수가 3개인 생성자, dd,mm,yyyy 형태로 받는다.
    this->year = yyyy; // 우선 yyyy를 이 클래스의 year에 저장한다.
    yy__ = year / 100; // 년도의 천,백의자리가 저장된다.
    if (mm > 0 && mm <= 12) this->month = mm; // 만약 받은 mm값이 1이상 12이하라면 그대로 저장하고,
    else {                                      // 만약 그렇지 않다면 오류메시지와 함께 1을 저장한다.
        this->month = 1;
        cout << "Invalid month (" << mm << ") set to 1.\n";
    }

    this->day = checkDay(dd); // 받은 매개변수 dd를 checkDay에 넣어줌으로써 날짜가 년도,월 을 감안했을 때 제대로된 값인지 판단한다. 그리고 이를 저장한다.
}

Date::Date(string Month, int dd, int yyyy) { // string형 매개변수 1개와 int형 매개변수 2개를 갖는 생성자. Month,dd,yyyy형태로 받는다.
    this->year = yyyy; // 우선 yyyy를 이 클래스의 year에 저장한다.
    yy__ = year / 100; // 년도의 천,백의자리가 저장된다.
    setMMFromMonth(Month); // Month(string)형태를 MM형태로 바꾸어 이 클래스의 month에 저장한다.
    this->day = checkDay(dd); // 받은 매개변수 dd를 checkDay에 넣어줌으로써 날짜가 년도,월 을 감안했을 때 제대로된 값인지 판단한다. 그리고 이를 저장한다.
}

//-------------------------------------------------

void Date::print() const { // month / day / year 형태로 출력하는 함수.
    cout << this->month << " / " << this->day << " / " << this->year << endl;
}

void Date::printDDDYYYY() const {  // DDD / year형태로 출력하는 함수.
    int ddd = convertDDToDDD(); // 현재 클래스의 day값을 ddd형태로 바꾸어줌.
    cout << ddd << " " << this->year << endl;
}
void Date::printMMDDYY() const { // MM / DD / YY 형태로 출력하는 함수.
    int yy = convertYYYYToYY(); // 현재 클래스의 year을 YY형태로 바꿈.
    cout << this->month << "/" << this->day << "/";
    cout << setw(2) << setfill('0') << yy << endl; // 가독성을 위해 2자리를 차지해 출력하도록 코딩. (ex. 2004 -> 4 -> 04)
}
void Date::printMonthDDYYYY() const { // Month(string) / DD / YYYY 형태로 출력하는 함수.
    string Month = convertMMToMonth(this->month); // 현재 클래스의 month를 string형태의 '월'로 바꾸어줌.
    cout << Month << " " << this->day << ", " << this->year << endl;
}

//---------------------------------------------

int Date::checkDay(int testDay) const { // 날짜가 월/년도를 고려했을 때, 올바르게 입력된것인지 판단하는 함수.
    if (testDay > 0 && testDay <= daysInMonth(this->month)) return testDay; 
    // 위 설명: daysMonth를 통해 나온 값보다 작거나 같고, 그리고 0보다 크다면 받았던 값을 그대로 리턴한다.

    cout << "Invalid day (" << testDay << ") set to 1.\n"; 
    return 1; // 만약 위 if문이 충족되지 않으면 날짜가 잘못입력된것이므로, 1로 초기화.
}

int Date::daysInMonth(int) const { // 위 checkDay에서 쓰인다. '월'을 입력했을 때 이에 해당하는 일자를 return 해주는 함수이다.
    static const int daysPerMonth[13] = // 이는 불변하는 값이기 때문에, 이렇게 값들을 미리 const로 선언해둔다. (아래에서, 윤년은 제외시킨다,)
    { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (this->month == 2) { // 만약 해당 월이 2월이고, 윤년이라면 daPerMonth값에 1을 더해 (즉, 29일) 이를 사용하도록 한다.
        if (isLeapYear() == 1) return daysPerMonth[this->month]+1;
    }
    return daysPerMonth[this->month]; // 위 특이조건이 없다면 그냥 월에 대한 일자를 return해준다.
}

bool Date::isLeapYear() const { // 위 daysInMonth에서 쓰인다. 이 클래스에 입력되어있는 년도가 윤년인지 판단하는 함수이다. return 자료형은 bool이다.
    if ((this->year % 400) == 0 || ((this->year % 100) != 0 && (this->year % 4) == 0)) return 1;  // true : is leap year
    // 위 if문은 윤년을 확인하는 함수이다. 위 조건이 성립되지 않으면 (윤년이 아니라면) 0을 return한다.
    return 0;
}


int Date::convertDDToDDD() const { // DD형태를 DDD형태로 바꿔주어 int자료형으로 return 하는 함수이다. 이는 printDDDYYYY에서 쓰인다.
    static const int daysPerMonth[13] = // 이는 불변하는 값이기 때문에, 이렇게 값들을 미리 const로 선언해둔다. (아래에서, 윤년은 제외시킨다,)
    { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int ddd = this->day;
    for (int i = 1; i < this->month; i++) {
        ddd += daysPerMonth[i];
    }
    if ((this->month >= 3) && (isLeapYear() == 1)) ddd++;
    // 만약 해당년도가 윤년이라면 ddd에 1 추가. (대신, 3월 이상일때만 1을 더해야 소용있기에 이렇게 코딩했다.)
    return ddd; // 이 ddd를 리턴하면 MMDD가 DDD형태로 바뀌는 것이다.
}

void Date::setMMDDFromDDD(int ddd) { // DDD형태를 MMDD형태로 바꾸어 저장하는 함수이다. 생성자를 Date(ddd,yyyy)로 받았을 때에 쓰인다.
    static int daysPerMonth_S[13] = // 계산할 때에 쓰일 '월' 일수를 저장해놓는 배열이다.
    { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int i = 0;  
    if (isLeapYear() == 1) daysPerMonth_S[2] += 1; // 만약 윤년이라면 2월에 해당하는 3번째 배열에 1을 더해줘 윤년을 충족하게 해준다.
    for (;;) { // 무한로프를 돌며, 계산값에 맞도록 ddd값에서 '월'별'일'을 계속해서 빼내도록 하였다.
        i++;
        if (daysPerMonth_S[i] >= ddd) break; // ddd값이 뺄 수 있는 값보다 작다면 break하도록 했다.
        ddd -= daysPerMonth_S[i];
    }
    this->day = ddd;
    this->month = i;
}

string Date::convertMMToMonth(int mm) const { // MM형태를 Month(string) 로 바꾸어 string 자료형으로 return 해주는 함수이다. 이는 printMonthDDYYYY에서 쓰인다. 
    static const string Months[13] = // 1월부터 12월까지 영어로 '월'을 선언해준 후, 해당 월에 대한 string값을 return해주었다.
    { "Error", "Janyary", "February", "March", "April", "May", "June", "July",
    "August", "September", "October", "November", "December" };
    return Months[mm];
}
void Date::setMMFromMonth(string Month) { // Month형태를 MM형태로 바꾸어 저장하는 함수이다. 생성자를 Date(Month,dd,yyyy)로 받았을 때에 쓰인다.
    static const string Months[13] =  // 1월부터 12월까지 영어로 '월'을 선언.
    { "Error", "Janyary", "February", "March", "April", "May", "June", "July",
    "August", "September", "October", "November", "December" };
    for (int i = 1; i <= 12; i++) // if문을 통해 매개면수 Month와 Months(string형)을 비교, 결과로 몇 '월'인지 저장한다.
    {
        if (Month == Months[i]) this->month = i;
    }
}
int Date::convertYYYYToYY() const { // YYYY형태를 YY로 바꾸어 int자료형으로 return 하는 함수이다. 이는 printMMDDYY에서 쓰인다. 
    int yy = this->year % 100; // 100으로 나눴을 때의 나머지를 저장하면 yyyy형태가 yy형태가 된다.
    return yy;
}
void Date::setYYYYFromYY(int yy) { // YY형태를 YYYY형태로 바꾸어 저장할 때에 쓰인다. 아무곳에서도 쓰이지 않는다. (고찰에 추가적으로 적겠다.)
    this->year = yy + yy__ * 100; // 시시때때로 저장해두었던 년도의 천,백의자리에 100을 곱한 후 yy를 더하여 yyyy형태로 표현한다.
}
