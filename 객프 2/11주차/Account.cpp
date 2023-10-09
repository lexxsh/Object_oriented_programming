#pragma once
#include<iostream>
#include<string>
using namespace std;
#include "hw_Account.h"

Account::Account(const string& n, double b)
{
	setName(n);
	setBalance(b);
} //생성자

void Account::setName(const string& n)
{
	name = n;
} //name에 n값 대입(name 설정)
string Account::getName() const
{
	return name;
} //name값 반환

void Account::setBalance(double b)
{
	balance = b;
} //balance에 b값 대입(balance 설정)
double Account::getBalance() const
{
	return balance;
} //balance값 반환

void Account::credit(double c)
{
	setBalance(getBalance() + c);
} //balance에 c값 추가(예금)
void Account::debit(double d)
{
	if (d <= getBalance())
	{
		setBalance(getBalance() - d);
	} //d가 balance보다 작으면 balance에서 d만큼 차감
	else
	{
		cout << "잔액이 부족합니다." << endl;
	} //d가 balance보다 클때 오류
}

void Account::print() const
{
	cout << getName() << "님의 잔액은 " << getBalance() << "원 입니다." << endl << endl;
}