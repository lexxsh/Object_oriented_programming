#pragma once

#include "TwoDimensionalShape.h" 

class Circle : public TwoDimensionalShape { // 클래스 Circle에 대한 선언 시작. 
public:										// 부모클래스는 TwoDimensionalShape이다.
	Circle(double = 0); // 클래스 생성자 default 값 0을 선언

	virtual double getArea() const; // 면적을 계산하는 함수
	virtual void print() const; // 모든 정보를 출력하는 함수

private:
	double diameter; // 지름의 값을 담는 멤버변수
};
