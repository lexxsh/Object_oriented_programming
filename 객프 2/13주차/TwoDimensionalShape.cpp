#include <iostream> 
#include <iomanip> 
using namespace std; 

#include"TwoDimensionalShape.h" 

TwoDimensionalShape::TwoDimensionalShape(double k) // TwoDimensionalShape�� �������̴�.
	:Shape(k, 0) // Shape�� �����ڿ� k ������ 0�� �־��ش�.
{
}

double TwoDimensionalShape::getArea() const {
	return 0; // Virtual �Լ� ���
}

void TwoDimensionalShape::print() const {// virtual print �Լ� ��� �� �� �Լ� ���
	cout << fixed << setprecision(2); 
	cout << "TwoDimensionalShape"<< endl; 
	cout << "���� : " << getArea() << endl << endl; 
}
