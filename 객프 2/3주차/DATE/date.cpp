#include<iostream>
#include<string>
#include"Date.h"

using namespace std;
Date::Date(int m, int d, int y) //���� ���� ������ ::���� ��������� Ŭ���� �κп� �����Ѵ�. ������ ��Ʈ�̴�. ������ ����� �⺻���� ����ǰ� �Ѵ�.
	setMonth(m);				//������ ���� ���� �����ϴ� �Լ�
	setDay(d);					//������ ���� ���� �����ϴ� �Լ�
	setYear(y);					//������ ���� ���� �����ϴ� �Լ�
}
void Date::setMonth(int m) {   //���� ���� �����ڸ� ����� Date Ŭ������ setMonth �Լ��� �����Ѵ�.
	if (0 < m && m < 13) month = m;	//���� �Ű������� ���� m(��)�� 0~13���̿� ������ month ��������� �̰��� �����Ѵ�.
	else month = 1;					//���� ��찡 �ƴѰ�� month������ 1�� �����Ѵ�.
}	
int Date::getMonth() {			//���� ���������ڸ� �̿��� DateŬ������ getMonth �Լ��� �����Ѵ�.	
	return month;				//��� ������ ���� ���� ����Ǿ��ִ� ������ ��ȯ�Ѵ�.
}
void Date::setDay(int d) {     //���� ���������ڸ� �̿��� setDay�Լ��� �����Ѵ�.
	day = d;				//��¥�� ������ ������ day�� �Ű����� d���� �����Ѵ�.
}
int Date::getDay() {		//��¥�� ��ȯ�ϴ� �Լ��� getDay �Լ�
	return day;				//��¥�� ������ִ� ���� day�� ��ȯ�Ѵ�.
}
void Date::setYear(int y) {	 //���� ���� �����ڸ� ����� Date Ŭ������ setYear �Լ��� �����Ѵ�.
	year = y;				//���� ������ִ� ���� �Ű������� ���� y�� �����Ѵ�.
}
int Date::getYear() {		//��¥�� ��ȯ�ϴ� �Լ��� getYear �Լ�
	return year;			//��¥�� ������ִ� ���� year�� ��ȯ�Ѵ�.
}
void Date::displayDate() {
	cout << "Original date:\n" << month << "/" << day << "/" << year << endl; //�־��� ���Ĵ�� date�� ����Ѵ�.
}