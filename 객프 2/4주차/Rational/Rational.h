#pragma once
#ifndef RATIONAL_H //��ó���� 
#define RATIONAL_H

class Rational { //Ŭ���� Rational ����
private:
	int num1, num2,num3,num4; //������ ������ ���� ����
	int re_up; //�м� ������� ���ںκ�
	int re_down; //�м� ������� �и�κ�
public: 
	Rational(int, int, int, int); //������
	void set_num(int,int,int,int);//�Ű������� ���� ���� ���� set�ϴ� �Լ�
	void add();			//�� �м��� �����ִ� �Լ�
	void sub();			//�� �м��� ���ִ� �Լ�
	void mul();			//�� �м��� �����ִ� �Լ�
	void div();			//�� �м��� �����ִ� �Լ�
	void portion(int*, int*); //���м��� ����� �Լ�
	void display1();   //������ִ� ù��°�Լ�
	void display2();   //��½����ִ� �ι�° �Լ�
};

#endif