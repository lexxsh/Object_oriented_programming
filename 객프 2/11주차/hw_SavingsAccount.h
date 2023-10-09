
#ifndef SAVINGS_H
#define SAVINGS_H

#include "hw_Account.h" // Account ������� �߰�

class SavingAccount : public Account //Account Ŭ���� ���
{
public:
	SavingAccount(const string&, double, double); //Ŭ������ �����ڿ� �Ҹ���
	~SavingAccount();

	void setInterestrate(double); //interestrate�� set���ִ� �Լ�
	double getInterestrate() const; //interestrate�� get���ִ� �Լ�

	double calculate() const; //balance�� interestrate�� �����ִ� �Լ�

	void updateBalance(); //Balance�� ������Ʈ ���ִ� �Լ�

	void print() const; //����� ���ִ� �Լ�

private:
	double interestrate; //interestrate�� ���� double�� �������
};
#endif
