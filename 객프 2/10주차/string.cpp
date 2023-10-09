#include <iostream>
#include <string>
using namespace std;

#include "string.h" // 헤더파일 include

String::String() // string 클래스의 기본 생성자다
	: row(0) //만약 row변수에 아무것도 들어오지 않았을경우 0을 대입한다. 
{
	this->ft = NULL; // 또한 포인터에도 this를 사용하여 NULL을 할당.
}

String::String(const char* st) { // st문자열을 매개변수로 지니는 생성자
	this->row = (strlen(st) + 1); // 입력받은 문자열보다 1이 크도록 row벼눗에 대입해준다.
	this->ft = new char[this->row]; // row에 따른 동적할당
	strcpy(this->ft, st); // ft가 할당된곳에 st문자열을 대입
}

String::String(const String& ptr) { //클래스 객체를 매개변수로 지니는 생성자
	this->row = ptr.row; // 매개변수로 받은 객채의 row를 row변수에 할당한다.
	this->ft = new char[this->row]; // row만큼 ft로 동적할당 
	strcpy(this->ft, ptr.ft); // ft로 동적할당한 구간에 클래스객체로 받은 내용을 대입해준다.
}

String String::operator=(const String& right) { // 해당 클래스의 객체를 매개변수로 가지는 = 연산자 오버로딩이다. 
	delete[] this->ft; // ft에 할당된 메모리 해제
	this->row = right.row; // 매개변수 속 객체의 len값을 len에 저장한다.
	this->ft = new char[this->row]; //row에 만큼 ft로 동적할당
	strcpy(this->ft, right.ft); // ft로 동적할당한 구간에 클래스객체로 받은 내용을 대입해준다.

	return *this; // 해당 객체를 return한다.
}

String String::operator+(const String& right) { // 해당 클래스의 객체를 매개변수로 가지는 + 연산자 오버로딩이다. 
	char* new_str = new char[this->row + right.row]; // 객체들의 row값들을 더 해 새로 동적할당해준다.
	strcpy(new_str, this->ft); // 해당 객체의 문자열 내용을 new_str에 넣어준다.
	strcat(new_str, " "); // 두 문자열이 합쳐졌을 때 중간에 공백이 있도록 하였다.
	strcat(new_str, right.ft); // 매개변수 객체의 문자열 내용을 new_str에 추가(cat)해준다.

	String new_st(new_str); // new_str를 복사생성자에 넣어 new_st객체를 만들어준다. (return을 위함)
	delete[] new_str; // 이 함수 내에서 동적할당 해줬던 new_str에 할당된 메모리를 헤체한다.
	return new_st; // 복사 완료된 new_st 객체를 return한다.
}

ostream& operator<<(ostream& output, const String& s) { // 이 클래스에서 사용할 << 연산자 오버로딩이다.
	output << s.ft;
	return output;
}
