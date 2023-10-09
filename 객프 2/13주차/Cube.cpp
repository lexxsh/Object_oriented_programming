#include <iostream> 
using namespace std; 

#include "Cube.h" 

Cube::Cube(double si) // Ŭ������ ������
	:ThreeDimensionalShape(si, si) // Three-- �����ڿ� si������ �����Ѵ�. -> ���簢���̱� ������ �Ȱ��� ������ �������ش�.
{
	side = si; // side ������� (���� ����)�� si�� �������ش�.
}

double Cube::getArea() const { // ������ ����ϴ� �Լ�.
	return side * side * 6; // side (���� ����)�� ������ �� ���� ������ 6�� ���� ����� ��ȯ�Ѵ�.
}

double Cube::getVolume() const { // ���Ǹ� ����ϴ� �Լ�
	return side * side * side; // side (���� ����)�� �������� �� ��ȯ�Ѵ�.
}

void Cube::print() const {
	cout << "-------������ü-------" << endl; 
	ThreeDimensionalShape::print(); // ThreeDimensionalShape ����Ʈ�Լ�

}
