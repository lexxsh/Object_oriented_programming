#pragma once
#ifndef RATIONAL_NUMBER_H //전처리기
#define RATIONAL_NUMBER_H
class RationalNumber { //class 선언 
public:
	RationalNumber(int = 0, int = 1); // RationalNumber 생성자. default값으로 0과 1을 가짐
	RationalNumber operator+(const RationalNumber&); // + 연산자 오버로딩
	RationalNumber operator-(const RationalNumber&); // - 연산자 오버로딩
	RationalNumber operator*(const RationalNumber&); // * 연산자 오버로딩
	RationalNumber operator/(RationalNumber&); // / 연산자 오버로딩


	bool operator>(const RationalNumber&) const;// > 연산자 오버로딩
	bool operator<(const RationalNumber&) const;// < 연산자 오버로딩
	bool operator>=(const RationalNumber&) const;// >= 연산자 오버로딩
	bool operator<=(const RationalNumber&) const;// <= 연산자 오버로딩

	bool operator==(const RationalNumber&) const;// == 연산자 오버로딩
	bool operator!=(const RationalNumber&) const;// != 연산자 오버로딩
	void printRational() const; //결과 출력 함수
private:
	int numerator; //분자를 담을 변수
	int denominator; //분모를 담을 변수
	void reduction(); //기약분수로 만들어줄 함수
}; 
#endif