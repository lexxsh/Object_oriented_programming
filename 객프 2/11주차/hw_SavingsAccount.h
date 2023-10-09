
#ifndef SAVINGS_H
#define SAVINGS_H

#include "hw_Account.h" // Account 헤더파일 추가

class SavingAccount : public Account //Account 클래스 상속
{
public:
	SavingAccount(const string&, double, double); //클래스의 생성자와 소멸자
	~SavingAccount();

	void setInterestrate(double); //interestrate를 set해주는 함수
	double getInterestrate() const; //interestrate를 get해주는 함수

	double calculate() const; //balance와 interestrate를 곱해주는 함수

	void updateBalance(); //Balance를 업데이트 해주는 함수

	void print() const; //출력을 해주는 함수

private:
	double interestrate; //interestrate를 담을 double형 멤버변수
};
#endif
