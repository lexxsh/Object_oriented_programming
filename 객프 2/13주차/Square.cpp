#include <iostream> 
using namespace std; 

#include "Square.h" 

Square::Square(double si) //Ŭ������ ������.
	:TwoDimensionalShape(si) // TwoDimensionalSaple�� �����ڿ� si ������ �־��ش�.
{
	side = si; // side ��������� si ����
}

double Square::getArea() const {  //���� ��� �Լ�
	return side * side; // side(���Ǳ���)�� ������ ��� �� ��ȯ�Ѵ�.
}

void Square::print() const {
	cout << "------���簢��-------" << endl; 
	TwoDimensionalShape::print(); // TwoDimensionalShape�� ����Ʈ�Լ�
}
