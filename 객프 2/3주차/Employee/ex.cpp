#include<iostream>
#include<string>
#include "Employee.h"
using namespace std;
int main() {
	Employee ex1("Lisa", "Roberts", 4500); //첫번째 생성자 실행
	Employee ex2("Mark", "Stein", 4000); //두번째 생성자 실행
	cout << "Employees' yearly salaries:\n" << ex1.getFirstName() << " " << ex1.getLastName() << ": $" << ex1.getMonthlySalary() * 12 << endl;
	//주어진 형식대로 받은 변수들을 employee 클래스의 get함수를 이용하여 반환한다. 
	cout << ex2.getFirstName() << " " << ex2.getLastName() << ": $" << ex2.getMonthlySalary() * 12 << endl << endl;
	//주어진 형식대로 받은 변수들을 employee 클래스의 get함수를 이용하여 반환한다. 
	cout << "Employees' yearly salaries after 10% rasie:\n" << ex1.getFirstName() << " " << ex1.getLastName() << ": $" << ex1.getMonthlySalary() * 12 * 1.1 << endl;
	//위의 출력 내용에서 10%오른 값을 출력해준다. 첫번째
	cout << ex2.getFirstName() << " " << ex2.getLastName() << ": $" << ex2.getMonthlySalary() * 12 * 1.1 << endl << endl;
}//위의 출력 내용에서 10%오른 값을 출력해준다. 두번째