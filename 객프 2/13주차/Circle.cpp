#include <iostream> 
using namespace std; 

#include "Circle.h" // Circle.h 헤더파일 include

Circle::Circle(double diam) // Circle의 생성자
	:TwoDimensionalShape(diam) // TwoDimensionalSaple의 생성자에 매개변수 diam 대입
{
	diameter = diam; // 지름의 멤버변수에 diam값을 대입해준다.
}

double Circle::getArea() const { // 면적을 get하는 함수
	return (diameter / 2) * (diameter / 2) * 3.141592;
} // 반지름을 구하고 면적을 구하는 공식인 4*파이*r제곱을 한다.

void Circle::print() const {
	cout << "------원-------" << endl; 
	TwoDimensionalShape::print(); // TwoDimensionalShape 객체의 print함수
}
