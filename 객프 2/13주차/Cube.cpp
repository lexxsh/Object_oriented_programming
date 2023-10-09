#include <iostream> 
using namespace std; 

#include "Cube.h" 

Cube::Cube(double si) // 클래스의 생성자
	:ThreeDimensionalShape(si, si) // Three-- 생성자에 si변수를 대입한다. -> 정사각형이기 때문에 똑같은 변수를 대입해준다.
{
	side = si; // side 멤버변수 (변의 길이)에 si를 대입해준다.
}

double Cube::getArea() const { // 면적을 계산하는 함수.
	return side * side * 6; // side (변의 길이)를 제곱한 후 면의 개수인 6을 곱해 계산후 반환한다.
}

double Cube::getVolume() const { // 부피를 계산하는 함수
	return side * side * side; // side (변의 길이)를 세제곱한 후 반환한다.
}

void Cube::print() const {
	cout << "-------정육면체-------" << endl; 
	ThreeDimensionalShape::print(); // ThreeDimensionalShape 프린트함수

}
