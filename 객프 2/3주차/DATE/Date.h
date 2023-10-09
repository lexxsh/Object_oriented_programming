#pragma once	//Date �������
#ifndef DATE_H
#define DATE_H



class Date { //Ŭ���� Date ����
public:		//��� �Լ��� ������ public
	Date(int m, int d, int y);	//Date ������ ������Ÿ�� �Ű������� m,d,y�� �޴´�.
	void setMonth(int m);	//���� �����ϴ� set�Լ� m�� �Ű������� �޴´�.
	int getMonth();			//���� ��ȯ�ϴ� get�Լ�
	void setDay(int d);		//���� �޴� set�Լ� d�� �Ű������� �޴´�.
	int getDay();			//���� ��ȯ�ϴ� get�Լ�
	void setYear(int y);	//���� �޴� set�Լ� y�� �Ű������� �޴´�.
	int getYear();			//���� ��ȯ�ϴ� get�Լ�
	void displayDate();     //��¥�� �����ִ� �Լ�

private:					//Ŭ���� �ܺο��� ������ ���� ���� private�� ����
	int month;				//���� �����ϴ� ��� ����
	int day;				//���� �����ϴ� �������
	int year;z				//���� �����ϴ� �������
};
#endif