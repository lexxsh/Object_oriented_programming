#include <iostream>
#include <cstring>
using namespace std;

#include "Employee.h"
#include "Date.h"

Employee::Employee(const char* const first, const char* const last, const Date& dateofBirth, const Date& dateofHire
) :birthDate(dateofBirth),
	hireDate(dateofHire) 
{
	int length = strlen(first);
	length = (length < 25 ? length : 24);
	strncpy_s(firstName,sizeof(firstName), first, length);
	firstName[length] = '\0';

	length = strlen(last);
	length = (length < 25 ? length : 24);
	strncpy_s(lastName,sizeof(lastName), last, length);
	lastName[length] = '\0';

	cout << "Employee object constructor: " << firstName << ' ' << lastName << endl;
}

void Employee::print() const {
	cout << lastName << ", " << firstName << " Hired: ";
	hireDate.print();

	cout << " Birthday: ";
	birthDate.print();

	cout << endl;
}

Employee::~Employee() {
	cout << "Employee object destructor: " << lastName << ", " << firstName << endl;
}