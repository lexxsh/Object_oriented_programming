#include<iostream>
#include<string>
#include"Date.h"
using namespace std;

int main() {
	Date ex1(5, 6, 1981);  //ù��° ������ ����
	cout << "Month: " << ex1.getMonth() << "\nDay: " << ex1.getDay() << "\nYear: " << ex1.getYear() //get�Լ��� �̿��� �� �� ���� ����Ѵ�.
		<< endl << endl;
	ex1.displayDate(); //����Լ��� �̿��� ��¥���� ������ش�.
}