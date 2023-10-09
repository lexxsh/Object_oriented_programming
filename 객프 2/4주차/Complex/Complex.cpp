#include "Complex.h"	//Complex 헤더파일 선언
#include<iostream>
using namespace std;

Complex::Complex(double re = 0, double im = 0, double re2 = 0, double im2 = 0) //생성자인 Complex다
{
	set_num1(re,im);			//첫번째 수를 설정해주는 함수
	set_num2(re2, im2);			//두번째 수도 설정해주는 함수
}

void Complex::set_num1(double re, double im) //첫번째 수를 설정해주는 함수
{
	a = re;		//매개변수를 통해 얻은 값중 실수부분을 a변수에 대입한다.
	b = im;		//허수 부분을 b변수에 대입한다.
}

void Complex::set_num2(double re2,double im2) //두번째 수를 설정해주는 함수
{	
	c = re2;	//매개변수를 통해 얻은 값중 실수부분을 c에 대입
	d = im2;	//허수부분을 d에 대입
}

void Complex::add() //수를 더해주는 함수
{
	re_ans = a + c;	//실수부분을 더해 re_ans변수에 대입한다.
	im_ans = b + d;	//허수부분을 더해 im_ans변수에 대입한다.
}

void Complex::sub() //수를 빼주는 함수
{
	re_ans = a - c; //실수를 빼 ans변수에 대입한다.
	im_ans = b - d; //허수를 뺴 ans 변수에 대입한다.
}

void Complex::display1() //입력받은 값중 첫번째 수부분을 출력하는 함수다.
{
	cout << "(" << a << ", " << b << " )";
}

void Complex::display2() //두번째 수와 연산값을 출력하는 함수다.
{
	cout << "(" << b << ", " << d << ") = " << "(" << re_ans << ", " << im_ans << 
		")"<<endl;
}

