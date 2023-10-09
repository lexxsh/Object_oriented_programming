#pragma once
#include "TwoDimensionalShape.h" 

class Square : public TwoDimensionalShape { // Ŭ���� Square
public:										// �θ�Ŭ������ TwoDimensionalShape
	Square(double = 0); // Ŭ���� ������, ����Ʈ�� ����

	virtual double getArea() const; // ������� �Լ�
	virtual void print() const; // ������ ������ִ� �Լ�

private:
	double side; // ���� ������ ���� ��� �������
};
