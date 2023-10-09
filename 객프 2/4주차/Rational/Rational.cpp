#include "Rational.h"
#include<iostream>
using namespace std;
Rational::Rational(int a = 0, int b = 0, int c = 0, int d = 0) //생성자 + 디폴트값 설정
{
	set_num(a, b, c, d); //abcd를 매개변수로 set해준다
}

void Rational::set_num(int n1,int n2,int n3,int n4) 
{                   //set함수 각각의 매개변수를 멤버 변수에 각각 대입해준다.
	num1 = n1;  
	num2 = n2;
	num3 = n3;
	num4 = n4;
}

void Rational::add()  //두 분수를 더해주는 함수
{
	re_down = num2 * num4;  //아래 분모 부분에는 두 분모를 곱한 값을 대입
	re_up = num1 * num4 + num2 * num3; //분자부분은 분자에 분모를 각각 곱하고 두값을 더한다.
	portion(&re_up, &re_down); //이후 분수를 약분해주어 기약분수로 만들어준다.
	display1(); //첫번째 분수를 출력해준다
	cout << " + "; //더해주는 함수이므로 +를 출력한다.
	display2();	//두번째 분수와 결과값을 출력해준다.
	
}

void Rational::sub()  //두 분수를 빼주는 함수
{
	re_down = num2 * num4; //아래 분모 부분에는 두 분모를 곱한 값을 대입
	re_up = num1 * num4 - num2 * num3;//분자부분은 분자에 분모를 각각 곱하고 두값을 빼준다.
	portion(&re_up, &re_down);//약분
	display1(); //이후 출력부분
	cout << " - ";
	display2();
}

void Rational::mul() //두 분수를 곱해주는 함수
{
	re_down = num2 * num4; //아래 분모 부분에는 두 분모를 곱한 값을 대입
	re_up = num1 * num3; //분자부분은 분자끼리 곱해서 대입
	portion(&re_up, &re_down); //약분
	display1(); //출력 부분
	cout << " x ";
	display2();
}

void Rational::div() //두 분수를 나눠주는 함수
{
	re_down = num2 * num3; //첫번째 분모와 두번째 분자를 곱해 아래에 대입
	re_up = num1 * num4; //첫번쨰 분자와 두번째 분모를 곱해 대입
	portion(&re_up, &re_down); //약분
	display1(); //출력부분
	cout << " / ";
	display2();
}	

void Rational::portion(int*up, int*down) //약분해주는 함수
{
	int a = *up; //포인터로 분수값을 받아 각각의 변수에 대입한다.
	int b = *down;
	int c;
	while(b!=0){ //유클리드 호제법을 사용해 최대공약수를 구한다.
		c = a % b;
		a = b;
		b = c;
	}
	*up /= a; //최대공약으로 분모, 분자를 나누어 기약분수를 구해준다.
	*down /= a;
}

void Rational::display1()  //첫번째 분수부분을 출력해주는 함수다.
{
	cout << num1 << "/" << num2;
}

void Rational::display2() //두번째 분수를 출력하고 결과값을 출력해준ㄷ.
{
	cout << num3 << "/" << num4 << " = " << re_up << "/" << re_down << endl; //두번쨰 분수 출력
	cout << re_up << "/" << re_down << " = " << (double)re_up / (double)re_down << endl << endl; //결과값을 분수로 출력하고 doU
	//                                                                                   ble형으로 나누어 소수형태로도 출력한다. 
}
