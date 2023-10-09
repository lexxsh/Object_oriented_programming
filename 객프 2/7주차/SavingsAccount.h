#pragma once
#ifndef SAVINGSACCOUNT_H //��ó���⹮
#define SAVINGSACCOUNT_H

class SavingsAccount //Ŭ���� Savingsaccount ����
{
public:
	SavingsAccount(double);  //�⺻���� �־��� ������
	void calculateMonthlyInterest(); //������������ ���������� ����ϴ� �Լ�
	static void modifyInterestRate(double); //�������� �������� �Լ�
	const void printBalance(); //�ܰ� ����ϴ� �Լ�

	~SavingsAccount(); //�Ҹ���

private:
	double savingsBalance; //�ܰ� ������ ��� ����
	static double annualInterestRate; //�� �������� �������� �����ϱ� ���� �������
};


#endif // !SAVINGSACCOUNT_H
