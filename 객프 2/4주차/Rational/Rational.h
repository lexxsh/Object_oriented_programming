#pragma once
#ifndef RATIONAL_H //전처리문 
#define RATIONAL_H

class Rational { //클래스 Rational 선언
private:
	int num1, num2,num3,num4; //각각의 수들을 담을 변수
	int re_up; //분수 결과값의 분자부분
	int re_down; //분수 결과값의 분모부분
public: 
	Rational(int, int, int, int); //생성자
	void set_num(int,int,int,int);//매개변수를 통해 받은 수를 set하는 함수
	void add();			//두 분수를 더해주는 함수
	void sub();			//두 분수를 빼주는 함수
	void mul();			//두 분수를 곱해주는 함수
	void div();			//두 분수를 나눠주는 함수
	void portion(int*, int*); //기약분수로 만드는 함수
	void display1();   //출력해주는 첫번째함수
	void display2();   //출력시켜주는 두번째 함수
};

#endif