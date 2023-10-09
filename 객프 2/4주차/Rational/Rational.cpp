#include "Rational.h"
#include<iostream>
using namespace std;
Rational::Rational(int a = 0, int b = 0, int c = 0, int d = 0) //������ + ����Ʈ�� ����
{
	set_num(a, b, c, d); //abcd�� �Ű������� set���ش�
}

void Rational::set_num(int n1,int n2,int n3,int n4) 
{                   //set�Լ� ������ �Ű������� ��� ������ ���� �������ش�.
	num1 = n1;  
	num2 = n2;
	num3 = n3;
	num4 = n4;
}

void Rational::add()  //�� �м��� �����ִ� �Լ�
{
	re_down = num2 * num4;  //�Ʒ� �и� �κп��� �� �и� ���� ���� ����
	re_up = num1 * num4 + num2 * num3; //���ںκ��� ���ڿ� �и� ���� ���ϰ� �ΰ��� ���Ѵ�.
	portion(&re_up, &re_down); //���� �м��� ������־� ���м��� ������ش�.
	display1(); //ù��° �м��� ������ش�
	cout << " + "; //�����ִ� �Լ��̹Ƿ� +�� ����Ѵ�.
	display2();	//�ι�° �м��� ������� ������ش�.
	
}

void Rational::sub()  //�� �м��� ���ִ� �Լ�
{
	re_down = num2 * num4; //�Ʒ� �и� �κп��� �� �и� ���� ���� ����
	re_up = num1 * num4 - num2 * num3;//���ںκ��� ���ڿ� �и� ���� ���ϰ� �ΰ��� ���ش�.
	portion(&re_up, &re_down);//���
	display1(); //���� ��ºκ�
	cout << " - ";
	display2();
}

void Rational::mul() //�� �м��� �����ִ� �Լ�
{
	re_down = num2 * num4; //�Ʒ� �и� �κп��� �� �и� ���� ���� ����
	re_up = num1 * num3; //���ںκ��� ���ڳ��� ���ؼ� ����
	portion(&re_up, &re_down); //���
	display1(); //��� �κ�
	cout << " x ";
	display2();
}

void Rational::div() //�� �м��� �����ִ� �Լ�
{
	re_down = num2 * num3; //ù��° �и�� �ι�° ���ڸ� ���� �Ʒ��� ����
	re_up = num1 * num4; //ù���� ���ڿ� �ι�° �и� ���� ����
	portion(&re_up, &re_down); //���
	display1(); //��ºκ�
	cout << " / ";
	display2();
}	

void Rational::portion(int*up, int*down) //������ִ� �Լ�
{
	int a = *up; //�����ͷ� �м����� �޾� ������ ������ �����Ѵ�.
	int b = *down;
	int c;
	while(b!=0){ //��Ŭ���� ȣ������ ����� �ִ������� ���Ѵ�.
		c = a % b;
		a = b;
		b = c;
	}
	*up /= a; //�ִ�������� �и�, ���ڸ� ������ ���м��� �����ش�.
	*down /= a;
}

void Rational::display1()  //ù��° �м��κ��� ������ִ� �Լ���.
{
	cout << num1 << "/" << num2;
}

void Rational::display2() //�ι�° �м��� ����ϰ� ������� ������ؤ�.
{
	cout << num3 << "/" << num4 << " = " << re_up << "/" << re_down << endl; //�ι��� �м� ���
	cout << re_up << "/" << re_down << " = " << (double)re_up / (double)re_down << endl << endl; //������� �м��� ����ϰ� doU
	//                                                                                   ble������ ������ �Ҽ����·ε� ����Ѵ�. 
}
