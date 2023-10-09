#pragma once
#include <iostream>
#include <string>
using namespace std;

#ifndef STRING_H // 전처리기
#define STRING_H

class String { // 클래스 string 선언
	friend ostream& operator<<(ostream& output, const String& s); // << 연산자를 사용한 오버로딩 friend를 사용한다.

public:
	String(); // 클래스의 생성자
	String(const char*); // char*을 매개변수로 가지는 생성자
	String(const String&); // 클래스 객체를 매개변수로 가지는 생성자

	String operator=(const String&); // =연산자 오버로딩 string 객체를 매개변수로 지닌다.. 
	String operator+(const String&); // +연산자 오버로딩 string 객체를 매개변수로 지닌다.. 

private:
	char* ft; // 동적할당을 담당하는 포인터 멤버변수
	int row; // 문자열의 길이를 저장할 멤버 변수.
};

#endif#pragma once
