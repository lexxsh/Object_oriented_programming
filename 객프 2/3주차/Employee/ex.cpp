#include<iostream>
#include<string>
#include "Employee.h"
using namespace std;
int main() {
	Employee ex1("Lisa", "Roberts", 4500); //ù��° ������ ����
	Employee ex2("Mark", "Stein", 4000); //�ι�° ������ ����
	cout << "Employees' yearly salaries:\n" << ex1.getFirstName() << " " << ex1.getLastName() << ": $" << ex1.getMonthlySalary() * 12 << endl;
	//�־��� ���Ĵ�� ���� �������� employee Ŭ������ get�Լ��� �̿��Ͽ� ��ȯ�Ѵ�. 
	cout << ex2.getFirstName() << " " << ex2.getLastName() << ": $" << ex2.getMonthlySalary() * 12 << endl << endl;
	//�־��� ���Ĵ�� ���� �������� employee Ŭ������ get�Լ��� �̿��Ͽ� ��ȯ�Ѵ�. 
	cout << "Employees' yearly salaries after 10% rasie:\n" << ex1.getFirstName() << " " << ex1.getLastName() << ": $" << ex1.getMonthlySalary() * 12 * 1.1 << endl;
	//���� ��� ���뿡�� 10%���� ���� ������ش�. ù��°
	cout << ex2.getFirstName() << " " << ex2.getLastName() << ": $" << ex2.getMonthlySalary() * 12 * 1.1 << endl << endl;
}//���� ��� ���뿡�� 10%���� ���� ������ش�. �ι�°