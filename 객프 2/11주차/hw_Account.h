
#include <iostream>
using namespace std;

#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
public:
	Account(const string&, double); // 클래스의 생성자 string과 double 매개변수
	void credit(double); // balance에 값을 추가해주는 함수
	void debit(double); // debit 기능 balance에서 돈을 출력해주는 함수
	void setBalance(double); // balance를 set해주는 함수
	void setName(const string&); // 이름을 set해주는 함수
	string getName() const; //이름을 get해주는 함수
	double getBalance() const; // balace를 get하는 함수
	void print() const; //내용을 출력해주는 함수
private:
	double balance; // balance를 저장할 멤버변수
	string name; //이름을 저장할 멤버변수
};

#endif