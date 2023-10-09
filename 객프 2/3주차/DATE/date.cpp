#include<iostream>
#include<string>
#include"Date.h"

using namespace std;
Date::Date(int m, int d, int y) //범위 지정 연산자 ::으로 헤더파일의 클래스 부분에 접근한다. 생성자 파트이다. 생성자 실행시 기본으로 실행되게 한다.
	setMonth(m);				//생성자 안의 달을 세팅하는 함수
	setDay(d);					//생성자 안의 날을 세팅하는 함수
	setYear(y);					//생성자 안의 년을 세팅하는 함수
}
void Date::setMonth(int m) {   //범위 지정 연산자를 사용해 Date 클래스의 setMonth 함수에 접근한다.
	if (0 < m && m < 13) month = m;	//만약 매개변수로 받은 m(달)이 0~13사이에 있으면 month 멤버변수에 이값을 대입한다.
	else month = 1;					//위의 경우가 아닌경우 month변수에 1을 대입한다.
}	
int Date::getMonth() {			//범위 지정연산자를 이용해 Date클래스의 getMonth 함수에 접근한다.	
	return month;				//멤버 변수중 달의 값이 저장되어있는 변수를 반환한다.
}
void Date::setDay(int d) {     //범위 지정연산자를 이용해 setDay함수에 접근한다.
	day = d;				//날짜를 저장할 변수인 day에 매개변수 d값을 대입한다.
}
int Date::getDay() {		//날짜를 반환하는 함수인 getDay 함수
	return day;				//날짜가 저장되있는 값인 day를 반환한다.
}
void Date::setYear(int y) {	 //범위 지정 연산자를 사용해 Date 클래스의 setYear 함수에 접근한다.
	year = y;				//년이 저장되있는 값에 매개변수로 받은 y를 대입한다.
}
int Date::getYear() {		//날짜를 반환하는 함수인 getYear 함수
	return year;			//날짜가 저장되있는 값인 year를 반환한다.
}
void Date::displayDate() {
	cout << "Original date:\n" << month << "/" << day << "/" << year << endl; //주어진 형식대로 date를 출력한다.
}