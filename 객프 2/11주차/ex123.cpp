#include<iostream>
#include<string>
using namespace std;

#include "hw_SavingsAccount.h" // SavingAccount.h ��� ������� include
#include "hw_CheckingAccount.h" // CheckingAccount.h ��� ������� include

int main()
{
	string name;
	double balance;
	double interestrate;

	cout << "------------------SavingAccount ����------------------" << endl;
	cout << "�̸��� �Է��ϼ��� : ";
	cin >> name;
	cout << "�ܾ��� �Է��ϼ��� : ";
	cin >> balance;
	cout << "�� �������� �Է��ϼ��� : ";
	cin >> interestrate;

	SavingAccount s1(name, balance, interestrate);
	//SavingAccount��ü s1 ���� ��, name, balance, interestrate �����ڿ��� ����

	double transfee;
	double c;
	double d;

	cout << "------------------CheckingAccount ����------------------" << endl;
	cout << "�̸��� �Է��ϼ��� : ";
	cin >> name;
	cout << "�ܾ��� �Է��ϼ��� : ";
	cin >> balance;
	cout << "�����Ḧ �Է��ϼ��� : ";
	cin >> transfee;

	CheckingAccount c1(name, balance, transfee);
	//CheckingAccount��ü c1 ���� ��, name, balance, transfee �����ڿ��� ����

	cout << "�Ա��� �ݾ��� �Է��ϼ��� : ";
	cin >> c;
	c1.credit(c);
	c1.print();
	//c�Է¹��� �� ���

	cout << "����� �ݾ��� �Է��ϼ��� : ";
	cin >> d;
	c1.debit(d);
	c1.print();
	//d�Է¹��� �� ���

	return 0;
}
