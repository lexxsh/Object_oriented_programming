#include <iostream> 
using namespace std;

#include "Cube.h" 
#include "Sphere.h" 
#include "Square.h"
#include "circle.h" 
//������ϵ��� include �Ѵ�.

int main() {
	Shape* shapes[4]; // �����͹迭�� ������ش�. Shape�� ���� ����ؾ��� ��ü�� 4���̹Ƿ� ũ�⸦ �������־���.

	shapes[0] = new Circle(5); // ù��°�� ���̴�. �� Ŭ������ new�� ���� �����ϰ� ��ü�� �����Ͽ���.
	shapes[1] = new Sphere(5); // �ι�°�� ���̴�. �� Ŭ������ new�� ���� �����ϰ� ��ü�� �����Ͽ���.
	shapes[2] = new Square(6); // ����°�� ���簢���̴�. ���簢�� Ŭ������ new�� ���� �����ϰ� ��ü�� �����Ͽ���.
	shapes[3] = new Cube(7); //	  �׹�°�� ������ü�̴�. ������ü Ŭ������ new�� ���� �����ϰ� ��ü�� �����Ͽ���.

	for (int i = 0; i < 4; i++) {
		shapes[i]->print(); // for���� ����� �����͹迭�� ������ش�, virtual �Լ��� ���� ��µ��� Ȯ�� �� �� �ִ�.
	}						

	return 0;
}
