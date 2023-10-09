#include <iostream>
using namespace std;

#include "Rational_Number.h" //  ������� include

int main() {
	RationalNumber R1(2,7); // 1/2 ��ü ����
	RationalNumber R2(7,6); // 7/6 ��ü ����
	RationalNumber res; // �����ε��� �����ڷ� ����� ���� ����ϴ� ��ü ����.

	// R1�� R2�� ���
	cout << "R1 is ";
	R1.printRational();
	cout << "R2 is ";
	R2.printRational();

	// ��Ģ���� 

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


	// ��Һ� 

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
