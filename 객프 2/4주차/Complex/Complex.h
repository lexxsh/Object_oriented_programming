#pragma once
#ifndef COMPLEX_H  //전처리문
#define COMPLEX_H

using namespace std;
class Complex{	//Complex 클래스 선언
private:		//멤버 변수 파트
	double a;	//실수 1을 저장하기 위한 변수
	double b;	//허수 1을 저장하기 위한 변수
	double c;	//실수 2를 저장하기 위한 변수
	double d;	//허수 2를 저장하기 위한 변수
	double re_ans;	//실수를 더한 값을 저장하는 변수
	double im_ans;	//허수를 더한 값을 저장하는 변수

public:
	Complex(double, double,double,double); //생성자 선언 double형 변수 4개를 매개변수로 받는다.
	void set_num1(double, double);			//첫번째 실수와 허수를 설정할 set함수다.
	void set_num2(double, double);			//두번째 수를 설정할 set함수이다.
	void add();			//두수를 더해주는 함수이다.
	void sub();			//두수를 빼주는 함수이다.
	void display1();	//수들을 출력해주는 함수
	void display2();	//출력해주는 두번째 함수다.
};
#endif 