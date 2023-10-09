#include<iostream>
#include<string>
using namespace std;

#include "hw_SavingsAccount.h" // SavingAccount.h 라는 헤더파일 include


SavingAccount::SavingAccount(const string& n, double b, double i)
	:Account(n, b)
{
	Account::print();
	if (i > 1 || i < 0)
	{
		cout << "잘못된 이자율 입니다. 0.01%로 초기화합니다." << endl;
		setInterestrate(0.01);
	} //이자율은 0~1사이
	else
	{
		setInterestrate(i);
	} //이자율이 0~1이 아니면 0.01로 초기화
	updateBalance();
	print();

} //생성자

SavingAccount::~SavingAccount()
{

} //소멸자

void SavingAccount::setInterestrate(double i)
{
	interestrate = i;
} //interestrate에 i값 대입(interestrate 설정)
double SavingAccount::getInterestrate() const
{
	return interestrate;
} //interestrate값 반환

double SavingAccount::calculate() const
{
	return getBalance() * getInterestrate();
} //balance * interestrate
void SavingAccount::updateBalance()
{
	setBalance(getBalance() + calculate());
} //balance를 balance + calculate로 업데이트

void SavingAccount::print() const
{
	cout << "한 달 뒤 " << getName() << "는 이자율 " << getInterestrate() << "로" << endl;
	Account::print();
} //출력