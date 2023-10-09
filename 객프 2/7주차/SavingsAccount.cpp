#include "SavingsAccount.h" //헤더파일 선언
#include<iostream>

using namespace std;
double SavingsAccount::annualInterestRate = 0.03; //static을 사용해주었으므로 이자율을 초기화시켜주는 코드
SavingsAccount::SavingsAccount(double money) //생성자
{
	savingsBalance = money;					//인자로 받은 매개변수 money를 잔고에 저장
	if (money < 0) savingsBalance = 0;		//만약 입력된 돈이 0보다 작다면 0원으로 저장
}

void SavingsAccount::calculateMonthlyInterest()	//월 이자율을 계산하는 함수
{
	savingsBalance *= (1 + annualInterestRate / 12); //연 이자율을 12로 나누고 1을 더한후 잔고와 곱해주어 계산해준다.
}

void SavingsAccount::modifyInterestRate(double interestrate) //연 이자율을 세팅해주는 함수
{
	annualInterestRate = interestrate;		//매개변수 interestrate(연이자율)을 멤버변수에 저장
	if (interestrate < 0) annualInterestRate = 0.03;	//만약 입력받은 연이자율이 0보다 작다면 0.03을 저장한다.
}

const void SavingsAccount::printBalance()	//잔고를 출력하는 함수
{
	cout << "Your Balance is $" << savingsBalance << endl; //잔고를 출력
}

SavingsAccount::~SavingsAccount() //소멸자
{
}
