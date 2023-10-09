#include <iostream> 
using namespace std;

#include "Cube.h" 
#include "Sphere.h" 
#include "Square.h"
#include "circle.h" 
//헤더파일들을 include 한다.

int main() {
	Shape* shapes[4]; // 포인터배열로 만들어준다. Shape를 통해 출력해야할 객체가 4개이므로 크기를 선언해주었다.

	shapes[0] = new Circle(5); // 첫번째는 원이다. 원 클래스를 new를 통해 생성하고 객체도 생성하였다.
	shapes[1] = new Sphere(5); // 두번째는 구이다. 구 클래스를 new를 통해 생성하고 객체도 생성하였다.
	shapes[2] = new Square(6); // 세번째는 정사각형이다. 정사각형 클래스를 new를 통해 생성하고 객체도 생성하였다.
	shapes[3] = new Cube(7); //	  네번째는 정육면체이다. 정육면체 클래스를 new를 통해 생성하고 객체도 생성하였다.

	for (int i = 0; i < 4; i++) {
		shapes[i]->print(); // for문을 사용해 포인터배열을 출력해준다, virtual 함수를 통해 출력됨을 확인 할 수 있다.
	}						

	return 0;
}
