#pragma once

#include "Shape.h" 

class ThreeDimensionalShape : public Shape { // 클래스 ThreeDimensionalShape에 대한 선언 시작. 
public:										 // 부모클래스는 Shape이다.
	ThreeDimensionalShape(double = 0, double = 0);
	// 클래스 생성자, 디폴트값 설정

	virtual double getArea() const;  //virtual 함수
	virtual double getVolume() const; 
	virtual void print() const; 
};
