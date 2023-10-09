#include <iostream> // 헤더파일 iosteram을 include
using namespace std; // std::을 생략하도록 설정.

#include "Date.h" // Date.h라는 헤더파일을 include

int main() {
	Date d1; // 현재시간이 저장된다. (2021/04/14)
	Date d2(14, 4, 2024); // 2024년 4월 14일을 갖게된다.

	Date d3(10, 1998); // 1998년 1월 1일부터 따졌을 때에 10일에 위치한 날짜를 갖는다. (1998/1/1)
	Date d4(180, 1998); // 1998년 1월 1일부터 따졌을 때에 180일에 위치한 날짜를 갖는다. (1998/6/29)
	
	Date d5("July", 30, 2020); // 2020년 7월 30일을 갖게된다.

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
