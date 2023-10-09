#pragma once

#include "ThreeDimensionalShape.h" 

class Cube : public ThreeDimensionalShape { // 클래스 Cube 
public:										// 부모클래스는 ThreeDimensionalShape
	Cube(double = 0.0); // 클래스 생성자, 디폴트 값 설정.

	virtual double getArea() const; // 면적을 계산하는 함수.
	virtual double getVolume() const; // 부피를 계산하는 함수.
	virtual void print() const; // 계산값등을 출력하는 함수.

private:
	double side; // 변의 길이값을 담을 멤버변수
};
