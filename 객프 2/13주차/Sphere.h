#pragma once

#include "ThreeDimensionalShape.h" 

class Sphere : public ThreeDimensionalShape { // Ŭ���� Sphere�� ���� ���� ����. 
public:										  // �θ�Ŭ������ ThreeDimensionalShape
	Sphere(double = 0); // Ŭ���� ������ 0���� ����Ʈ���� ����

	virtual double getArea() const; // ������ ����ϴ� �Լ�
	virtual double getVolume() const; // ���Ǹ� ����ϴ� �Լ�
	virtual void print() const; // ������ ������ִ� �Լ�

private:
	double diameter; // ������ ��� �������
};
