#pragma once	//Date 헤더파일
#ifndef DATE_H
#define DATE_H



class Date { //클래스 Date 선언
public:		//멤버 함수를 선언할 public
	Date(int m, int d, int y);	//Date 생성자 프로토타입 매개변수로 m,d,y를 받는다.
	void setMonth(int m);	//달을 세팅하는 set함수 m을 매개변수로 받는다.
	int getMonth();			//달을 반환하는 get함수
	void setDay(int d);		//날을 받는 set함수 d를 매개변수로 받는다.
	int getDay();			//달을 반환하는 get함수
	void setYear(int y);	//년을 받는 set함수 y를 매개변수로 받는다.
	int getYear();			//년을 반환하는 get함수
	void displayDate();     //날짜를 보여주는 함수

private:					//클래스 외부에서 접근을 막기 위해 private로 선언
	int month;				//달을 저장하는 멤버 변수
	int day;				//날을 저장하는 멤버변수
	int year;z				//년을 저장하는 멤버변수
};
#endif