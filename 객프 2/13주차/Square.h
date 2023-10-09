#pragma once
#include "TwoDimensionalShape.h" 

class Square : public TwoDimensionalShape { // 클래스 Square
public:										// 부모클래스는 TwoDimensionalShape
	Square(double = 0); // 클래스 생성자, 디폴트값 설정

	virtual double getArea() const; // 면적계산 함수
	virtual void print() const; // 정보를 출력해주는 함수

private:
	double side; // 변의 길이의 값을 담는 멤버변수
};
