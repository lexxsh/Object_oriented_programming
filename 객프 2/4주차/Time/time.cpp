#include<iostream>
#include<iomanip>
#include"Time.h" //Time �������

using namespace std;

Time::Time() //������ �κ�
{
	time_t currentTime = time(0); //c++���� �ð��� �� ������ ī��Ʈ�Ͽ� �����ϴ���
	struct tm t; //����ü t����
	localtime_s(&t,&currentTime); //time_t������ �ú��� ���·� ��ȯ�ϴ� �Լ�
	setTime(t.tm_hour, t.tm_min, t.tm_sec); //����ü�� ����� �� ����� settime�� ����
}

void Time::setTime(int h, int m , int s)
{
	hour = (h >= 0 && h < 24) ? h : 0; //���� ���� 0~24�� ������������ 0����
	minute = (m >= 0 && m < 60) ? m : 0;//���� ���� 0~60�� �ȵȴٸ� 0����
	second = (s >= 0 && s < 60) ? s : 0;//���� ���� 0~60�� �ȵȴٸ� 0����
}


int Time::getHour() //�ð��� ��ȯ�ϴ� get�Լ�
{
	return hour;
}

int Time::getMinute() //���� ��ȯ�ϴ� get�Լ�
{
	return minute;
}

int Time::getSecond() //�ʸ� ��ȯ�ϴ� get�Լ�
{
	return second;
}

void Time::printUniversal() //time_t�� ���� ���°��� 0~24�ð����� �״�� ����ϴ� �Լ�
{
	cout << setfill('0') << setw(2) << getHour() << ":" << setw(2) << getMinute() << ":"
		<< setw(2) << getSecond() << endl;
}

void Time::printStandard() //�־��� �ð��� 0~12�� ������ am pm�� ���� �� �ִ� �Լ�
{
	cout << setfill('0') << setw(2) << ((getHour() == 0 || getHour() == 12) ? 12 : getHour() % 12)
		<< ":" << setw(2) << getMinute() << ":" << setw(2) << getSecond() << (getHour() < 12 ? "AM " : "PM ") <<endl;
}
