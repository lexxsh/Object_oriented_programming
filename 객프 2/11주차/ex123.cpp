#include<iostream>
#include<string>
using namespace std;

#include "hw_SavingsAccount.h" // SavingAccount.h 라는 헤더파일 include
#include "hw_CheckingAccount.h" // CheckingAccount.h 라는 헤더파일 include

int main()
{
	string name;
	double balance;
	double interestrate;

	cout << "------------------SavingAccount 생성------------------" << endl;
	cout << "이름을 입력하세요 : ";
	cin >> name;
	cout << "잔액을 입력하세요 : ";
	cin >> balance;
	cout << "달 이자율을 입력하세요 : ";
	cin >> interestrate;

	SavingAccount s1(name, balance, interestrate);
	//SavingAccount객체 s1 생성 후, name, balance, interestrate 생성자에게 전달

	double transfee;
	double c;
	double d;

	cout << "------------------CheckingAccount 생성------------------" << endl;
	cout << "이름을 입력하세요 : ";
	cin >> name;
	cout << "잔액을 입력하세요 : ";
	cin >> balance;
	cout << "수수료를 입력하세요 : ";
	cin >> transfee;

	CheckingAccount c1(name, balance, transfee);
	//CheckingAccount객체 c1 생성 후, name, balance, transfee 생성자에게 전달

	cout << "입금할 금액을 입력하세요 : ";
	cin >> c;
	c1.credit(c);
	c1.print();
	//c입력받은 후 출력

	cout << "출금할 금액을 입력하세요 : ";
	cin >> d;
	c1.debit(d);
	c1.print();
	//d입력받은 후 출력

	return 0;
}
