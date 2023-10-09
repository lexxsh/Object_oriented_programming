#include <iostream> 
using namespace std; 

#include "Shape.h" 

Shape::Shape(double k, double hei) { // 클래스 생성자
	Value = k; // 멤버변수에 k 대입
	height = hei; // 멤버변수에 hei 대입
}

double Shape::getArea() const {
	return 0; 
}

double Shape::getVolume() const {
	return 0; 
}

void Shape::print() const { 
}
//virtual 함수로 파일을 구동하므로 빈 함수만 만들어 주었다.