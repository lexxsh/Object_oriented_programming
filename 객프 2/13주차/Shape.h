#pragma once

class Shape { // Ŭ���� Shape�� ���� ���� ����. 
public:
	Shape(double = 0, double = 0); // Ŭ���� Shape�� �������̴�. default������ 0�� �־�״�.

	virtual double getArea() const; // Virtual�� ����
	virtual double getVolume() const; 
	virtual void print() const; 

private:
	double Value;  //��
	double height; //���̰�
};
