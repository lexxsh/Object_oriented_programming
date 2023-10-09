#include "SavingsAccount.h" //헤더파일 선언
#include<iostream>	
using namespace std;

int main() {
	SavingsAccount* saver1 = new SavingsAccount(2000.00);	//new를 사용하여 saver1에 동적할당을 해주었다.
	SavingsAccount* saver2 = new SavingsAccount(3000.00);	//new를 사용하여 saver2에 동적할당을 해주었다.

	saver1->printBalance();		//현재잔고를 출력
	saver2->printBalance();

	cout << "-----------------------" << endl;

	SavingsAccount::modifyInterestRate(0.03);	//이자율을 0.03으로 세팅
	

	saver1->calculateMonthlyInterest(); //연이자율을 월이자율로 계산후 잔고계산
	saver1->printBalance();				//계산후 잔고출력

	saver2->calculateMonthlyInterest();
	saver2->printBalance();

	cout << "-----------------------" << endl;
		
	SavingsAccount::modifyInterestRate(0.04);	//연이자율을 0.04로 세팅
		

	saver1->calculateMonthlyInterest();	//연이자율을 월이자율로 계산 후 잔고계산
	saver1->printBalance();

	saver2->calculateMonthlyInterest(); 
	saver2->printBalance();
	delete saver1; //동적할당을 한 객체를 delete 해줌 
	saver1 = 0; //포인터 해제
	delete saver2;
	saver2 = 0;
}