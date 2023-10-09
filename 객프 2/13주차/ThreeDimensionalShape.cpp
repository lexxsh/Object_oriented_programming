#include <iostream> 
#include <iomanip> 
using namespace std; 

#include"ThreeDimensionalShape.h" 

ThreeDimensionalShape::ThreeDimensionalShape(double si, double he) // ThreeDimensionalShape의 생성자
	:Shape(si, he) // Shpae 생성자에 매개변수 대입
{
}

double ThreeDimensionalShape::getArea() const {
	return 0; //Virtual 함수 사용
}

double ThreeDimensionalShape::getVolume() const {
	return 0; 
}

void ThreeDimensionalShape::print() const { // virtual print 함수 사용 후 이 함수 사용
	cout << fixed << setprecision(2);
	cout << "ThreeDimensionalShape" << endl; 
	cout << "넓이 : " << getArea() << endl 
		<< "부피 : " << getVolume() << endl << endl; 
}
