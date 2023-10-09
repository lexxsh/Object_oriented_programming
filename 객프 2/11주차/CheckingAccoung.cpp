#include<iostream>
#include<string>
using namespace std;

#include "hw_CheckingAccount.h" // CheckingAccount.h ��� ������� include 

CheckingAccount::CheckingAccount(const string& n, double b, double t = 10000)
	:Account(n, b)
{
	setTransfee(t);
	Account::print();
} //������

CheckingAccount::~CheckingAccount()
{

} //�Ҹ���

void CheckingAccount::setTransfee(double t)
{
	transfee = t;
} //transfee�� t�� ����(transfee ����)
double CheckingAccount::getTransfee() const
{
	return transfee;
} //transfee�� ��ȯ

void CheckingAccount::credit(double c)
{
	if (c >= transfee)
	{
		c = c - transfee;
		Account::credit(c);
	} //c�� transfee���� ũ�� c = c - transfee
	else
	{
		cout << "�Աݱݾ��� �����Ẹ�� �����ϴ�" << endl;
	} //c�� transfee���� ���� �� ����
}
void CheckingAccount::debit(double d)
{
	if (d >= transfee)
	{
		d = d + transfee;
		Account::debit(d);
	} //d�� transfee���� ũ�� d = d + transfee
	else
	{
		cout << "��ݱݾ��� �����Ẹ�� �����ϴ�" << endl;
	} //d�� transfee���� ������ ����
}

void CheckingAccount::print() const
{
	cout << "������ " << getTransfee() << "����" << endl;
	Account::print();
} //���
