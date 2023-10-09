#include<iostream>
#include<string>
using namespace std;

#include "hw_SavingsAccount.h" // SavingAccount.h ��� ������� include


SavingAccount::SavingAccount(const string& n, double b, double i)
	:Account(n, b)
{
	Account::print();
	if (i > 1 || i < 0)
	{
		cout << "�߸��� ������ �Դϴ�. 0.01%�� �ʱ�ȭ�մϴ�." << endl;
		setInterestrate(0.01);
	} //�������� 0~1����
	else
	{
		setInterestrate(i);
	} //�������� 0~1�� �ƴϸ� 0.01�� �ʱ�ȭ
	updateBalance();
	print();

} //������

SavingAccount::~SavingAccount()
{

} //�Ҹ���

void SavingAccount::setInterestrate(double i)
{
	interestrate = i;
} //interestrate�� i�� ����(interestrate ����)
double SavingAccount::getInterestrate() const
{
	return interestrate;
} //interestrate�� ��ȯ

double SavingAccount::calculate() const
{
	return getBalance() * getInterestrate();
} //balance * interestrate
void SavingAccount::updateBalance()
{
	setBalance(getBalance() + calculate());
} //balance�� balance + calculate�� ������Ʈ

void SavingAccount::print() const
{
	cout << "�� �� �� " << getName() << "�� ������ " << getInterestrate() << "��" << endl;
	Account::print();
} //���