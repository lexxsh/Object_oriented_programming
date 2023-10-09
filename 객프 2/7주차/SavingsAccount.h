#pragma once
#ifndef SAVINGSACCOUNT_H //전처리기문
#define SAVINGSACCOUNT_H

class SavingsAccount //클래스 Savingsaccount 생성
{
public:
	SavingsAccount(double);  //기본값을 넣어줄 생성자
	void calculateMonthlyInterest(); //연이자율에서 월이자율을 계산하는 함수
	static void modifyInterestRate(double); //이자율을 세팅해줄 함수
	const void printBalance(); //잔고를 출력하는 함수

	~SavingsAccount(); //소멸자

private:
	double savingsBalance; //잔고를 저장할 멤버 변수
	static double annualInterestRate; //각 예금자의 연이율을 저장하기 위한 멤버변수
};


#endif // !SAVINGSACCOUNT_H
