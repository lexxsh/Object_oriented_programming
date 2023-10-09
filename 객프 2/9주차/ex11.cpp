#include <iostream>
using namespace std;

#include "Rational_Number.h" //  헤더파일 include

int main() {
	RationalNumber R1(2,7); // 1/2 객체 선언
	RationalNumber R2(7,6); // 7/6 객체 선언
	RationalNumber res; // 오버로딩된 연산자로 계산할 값을 담당하는 객체 선언.

	// R1과 R2를 출력
	cout << "R1 is ";
	R1.printRational();
	cout << "R2 is ";
	R2.printRational();

	// 사칙연산 

	cout << "R1 + R2 = ";
	res = R1 + R2;
	res.printRational();

	cout << "R1 - R2 = ";
	res = R1 - R2;
	res.printRational();

	cout << "R1 * R2 = ";
	res = R1 * R2;
	res.printRational();

	cout << "R1 / R2 = ";
	res = R1 / R2;
	res.printRational();


	// 대소비교 

	cout << "R1 > R2 ";
	if (R1 > R2) cout << "True" << endl;
	else cout << "False" << endl;

	cout << "R1 < R2 ";
	if (R1 < R2) cout << "True" << endl;
	else cout << "False" << endl;

	cout << "R1 >= R2 ";
	if (R1 >= R2) cout << "True" << endl;
	else cout << "False" << endl;

	cout << "R1 <= R2 ";
	if (R1 <= R2) cout << "True" << endl;
	else cout << "False" << endl;

	cout << "R1 == R2 ";
	if (R1 == R2) cout << "True" << endl;
	else cout << "False" << endl;

	cout << "R1 != R2 ";
	if (R1 != R2) cout << "True" << endl;
	else cout << "False" << endl;

}
