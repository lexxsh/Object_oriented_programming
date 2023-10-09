#pragma once
#ifndef TIME_H   //time ������Ͽ� ���� ��ó����
#define TIME_H
class Time {	//class Time ����
public:
	Time(int = 0, int = 0, int = 0, int = 0);	//������ ����
	~Time();	//�Ҹ��ڻ���
	void setTime(int, int, int); //Time�� set���ִ� �Լ�
	void setHour(int);	//Time �� �ð��� set���ִ� �Լ�
	void setMinute(int);//Time �� �� �κ��� set ���ִ� �Լ�
	void setSecond(int);//Time �� �� �κ��� set ���ִ� �Լ�
	int getHour() const;//�ð� �κ��� �޾ƿ� �������ִ� �Լ�
	int getMinute() const;//�� �κ��� �޾ƿ� �������ִ� �Լ�
	int getSecond() const;//�� �κ��� �޾ƿ� �������ִ� �Լ�
	void tick(); //�ð��� 1�ʴ����� ������Ű�� �Լ�
	void printfStandard()const;//�ð��� ����ϴ� �Լ�
private:
	int hour;//�ð��κ��� ������ �������
	int minute;//�кκ��� ������ �������
	int second;//�ʺκ��� ������ �������
	int Day_switch;//������������ Ȯ���ϱ����� �������
};
#endif // !TIME_H