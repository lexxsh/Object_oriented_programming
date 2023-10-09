#pragma once		//헤더파일 
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

using namespace std;

class Employee		//Employee 클래스 선언
{					//주어진 UML다이어그램에 따라 작성하였다.
public:				//멤버 함수 선언 파트
	Employee(string f, string l, int s); //클래스 생성자 
	void setFirstName(string f);		//첫번째 이름을 받는 set함수(string을 매개변수로 받는다)
	string getFirstName();				//첫번째 이름을 반환하는 get함수
	void setLastName(string l);			//마지막 이름을 받는 set함수(string을 받는다)
	string getLastName();				//마지막 이름을 반환하는 get함수
	void setMonthlySalary(int s);		//이번달월급을 받는 set함수(int를 받는다)
	int getMonthlySalary();				//이번달월급을 반환하는 get함수
private:
	string FirstName;	//첫번째 이름 멤버변수
	string lastName;	//마지막 이름 멤버변수
	int monthlySalary;	//이번달 월급 멤버변수
};
#endif // !EMPLOYEE_H