#include <iostream> 
using namespace std; 

#include "Circle.h" // Circle.h ������� include

Circle::Circle(double diam) // Circle�� ������
	:TwoDimensionalShape(diam) // TwoDimensionalSaple�� �����ڿ� �Ű����� diam ����
{
	diameter = diam; // ������ ��������� diam���� �������ش�.
}

double Circle::getArea() const { // ������ get�ϴ� �Լ�
	return (diameter / 2) * (diameter / 2) * 3.141592;
} // �������� ���ϰ� ������ ���ϴ� ������ 4*����*r������ �Ѵ�.

void Circle::print() const {
	cout << "------��-------" << endl; 
	TwoDimensionalShape::print(); // TwoDimensionalShape ��ü�� print�Լ�
}
