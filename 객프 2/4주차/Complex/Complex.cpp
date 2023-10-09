#include "Complex.h"	//Complex ������� ����
#include<iostream>
using namespace std;

Complex::Complex(double re = 0, double im = 0, double re2 = 0, double im2 = 0) //�������� Complex��
{
	set_num1(re,im);			//ù��° ���� �������ִ� �Լ�
	set_num2(re2, im2);			//�ι�° ���� �������ִ� �Լ�
}

void Complex::set_num1(double re, double im) //ù��° ���� �������ִ� �Լ�
{
	a = re;		//�Ű������� ���� ���� ���� �Ǽ��κ��� a������ �����Ѵ�.
	b = im;		//��� �κ��� b������ �����Ѵ�.
}

void Complex::set_num2(double re2,double im2) //�ι�° ���� �������ִ� �Լ�
{	
	c = re2;	//�Ű������� ���� ���� ���� �Ǽ��κ��� c�� ����
	d = im2;	//����κ��� d�� ����
}

void Complex::add() //���� �����ִ� �Լ�
{
	re_ans = a + c;	//�Ǽ��κ��� ���� re_ans������ �����Ѵ�.
	im_ans = b + d;	//����κ��� ���� im_ans������ �����Ѵ�.
}

void Complex::sub() //���� ���ִ� �Լ�
{
	re_ans = a - c; //�Ǽ��� �� ans������ �����Ѵ�.
	im_ans = b - d; //����� �� ans ������ �����Ѵ�.
}

void Complex::display1() //�Է¹��� ���� ù��° ���κ��� ����ϴ� �Լ���.
{
	cout << "(" << a << ", " << b << " )";
}

void Complex::display2() //�ι�° ���� ���갪�� ����ϴ� �Լ���.
{
	cout << "(" << b << ", " << d << ") = " << "(" << re_ans << ", " << im_ans << 
		")"<<endl;
}

