#include<iostream>
#include<string>
#include"Date.h"
using namespace std;

int main() {
	Date ex1(5, 6, 1981);  //첫번째 생성자 선언
	cout << "Month: " << ex1.getMonth() << "\nDay: " << ex1.getDay() << "\nYear: " << ex1.getYear() //get함수를 이용해 달 날 년을 출력한다.
		<< endl << endl;
	ex1.displayDate(); //출력함수를 이용해 날짜들을 출력해준다.
}