#include<iostream>
#include<iomanip>
#include"Time.h" //Time 헤더파일

using namespace std;

Time::Time() //생성자 부분
{
	time_t currentTime = time(0); //c++에서 시간을 초 단위로 카운트하여 제공하는점
	struct tm t; //구조체 t선언
	localtime_s(&t,&currentTime); //time_t형식을 시분초 형태로 분환하는 함수
	setTime(t.tm_hour, t.tm_min, t.tm_sec); //구조체에 저장된 이 값들로 settime을 해줌
}

void Time::setTime(int h, int m , int s)
{
	hour = (h >= 0 && h < 24) ? h : 0; //시의 값이 0~24로 들어오지않으면 0대입
	minute = (m >= 0 && m < 60) ? m : 0;//분의 값이 0~60이 안된다면 0대입
	second = (s >= 0 && s < 60) ? s : 0;//초의 값이 0~60이 안된다면 0대입
}


int Time::getHour() //시간을 반환하는 get함수
{
	return hour;
}

int Time::getMinute() //분을 반환하는 get함수
{
	return minute;
}

int Time::getSecond() //초를 반환하는 get함수
{
	return second;
}

void Time::printUniversal() //time_t를 통해 얻어온값을 0~24시간으로 그대로 출력하는 함수
{
	cout << setfill('0') << setw(2) << getHour() << ":" << setw(2) << getMinute() << ":"
		<< setw(2) << getSecond() << endl;
}

void Time::printStandard() //주어진 시간을 0~12로 나누고 am pm을 구할 수 있는 함수
{
	cout << setfill('0') << setw(2) << ((getHour() == 0 || getHour() == 12) ? 12 : getHour() % 12)
		<< ":" << setw(2) << getMinute() << ":" << setw(2) << getSecond() << (getHour() < 12 ? "AM " : "PM ") <<endl;
}
