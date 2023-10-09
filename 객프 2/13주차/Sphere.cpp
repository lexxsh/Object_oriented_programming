#include <iostream> 
using namespace std;

#include "Sphere.h" 

Sphere::Sphere(double diam) // Ŭ������ ������
	:ThreeDimensionalShape(diam) // ThreeDimensionalShape �����ڿ� �Ű������� diam ����
{
	diameter = diam; // ������ diameter ��� ������ diam ����
}

double Sphere::getArea() const { // ������ ����ϴ� �Լ�
	return 4 * 3.141592 * (diameter / 2) * (diameter / 2); // 4*���� R^2�� ����Ͽ� ��ȯ�Ѵ�.
}

double Sphere::getVolume() const { // ���Ǹ� ����ϴ� �Լ�
	return 4 * 3.141592 * (diameter / 2) * (diameter / 2)
		* (diameter / 2) / 3;   // (4*���� R^3) / 3 �� ���� ���� ���Ǹ� ����� ��ȯ�Ѵ�.
}

void Sphere::print() const {
	cout << "-------��-------" << endl;
	ThreeDimensionalShape::print(); // ThreeDimensionalShape ����Ʈ �Լ�.
}
