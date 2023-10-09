#pragma once
#ifndef RATIONAL_NUMBER_H //��ó����
#define RATIONAL_NUMBER_H
class RationalNumber { //class ���� 
public:
	RationalNumber(int = 0, int = 1); // RationalNumber ������. default������ 0�� 1�� ����
	RationalNumber operator+(const RationalNumber&); // + ������ �����ε�
	RationalNumber operator-(const RationalNumber&); // - ������ �����ε�
	RationalNumber operator*(const RationalNumber&); // * ������ �����ε�
	RationalNumber operator/(RationalNumber&); // / ������ �����ε�


	bool operator>(const RationalNumber&) const;// > ������ �����ε�
	bool operator<(const RationalNumber&) const;// < ������ �����ε�
	bool operator>=(const RationalNumber&) const;// >= ������ �����ε�
	bool operator<=(const RationalNumber&) const;// <= ������ �����ε�

	bool operator==(const RationalNumber&) const;// == ������ �����ε�
	bool operator!=(const RationalNumber&) const;// != ������ �����ε�
	void printRational() const; //��� ��� �Լ�
private:
	int numerator; //���ڸ� ���� ����
	int denominator; //�и� ���� ����
	void reduction(); //���м��� ������� �Լ�
}; 
#endif