#pragma once

#include "Shape.h" 

class TwoDimensionalShape : public Shape { // Ŭ���� TwoDimensionalShape�� ���� ���� ����. 
public:									   // �θ�Ŭ������ Shape�̴�.
	TwoDimensionalShape(double = 0);
	// Ŭ���� ������, ����Ʈ�� ����.

	virtual double getArea() const; // Virtual�Լ�
	virtual void print() const; 
};
