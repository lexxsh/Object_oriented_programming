
#include <iostream>
#include <string>
using namespace std;

#include"string.h" // string.h 헤더파일 include

int main() {
	String string1; //더해줄 객체 들어가는 값을 선언한다.
	String string2 = "happy"; // string2객체에 =을 사용해 happy를 넣어준다.
	String string3 = "birth day";// string3객체에 =을 사용해 birth day 를 넣어준다.
	String string4 = "to you"; // string2객체에 =을 사용해 hto you를 넣어준다.

	cout << "string2 = " << string2 << endl; // << 연산자를 통해 객체의 문자열내용 출력
	cout << "string3 = " << string3 << endl; // << 연산자를 통해 객체의 문자열내용 출력
	cout << "string1 = string2 + string3" << endl;
	cout << "----결과값----" << endl; // 결과값 안내
	string1 = string2 + string3; // =, + 연산자를 통해 두 객체의 문자열 내용을 더해준 후 저장한다.
	cout << "string1 = " << string1 << endl << endl; // << 연산자를 통해 제대로 성공하였는지 출력

	cout << "string2 = " << string2 << endl; // << 연산자를 통해 객체의 문자열내용 출력
	cout << "string3 = " << string3 << endl; // << 연산자를 통해 객체의 문자열내용 출력
	cout << "string4 = " << string4 << endl; // << 연산자를 통해 객체의 문자열내용 출력
	cout << "string1 = string2 + string3 + string4" << endl;
	cout << "----결과값----" << endl; // 결과값 안내
	string1 = string2 + string3 + string4; // =, + 연산자를 통해 세 객체의 문자열 내용을 더해준 후 저장한다.
	cout << "string1 = " << string1 << endl; // << 연산자를 통해 제대로 성공하였는지 출력

	return 0;
}
