#include<iostream>
#include<string>
#include "Employee.h"
using namespace std;

Employee::Employee(string f, string l, int s) //범위 지정 연산자 ::으로 헤더파일의 클래스 부분에 접근한다. 생성자 파트이다.
{
	setFirstName(f); //생성자 부분의 set함수이다. 생성자 실행시 같이 실행된다.
	setLastName(l);  
	setMonthlySalary(s);
}
void Employee::setFirstName(string f) { //첫번째 이름을 받는 set함수이다. 헤더파일에서 범위 지정연산자로 접근하였다.
	FirstName = f;						//받은 string f를 멤버변수인 firstname에 입력받는다.
}
string Employee::getFirstName() {//첫번째 이름을 반환하는 get함수이다. 헤더파일에서 범위 지정연산자로 접근하였다.
	return FirstName;			//멤버변수인 firstname을 반환한다.
}
void Employee::setLastName(string l) {	//마지막 이름을 받는 set함수이다. 헤더파일에서 범위 지정연산자로 접근하였다.
	lastName = l;						//lastname변수에 매개변수인 l을 입력받는다.
}
string Employee::getLastName() {//마지막 이름을 반환하는 get함수이다. 헤더파일에서 범위 지정연산자로 접근하였다.
	return lastName;			//lastname을 반환한다.
}
void Employee::setMonthlySalary(int s) {//이번달 월급을 받는 set함수이다. 헤더파일에서 범위 지정연산자로 접근하였다.
	if (s < 0) monthlySalary = 0;		//만약 월급이 0보다 작은 경우 0을 monthlysalary에 대입힌다.
	else monthlySalary = s;				//월급이 0보다 큰경우 매개변수 s를 변수에 대입한다.
}
int Employee::getMonthlySalary() {		//이번달 월급을 반환하는 get함수이다.지정연산자로 접근하였다.
	return monthlySalary;				//monthlysalary를 반환한다.
}