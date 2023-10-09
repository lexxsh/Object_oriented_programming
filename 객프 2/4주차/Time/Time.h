#pragma once
#ifndef TIME_H //��ó����
#define TIME_H

class Time { //Ŭ���� Time ����
private:
	int hour; //�ø� ������ ����
	int minute; //���� ������ ����
	int second;	//�ʸ� ������ ����
public: 
	Time(); //������
	void setTime(int, int, int); //�ð��� �����ϴ� �Լ�

	int getHour(); //�� �κ��� get �Լ�
	int getMinute(); //�� �κ��� get �Լ�
	int getSecond(); //�� �κ��� get �Լ�

	void printUniversal(); //am,pm�� ��µǰ� 1~12������ ǥ���Ǵ� ���Ϲ��ȹ����� �������
	void printStandard(); //1~24�ð����� ǥ�õǴ� �������
};

#endif