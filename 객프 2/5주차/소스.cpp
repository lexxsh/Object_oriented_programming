#include "time.h" //헤더파일 추가
#include<iomanip>
#include<iostream>
using namespace std;
Time::Time(int h, int m , int s,int x):hour(h),minute(m),second(s)
{ //TIME클래스의 생성자 부분 
	nextday = x; //다음날인지를 확인하는 함수에 x를 매개변수 x를 넣는다.
}

Time::~Time()//클래스의 소멸자 부분
{
}

void Time::setTime(int, int, int) //시간을 set하는 함수
{
	setHour(hour); //시간을 set하는 함수를 실행
	setMinute(minute);//분을 set하는 함수를 실행
	setSecond(second);//초를 set하는 함수를 실행
}

void Time::setHour(int h) //시간을 set하는 함수
{
	hour = (h >= 0 && h < 24) ? h : 0; //만약 시간이 0~24로 입력되지 않는다면 0을 넣는다.
}

void Time::setMinute(int m)//분을 set하는 함수
{
	minute = (m >= 0 && m < 60) ? m : 0;//만약 분이 0~-60으로 입력되지 않는다면 0을 넣는다.
}

void Time::setSecond(int s)//초를 set하는 함수
{
	second = (s >= 0 && s < 60) ? s : 0;//만약 초가 0~60으로 입력되지 않는다면 0을 넣는다.
}

int Time::getHour() const //시간을 반환하는 함수
{
	return hour;
}

int Time::getMinute() const//분을 반환하는 함수
{
	return minute;
}

int Time::getSecond() const//초를 반환하는 함수
{
	return second;
}

void Time::tick() //시간이 증가하게 하는 함수
{
	nextday = 0;  //다음날을 확인하는 변수에 0을 넣는다..
	setSecond(second + 1);//초를 1초 늘린다.
	if (second==0) {//만약 초가 증가후 0이 된다면
		setMinute(minute + 1);//분값을 1늘린다.
		if (minute==0) { //만약 늘린 분값이 0이 된다면
			setHour(hour + 1);
			if (hour==0) { //증가한 시간값이 0이된다면
				nextday = 1; //다음날인지를 확인하는 변수에 1을 넣는다.
			}
		}
	}
}


void Time::printfStandard() const //시간을 출력해주는 함수
{
	cout << ((hour == 0 || hour == 12) ? 12 : hour % 12)  //시간에 따른 출력 형태이다.
		<< ":" << setfill('0') << setw(2) << minute
		<< ":" << setfill('0') << setw(2) << second << (hour < 12 ? " AM" : " PM") << endl;

}

void Time::printUniversal() const {
	cout << setfill('0') << setw(2) << hour << ":"
		<< setfill('0') << setw(2) << minute << ":"
		<< setfill('0') << setw(2) << second;
}