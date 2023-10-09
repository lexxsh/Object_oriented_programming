#pragma once
#ifndef TIME_H   //time 헤더파일에 대한 전처리문
#define TIME_H
class Time {	//class Time 생성
public:
	Time(int = 0, int = 0, int = 0, int = 0);	//생성자 생성
	~Time();	//소멸자생성
	void setTime(int, int, int); //Time을 set해주는 함수
	void setHour(int);	//Time 중 시간을 set해주는 함수
	void setMinute(int);//Time 중 분 부분을 set 해주는 함수
	void setSecond(int);//Time 중 초 부분을 set 해주는 함수
	int getHour() const;//시간 부분을 받아와 리턴해주는 함수
	int getMinute() const;//분 부분을 받아와 리턴해주는 함수
	int getSecond() const;//초 부분을 받아와 리턴해주는 함수
	void tick(); //시간을 1초단위로 증가시키는 함수
	void printfStandard()const;//시간을 출력하는 함수
private:
	int hour;//시간부분을 저장할 멤버변수
	int minute;//분부분을 저장할 멤버변수
	int second;//초부분을 저장할 멤버변수
	int Day_switch;//다음날인지를 확인하기위한 멤버변수
};
#endif // !TIME_H