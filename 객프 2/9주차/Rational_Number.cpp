#include <iostream>
using namespace std;

#include "Rational_Number.h" // Rational_Number.h 헤더파일 include

RationalNumber::RationalNumber(int num, int den) // RationalNumber 생성자.
	:numerator(num), denominator(den) // 멤버 초기화기를 사용 매개변수를 받아옴.
{
	if (den == 0) { // 만약 분모가 0이면 분모는 1로 분자는 0으로 초기화 시켜준다.
		numerator = 0;
		denominator = 1;
	}
	reduction(); // 기약분수 함수를 이용해 입력받은 값을 기약분수로 만들어준다.
}

RationalNumber RationalNumber::operator+(const RationalNumber& Target) { // + 연산자 오버로딩
	RationalNumber res(numerator * Target.denominator + Target.numerator * denominator, denominator * Target.denominator);
	res.reduction(); // 기약분수 형태로 만들어줌
	return res; // 객체 res를 반환
}

RationalNumber RationalNumber::operator-(const RationalNumber& Target) { // - 연산자 오버로딩
	RationalNumber res(numerator * Target.denominator - Target.numerator * denominator, denominator * Target.denominator);
	res.reduction(); // 기약분수 형태로 만들어줌
	return res; // 객체 res를 반환
}

RationalNumber RationalNumber::operator*(const RationalNumber& Target) { // * 연산자 오버로딩
	RationalNumber res(numerator * Target.numerator, denominator * Target.denominator);
	res.reduction(); // 기약분수 형태로 만들어줌
	return res; // 객체 res를 반환
}

RationalNumber RationalNumber::operator/(RationalNumber& Target) { // / 연산자 오버로딩
	RationalNumber res(numerator * Target.denominator, denominator * Target.numerator);
	res.reduction(); // 기약분수 형태로 만들어줌
	return res; // 객체 res를 반환
}


bool RationalNumber::operator>(const RationalNumber& Target) const { // > 연산자 오버로딩
	return (numerator * Target.denominator - denominator * Target.numerator > 0);
} // 만약 참이면 1을, 거짓이면 0을 return , 비교문을 둔 후 바로 return 하도록 함.

bool RationalNumber::operator<(const RationalNumber& Target) const { // < 연산자 오버로딩
	return (numerator * Target.denominator - denominator * Target.numerator < 0);
} 

bool RationalNumber::operator>=(const RationalNumber& Target) const { // >= 연산자 오버로딩
	return (numerator * Target.denominator - denominator * Target.numerator >= 0);
} 

bool RationalNumber::operator<=(const RationalNumber& Target) const { // <= 연산자 오버로딩
	return (numerator * Target.denominator - denominator * Target.numerator <= 0);
} 

bool RationalNumber::operator==(const RationalNumber& Target) const { // == 연산자 오버로딩
	return (numerator * Target.denominator - denominator * Target.numerator == 0);
} 

bool RationalNumber::operator!=(const RationalNumber& Target) const { // != 연산자 오버로딩
	return (numerator * Target.denominator - denominator * Target.numerator != 0);
} 


void RationalNumber::printRational() const {
	if (numerator == 0) cout << "0" << endl; // 분자가 0이면 0 출력
	else if (numerator % denominator == 0) cout << numerator / denominator << endl; // 1/1이 1로 나오도록 한다.
	else cout << numerator << "/" << denominator << endl; // 위 2가지 경우가 아니라면 본래대로 분자/분모 형태로 나오게 함.
}


void RationalNumber::reduction() { //기약분수화 하는 함수
	int a, b, c; // int 자료형 변수 3개 선언.
	a = numerator; 
	b = denominator;
	while (b != 0) { // 유클리드 호제법을 통해 최대공약수를 구한다.
		c = a % b;
		a = b;
		b = c;
	} // while문을 마친 후의 a가 최대공약수가 된다
	numerator /= a; // 분자를 최대공약수로 나눠준다.
	denominator /= a; // 분모를 최대공약수로 나눠준다.
}