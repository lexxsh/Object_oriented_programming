#pragma once

#include "ThreeDimensionalShape.h" 

class Cube : public ThreeDimensionalShape { // Ŭ���� Cube 
public:										// �θ�Ŭ������ ThreeDimensionalShape
	Cube(double = 0.0); // Ŭ���� ������, ����Ʈ �� ����.

	virtual double getArea() const; // ������ ����ϴ� �Լ�.
	virtual double getVolume() const; // ���Ǹ� ����ϴ� �Լ�.
	virtual void print() const; // ��갪���� ����ϴ� �Լ�.

private:
	double side; // ���� ���̰��� ���� �������
};
