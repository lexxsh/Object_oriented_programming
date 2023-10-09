#pragma once

#include "Shape.h" 

class ThreeDimensionalShape : public Shape { // Ŭ���� ThreeDimensionalShape�� ���� ���� ����. 
public:										 // �θ�Ŭ������ Shape�̴�.
	ThreeDimensionalShape(double = 0, double = 0);
	// Ŭ���� ������, ����Ʈ�� ����

	virtual double getArea() const;  //virtual �Լ�
	virtual double getVolume() const; 
	virtual void print() const; 
};
