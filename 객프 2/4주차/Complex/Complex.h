#pragma once
#ifndef COMPLEX_H  //��ó����
#define COMPLEX_H

using namespace std;
class Complex{	//Complex Ŭ���� ����
private:		//��� ���� ��Ʈ
	double a;	//�Ǽ� 1�� �����ϱ� ���� ����
	double b;	//��� 1�� �����ϱ� ���� ����
	double c;	//�Ǽ� 2�� �����ϱ� ���� ����
	double d;	//��� 2�� �����ϱ� ���� ����
	double re_ans;	//�Ǽ��� ���� ���� �����ϴ� ����
	double im_ans;	//����� ���� ���� �����ϴ� ����

public:
	Complex(double, double,double,double); //������ ���� double�� ���� 4���� �Ű������� �޴´�.
	void set_num1(double, double);			//ù��° �Ǽ��� ����� ������ set�Լ���.
	void set_num2(double, double);			//�ι�° ���� ������ set�Լ��̴�.
	void add();			//�μ��� �����ִ� �Լ��̴�.
	void sub();			//�μ��� ���ִ� �Լ��̴�.
	void display1();	//������ ������ִ� �Լ�
	void display2();	//������ִ� �ι�° �Լ���.
};
#endif 