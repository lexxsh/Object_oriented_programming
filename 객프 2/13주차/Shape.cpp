#include <iostream> 
using namespace std; 

#include "Shape.h" 

Shape::Shape(double k, double hei) { // Ŭ���� ������
	Value = k; // ��������� k ����
	height = hei; // ��������� hei ����
}

double Shape::getArea() const {
	return 0; 
}

double Shape::getVolume() const {
	return 0; 
}

void Shape::print() const { 
}
//virtual �Լ��� ������ �����ϹǷ� �� �Լ��� ����� �־���.