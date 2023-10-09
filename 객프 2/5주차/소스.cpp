#include "time.h" //������� �߰�
#include<iomanip>
#include<iostream>
using namespace std;
Time::Time(int h, int m , int s,int x):hour(h),minute(m),second(s)
{ //TIMEŬ������ ������ �κ� 
	nextday = x; //������������ Ȯ���ϴ� �Լ��� x�� �Ű����� x�� �ִ´�.
}

Time::~Time()//Ŭ������ �Ҹ��� �κ�
{
}

void Time::setTime(int, int, int) //�ð��� set�ϴ� �Լ�
{
	setHour(hour); //�ð��� set�ϴ� �Լ��� ����
	setMinute(minute);//���� set�ϴ� �Լ��� ����
	setSecond(second);//�ʸ� set�ϴ� �Լ��� ����
}

void Time::setHour(int h) //�ð��� set�ϴ� �Լ�
{
	hour = (h >= 0 && h < 24) ? h : 0; //���� �ð��� 0~24�� �Էµ��� �ʴ´ٸ� 0�� �ִ´�.
}

void Time::setMinute(int m)//���� set�ϴ� �Լ�
{
	minute = (m >= 0 && m < 60) ? m : 0;//���� ���� 0~-60���� �Էµ��� �ʴ´ٸ� 0�� �ִ´�.
}

void Time::setSecond(int s)//�ʸ� set�ϴ� �Լ�
{
	second = (s >= 0 && s < 60) ? s : 0;//���� �ʰ� 0~60���� �Էµ��� �ʴ´ٸ� 0�� �ִ´�.
}

int Time::getHour() const //�ð��� ��ȯ�ϴ� �Լ�
{
	return hour;
}

int Time::getMinute() const//���� ��ȯ�ϴ� �Լ�
{
	return minute;
}

int Time::getSecond() const//�ʸ� ��ȯ�ϴ� �Լ�
{
	return second;
}

void Time::tick() //�ð��� �����ϰ� �ϴ� �Լ�
{
	nextday = 0;  //�������� Ȯ���ϴ� ������ 0�� �ִ´�..
	setSecond(second + 1);//�ʸ� 1�� �ø���.
	if (second==0) {//���� �ʰ� ������ 0�� �ȴٸ�
		setMinute(minute + 1);//�а��� 1�ø���.
		if (minute==0) { //���� �ø� �а��� 0�� �ȴٸ�
			setHour(hour + 1);
			if (hour==0) { //������ �ð����� 0�̵ȴٸ�
				nextday = 1; //������������ Ȯ���ϴ� ������ 1�� �ִ´�.
			}
		}
	}
}


void Time::printfStandard() const //�ð��� ������ִ� �Լ�
{
	cout << ((hour == 0 || hour == 12) ? 12 : hour % 12)  //�ð��� ���� ��� �����̴�.
		<< ":" << setfill('0') << setw(2) << minute
		<< ":" << setfill('0') << setw(2) << second << (hour < 12 ? " AM" : " PM") << endl;

}

void Time::printUniversal() const {
	cout << setfill('0') << setw(2) << hour << ":"
		<< setfill('0') << setw(2) << minute << ":"
		<< setfill('0') << setw(2) << second;
}