
#ifndef CHECKING_H
#define CHECKING_H

#include "hw_Account.h" // Account class �� �߰�

//class CheckingAccount : public Account
class CheckingAccount : public Account //���
{
public:
	CheckingAccount(const string&, double, double); //Ŭ������ �����ڿ� �Ҹ���
	~CheckingAccount();

	void setTransfee(double); //transfee�� set���ִ� �Լ�
	double getTransfee() const; //transfee�� get���ִ� �Լ�

	void credit(double); // �Աݱݾ��� ���� �Լ�
	void debit(double); // ��ݱݾ��� ���� �Լ�

	void print() const; //������ִ� �Լ�

private:
	double transfee; //double�� transfee�� ���� �������
};
#endif