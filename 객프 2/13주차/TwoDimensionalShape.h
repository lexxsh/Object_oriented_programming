#pragma once

#include "Shape.h" 

class TwoDimensionalShape : public Shape { // 클래스 TwoDimensionalShape에 대한 선언 시작. 
public:									   // 부모클래스는 Shape이다.
	TwoDimensionalShape(double = 0);
	// 클래스 생성자, 디폴트값 설정.

	virtual double getArea() const; // Virtual함수
	virtual void print() const; 
};
