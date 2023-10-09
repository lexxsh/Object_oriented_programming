#include<iostream>
#include"Time.h" //헤더파일선언

int main() {
	Time ex1; //time 클래스의 객체 ex1 생성
	ex1.printStandard();// 0~24을 출력해줌
	ex1.printUniversal();//0~12부분 시간과 a값들ㅇ르 출력해준다.
}