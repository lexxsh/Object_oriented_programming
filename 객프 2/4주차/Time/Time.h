#pragma once
#ifndef TIME_H //전처리문
#define TIME_H

class Time { //클래스 Time 생성
private:
	int hour; //시를 저장할 변수
	int minute; //분을 저장할 변수
	int second;	//초를 저장할 변수
public: 
	Time(); //생성자
	void setTime(int, int, int); //시간을 세팅하는 함수

	int getHour(); //시 부분의 get 함수
	int getMinute(); //분 부분의 get 함수
	int getSecond(); //초 부분의 get 함수

	void printUniversal(); //am,pm이 출력되고 1~12까지로 표현되는 유니버셜버전의 출력형태
	void printStandard(); //1~24시간으로 표시되는 출력형태
};

#endif