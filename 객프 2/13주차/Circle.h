#pragma once

#include "TwoDimensionalShape.h" 

class Circle : public TwoDimensionalShape { // Ŭ���� Circle�� ���� ���� ����. 
public:										// �θ�Ŭ������ TwoDimensionalShape�̴�.
	Circle(double = 0); // Ŭ���� ������ default �� 0�� ����

	virtual double getArea() const; // ������ ����ϴ� �Լ�
	virtual void print() const; // ��� ������ ����ϴ� �Լ�

private:
	double diameter; // ������ ���� ��� �������
};
