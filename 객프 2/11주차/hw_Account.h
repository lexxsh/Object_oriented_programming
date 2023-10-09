
#include <iostream>
using namespace std;

#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
public:
	Account(const string&, double); // Ŭ������ ������ string�� double �Ű�����
	void credit(double); // balance�� ���� �߰����ִ� �Լ�
	void debit(double); // debit ��� balance���� ���� ������ִ� �Լ�
	void setBalance(double); // balance�� set���ִ� �Լ�
	void setName(const string&); // �̸��� set���ִ� �Լ�
	string getName() const; //�̸��� get���ִ� �Լ�
	double getBalance() const; // balace�� get�ϴ� �Լ�
	void print() const; //������ ������ִ� �Լ�
private:
	double balance; // balance�� ������ �������
	string name; //�̸��� ������ �������
};

#endif