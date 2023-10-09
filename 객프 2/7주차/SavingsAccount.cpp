#include "SavingsAccount.h" //������� ����
#include<iostream>

using namespace std;
double SavingsAccount::annualInterestRate = 0.03; //static�� ������־����Ƿ� �������� �ʱ�ȭ�����ִ� �ڵ�
SavingsAccount::SavingsAccount(double money) //������
{
	savingsBalance = money;					//���ڷ� ���� �Ű����� money�� �ܰ� ����
	if (money < 0) savingsBalance = 0;		//���� �Էµ� ���� 0���� �۴ٸ� 0������ ����
}

void SavingsAccount::calculateMonthlyInterest()	//�� �������� ����ϴ� �Լ�
{
	savingsBalance *= (1 + annualInterestRate / 12); //�� �������� 12�� ������ 1�� ������ �ܰ�� �����־� ������ش�.
}

void SavingsAccount::modifyInterestRate(double interestrate) //�� �������� �������ִ� �Լ�
{
	annualInterestRate = interestrate;		//�Ű����� interestrate(��������)�� ��������� ����
	if (interestrate < 0) annualInterestRate = 0.03;	//���� �Է¹��� ���������� 0���� �۴ٸ� 0.03�� �����Ѵ�.
}

const void SavingsAccount::printBalance()	//�ܰ� ����ϴ� �Լ�
{
	cout << "Your Balance is $" << savingsBalance << endl; //�ܰ� ���
}

SavingsAccount::~SavingsAccount() //�Ҹ���
{
}
