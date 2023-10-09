#include<iostream>
#include<string>
#include "Employee.h"
using namespace std;

Employee::Employee(string f, string l, int s) //���� ���� ������ ::���� ��������� Ŭ���� �κп� �����Ѵ�. ������ ��Ʈ�̴�.
{
	setFirstName(f); //������ �κ��� set�Լ��̴�. ������ ����� ���� ����ȴ�.
	setLastName(l);  
	setMonthlySalary(s);
}
void Employee::setFirstName(string f) { //ù��° �̸��� �޴� set�Լ��̴�. ������Ͽ��� ���� ���������ڷ� �����Ͽ���.
	FirstName = f;						//���� string f�� ��������� firstname�� �Է¹޴´�.
}
string Employee::getFirstName() {//ù��° �̸��� ��ȯ�ϴ� get�Լ��̴�. ������Ͽ��� ���� ���������ڷ� �����Ͽ���.
	return FirstName;			//��������� firstname�� ��ȯ�Ѵ�.
}
void Employee::setLastName(string l) {	//������ �̸��� �޴� set�Լ��̴�. ������Ͽ��� ���� ���������ڷ� �����Ͽ���.
	lastName = l;						//lastname������ �Ű������� l�� �Է¹޴´�.
}
string Employee::getLastName() {//������ �̸��� ��ȯ�ϴ� get�Լ��̴�. ������Ͽ��� ���� ���������ڷ� �����Ͽ���.
	return lastName;			//lastname�� ��ȯ�Ѵ�.
}
void Employee::setMonthlySalary(int s) {//�̹��� ������ �޴� set�Լ��̴�. ������Ͽ��� ���� ���������ڷ� �����Ͽ���.
	if (s < 0) monthlySalary = 0;		//���� ������ 0���� ���� ��� 0�� monthlysalary�� ��������.
	else monthlySalary = s;				//������ 0���� ū��� �Ű����� s�� ������ �����Ѵ�.
}
int Employee::getMonthlySalary() {		//�̹��� ������ ��ȯ�ϴ� get�Լ��̴�.���������ڷ� �����Ͽ���.
	return monthlySalary;				//monthlysalary�� ��ȯ�Ѵ�.
}