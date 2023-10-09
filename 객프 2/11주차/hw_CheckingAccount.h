
#ifndef CHECKING_H
#define CHECKING_H

#include "hw_Account.h" // Account class 를 추가

//class CheckingAccount : public Account
class CheckingAccount : public Account //상속
{
public:
	CheckingAccount(const string&, double, double); //클래스의 생성자와 소멸자
	~CheckingAccount();

	void setTransfee(double); //transfee를 set해주는 함수
	double getTransfee() const; //transfee를 get해주는 함수

	void credit(double); // 입금금액을 받을 함수
	void debit(double); // 출금금액을 받을 함수

	void print() const; //출력해주는 함수

private:
	double transfee; //double형 transfee를 담을 멤버변수
};
#endif