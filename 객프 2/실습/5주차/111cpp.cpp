#include<iostream>
using namespace std;
#include"DATE.h"
int main() {
	Date date1(7, 5, 2004);
	Date date2;
	cout << "date1 = ";
	date1.print();
	cout << "\ndate2 = ";
	date2.print();
	date2 = date1;

	cout << "\n\nAfter default memberwise assignment, date2 = ";
	date2.print();
	cout << endl;
	return 0;
}