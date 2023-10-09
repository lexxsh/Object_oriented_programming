#include<iostream>
#include<string>
using namespace std;

#include "hw_CheckingAccount.h" // CheckingAccount.h 라는 헤더파일 include 

CheckingAccount::CheckingAccount(const string& n, double b, double t = 10000)
	:Account(n, b)
{
	setTransfee(t);
	Account::print();
} //생성자

CheckingAccount::~CheckingAccount()
{

} //소멸자

void CheckingAccount::setTransfee(double t)
{
	transfee = t;
} //transfee에 t값 대입(transfee 설정)
double CheckingAccount::getTransfee() const
{
	return transfee;
} //transfee값 반환

void CheckingAccount::credit(double c)
{
	if (c >= transfee)
	{
		c = c - transfee;
		Account::credit(c);
	} //c가 transfee보다 크면 c = c - transfee
	else
	{
		cout << "입금금액이 수수료보다 적습니다" << endl;
	} //c가 transfee보다 작을 때 오류
}
void CheckingAccount::debit(double d)
{
	if (d >= transfee)
	{
		d = d + transfee;
		Account::debit(d);
	} //d가 transfee보다 크면 d = d + transfee
	else
	{
		cout << "출금금액이 수수료보다 적습니다" << endl;
	} //d가 transfee보다 작으면 오류
}

void CheckingAccount::print() const
{
	cout << "수수료 " << getTransfee() << "으로" << endl;
	Account::print();
} //출력
