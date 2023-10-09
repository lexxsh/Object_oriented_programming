#include "SavingsAccount.h" //������� ����
#include<iostream>	
using namespace std;

int main() {
	SavingsAccount* saver1 = new SavingsAccount(2000.00);	//new�� ����Ͽ� saver1�� �����Ҵ��� ���־���.
	SavingsAccount* saver2 = new SavingsAccount(3000.00);	//new�� ����Ͽ� saver2�� �����Ҵ��� ���־���.

	saver1->printBalance();		//�����ܰ� ���
	saver2->printBalance();

	cout << "-----------------------" << endl;

	SavingsAccount::modifyInterestRate(0.03);	//�������� 0.03���� ����
	

	saver1->calculateMonthlyInterest(); //���������� ���������� ����� �ܰ���
	saver1->printBalance();				//����� �ܰ����

	saver2->calculateMonthlyInterest();
	saver2->printBalance();

	cout << "-----------------------" << endl;
		
	SavingsAccount::modifyInterestRate(0.04);	//���������� 0.04�� ����
		

	saver1->calculateMonthlyInterest();	//���������� ���������� ��� �� �ܰ���
	saver1->printBalance();

	saver2->calculateMonthlyInterest(); 
	saver2->printBalance();
	delete saver1; //�����Ҵ��� �� ��ü�� delete ���� 
	saver1 = 0; //������ ����
	delete saver2;
	saver2 = 0;
}