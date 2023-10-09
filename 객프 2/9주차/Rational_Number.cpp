#include <iostream>
using namespace std;

#include "Rational_Number.h" // Rational_Number.h ������� include

RationalNumber::RationalNumber(int num, int den) // RationalNumber ������.
	:numerator(num), denominator(den) // ��� �ʱ�ȭ�⸦ ��� �Ű������� �޾ƿ�.
{
	if (den == 0) { // ���� �и� 0�̸� �и�� 1�� ���ڴ� 0���� �ʱ�ȭ �����ش�.
		numerator = 0;
		denominator = 1;
	}
	reduction(); // ���м� �Լ��� �̿��� �Է¹��� ���� ���м��� ������ش�.
}

RationalNumber RationalNumber::operator+(const RationalNumber& Target) { // + ������ �����ε�
	RationalNumber res(numerator * Target.denominator + Target.numerator * denominator, denominator * Target.denominator);
	res.reduction(); // ���м� ���·� �������
	return res; // ��ü res�� ��ȯ
}

RationalNumber RationalNumber::operator-(const RationalNumber& Target) { // - ������ �����ε�
	RationalNumber res(numerator * Target.denominator - Target.numerator * denominator, denominator * Target.denominator);
	res.reduction(); // ���м� ���·� �������
	return res; // ��ü res�� ��ȯ
}

RationalNumber RationalNumber::operator*(const RationalNumber& Target) { // * ������ �����ε�
	RationalNumber res(numerator * Target.numerator, denominator * Target.denominator);
	res.reduction(); // ���м� ���·� �������
	return res; // ��ü res�� ��ȯ
}

RationalNumber RationalNumber::operator/(RationalNumber& Target) { // / ������ �����ε�
	RationalNumber res(numerator * Target.denominator, denominator * Target.numerator);
	res.reduction(); // ���м� ���·� �������
	return res; // ��ü res�� ��ȯ
}


bool RationalNumber::operator>(const RationalNumber& Target) const { // > ������ �����ε�
	return (numerator * Target.denominator - denominator * Target.numerator > 0);
} // ���� ���̸� 1��, �����̸� 0�� return , �񱳹��� �� �� �ٷ� return �ϵ��� ��.

bool RationalNumber::operator<(const RationalNumber& Target) const { // < ������ �����ε�
	return (numerator * Target.denominator - denominator * Target.numerator < 0);
} 

bool RationalNumber::operator>=(const RationalNumber& Target) const { // >= ������ �����ε�
	return (numerator * Target.denominator - denominator * Target.numerator >= 0);
} 

bool RationalNumber::operator<=(const RationalNumber& Target) const { // <= ������ �����ε�
	return (numerator * Target.denominator - denominator * Target.numerator <= 0);
} 

bool RationalNumber::operator==(const RationalNumber& Target) const { // == ������ �����ε�
	return (numerator * Target.denominator - denominator * Target.numerator == 0);
} 

bool RationalNumber::operator!=(const RationalNumber& Target) const { // != ������ �����ε�
	return (numerator * Target.denominator - denominator * Target.numerator != 0);
} 


void RationalNumber::printRational() const {
	if (numerator == 0) cout << "0" << endl; // ���ڰ� 0�̸� 0 ���
	else if (numerator % denominator == 0) cout << numerator / denominator << endl; // 1/1�� 1�� �������� �Ѵ�.
	else cout << numerator << "/" << denominator << endl; // �� 2���� ��찡 �ƴ϶�� ������� ����/�и� ���·� ������ ��.
}


void RationalNumber::reduction() { //���м�ȭ �ϴ� �Լ�
	int a, b, c; // int �ڷ��� ���� 3�� ����.
	a = numerator; 
	b = denominator;
	while (b != 0) { // ��Ŭ���� ȣ������ ���� �ִ������� ���Ѵ�.
		c = a % b;
		a = b;
		b = c;
	} // while���� ��ģ ���� a�� �ִ������� �ȴ�
	numerator /= a; // ���ڸ� �ִ������� �����ش�.
	denominator /= a; // �и� �ִ������� �����ش�.
}