#include <iostream> // ������� iosteram�� include
using namespace std; // std::�� �����ϵ��� ����.

#include "Date.h" // Date.h��� ��������� include

int main() {
	Date d1; // ����ð��� ����ȴ�. (2021/04/14)
	Date d2(14, 4, 2024); // 2024�� 4�� 14���� ���Եȴ�.

	Date d3(10, 1998); // 1998�� 1�� 1�Ϻ��� ������ ���� 10�Ͽ� ��ġ�� ��¥�� ���´�. (1998/1/1)
	Date d4(180, 1998); // 1998�� 1�� 1�Ϻ��� ������ ���� 180�Ͽ� ��ġ�� ��¥�� ���´�. (1998/6/29)
	
	Date d5("July", 30, 2020); // 2020�� 7�� 30���� ���Եȴ�.

	d1.printDDDYYYY();     // 104 2021
	d1.printMMDDYY();	   // 4/14/21
	d1.printMonthDDYYYY(); // April 14, 2021
	cout << endl;

	d2.printDDDYYYY();     // 105 2024
	d2.printMMDDYY();	   // 4/14/24
	d2.printMonthDDYYYY(); // April 14, 2024
	cout << endl;

	d3.printDDDYYYY();     // 10 1998
	d3.printMMDDYY();	   // 1/10/98
	d3.printMonthDDYYYY(); // Janyary 10, 1998
	cout << endl;

	d4.printDDDYYYY();     // 180 1998
	d4.printMMDDYY();	   // 6/29/98
	d4.printMonthDDYYYY(); // June 29, 1998
	cout << endl;

	d5.printDDDYYYY();     // 212 2020
	d5.printMMDDYY();	   // 7 / 30 / 20
	d5.printMonthDDYYYY(); // July 30, 2020
	cout << endl;
	return 0;
}
