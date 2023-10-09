#include <iostream> 
using namespace std; 

#include "Square.h" 

Square::Square(double si) //클래스의 생성자.
	:TwoDimensionalShape(si) // TwoDimensionalSaple의 생성자에 si 변수를 넣어준다.
{
	side = si; // side 멤버변수에 si 대입
}

double Square::getArea() const {  //면적 계산 함수
	return side * side; // side(변의길이)를 제곱해 계산 후 반환한다.
}

void Square::print() const {
	cout << "------정사각형-------" << endl; 
	TwoDimensionalShape::print(); // TwoDimensionalShape의 프린트함수
}
