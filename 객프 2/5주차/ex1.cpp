#include<iostream>
#include"Time.h"
using namespace std; 
int main() {
	Time ex1(23, 59, 50); //time 클래스의 ex1객체 생성
	for (int i = 0; i < 100; i++) { //시간이 원활하게 출력되는지를 확인하기위한 반복문
		ex1.printfStandard(); //시간을 출력시킨다.
		ex1.tick(); //시간을 증가시킨다.
	}
}
