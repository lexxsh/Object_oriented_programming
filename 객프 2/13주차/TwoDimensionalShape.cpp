#include <iostream> 
#include <iomanip> 
using namespace std; 

#include"TwoDimensionalShape.h" 

TwoDimensionalShape::TwoDimensionalShape(double k) // TwoDimensionalShape의 생성자이다.
	:Shape(k, 0) // Shape의 생성자에 k 변수와 0을 넣어준다.
{
}

double TwoDimensionalShape::getArea() const {
	return 0; // Virtual 함수 사용
}

void TwoDimensionalShape::print() const {// virtual print 함수 사용 후 이 함수 사용
	cout << fixed << setprecision(2); 
	cout << "TwoDimensionalShape"<< endl; 
	cout << "넓이 : " << getArea() << endl << endl; 
}
