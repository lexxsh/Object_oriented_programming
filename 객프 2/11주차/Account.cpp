#pragma once
#include<iostream>
#include<string>
using namespace std;
#include "hw_Account.h"

Account::Account(const string& n, double b)
{
	setName(n);
	setBalance(b);
} //������

void Account::setName(const string& n)
{
	name = n;
} //name�� n�� ����(name ����)
string Account::getName() const
{
	return name;
} //name�� ��ȯ

void Account::setBalance(double b)
{
	balance = b;
} //balance�� b�� ����(balance ����)
double Account::getBalance() const
{
	return balance;
} //balance�� ��ȯ

void Account::credit(double c)
{
	setBalance(getBalance() + c);
} //balance�� c�� �߰�(����)
void Account::debit(double d)
{
	if (d <= getBalance())
	{
		setBalance(getBalance() - d);
	} //d�� balance���� ������ balance���� d��ŭ ����
	else
	{
		cout << "�ܾ��� �����մϴ�." << endl;
	} //d�� balance���� Ŭ�� ����
}

void Account::print() const
{
	cout << getName() << "���� �ܾ��� " << getBalance() << "�� �Դϴ�." << endl << endl;
}