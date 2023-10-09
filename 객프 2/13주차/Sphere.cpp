#include <iostream> 
using namespace std;

#include "Sphere.h" 

Sphere::Sphere(double diam) // 클래스의 생성자
	:ThreeDimensionalShape(diam) // ThreeDimensionalShape 생성자에 매개변수로 diam 대입
{
	diameter = diam; // 지름인 diameter 멤버 변수에 diam 대입
}

double Sphere::getArea() const { // 면적을 계산하는 함수
	return 4 * 3.141592 * (diameter / 2) * (diameter / 2); // 4*파이 R^2을 계산하여 반환한다.
}

double Sphere::getVolume() const { // 부피를 계산하는 함수
	return 4 * 3.141592 * (diameter / 2) * (diameter / 2)
		* (diameter / 2) / 3;   // (4*파이 R^3) / 3 을 통해 구의 부피를 계산후 반환한다.
}

void Sphere::print() const {
	cout << "-------구-------" << endl;
	ThreeDimensionalShape::print(); // ThreeDimensionalShape 프린트 함수.
}
