#pragma once

#include "ThreeDimensionalShape.h" 

class Sphere : public ThreeDimensionalShape { // 클래스 Sphere에 대한 선언 시작. 
public:										  // 부모클래스는 ThreeDimensionalShape
	Sphere(double = 0); // 클래스 생성자 0으로 디폴트값을 선언

	virtual double getArea() const; // 면적을 계산하는 함수
	virtual double getVolume() const; // 부피를 계산하는 함수
	virtual void print() const; // 정보를 출력해주는 함수

private:
	double diameter; // 지름을 담는 멤버변수
};
