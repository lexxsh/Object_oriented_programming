#include <iostream> 
#include <iomanip> 
using namespace std; 

#include"ThreeDimensionalShape.h" 

ThreeDimensionalShape::ThreeDimensionalShape(double si, double he) // ThreeDimensionalShape�� ������
	:Shape(si, he) // Shpae �����ڿ� �Ű����� ����
{
}

double ThreeDimensionalShape::getArea() const {
	return 0; //Virtual �Լ� ���
}

double ThreeDimensionalShape::getVolume() const {
	return 0; 
}

void ThreeDimensionalShape::print() const { // virtual print �Լ� ��� �� �� �Լ� ���
	cout << fixed << setprecision(2);
	cout << "ThreeDimensionalShape" << endl; 
	cout << "���� : " << getArea() << endl 
		<< "���� : " << getVolume() << endl << endl; 
}
