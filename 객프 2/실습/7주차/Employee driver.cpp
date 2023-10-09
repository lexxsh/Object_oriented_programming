#include <iostream>
using namespace std;

#include "Employee.h"

int main() {

	cout << "Number of employees before instantiation of any object is "
		<< Employee::getCount() << endl;

	Employee* e1ptr = new Employee("Susan", "Backer");
	Employee* e2ptr = new Employee("Robert", "Jones");

	cout << "Number of employees after objects is " <<
		e1ptr->getCount();

	cout << "\n\nEmployee:1 " <<
		e1ptr->getFirstName() << " " << e1ptr->getLastName()
		<< "\nEmployee 2:"
		<< e2ptr->getFirstName() << " " << e2ptr->getLastName() << "\n\n";

	delete e1ptr;
	e1ptr = 0;
	delete e2ptr;
	e2ptr = 0;

	cout << "Number of employees after object are deleted is " << Employee::getCount() << endl;
	return 0;
}