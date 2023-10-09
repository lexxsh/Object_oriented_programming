#pragma once

class Shape { // 클래스 Shape에 대한 선언 시작. 
public:
	Shape(double = 0, double = 0); // 클래스 Shape의 생성자이다. default값으로 0을 넣어뒀다.

	virtual double getArea() const; // Virtual로 선언
	virtual double getVolume() const; 
	virtual void print() const; 

private:
	double Value;  //값
	double height; //높이값
};
