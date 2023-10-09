#include "salaried_employee.h"
#include <iostream>
#include <string>
#include "employee.h"

using namespace std;

SalariedEmployee::SalariedEmployee(const string& first, const string& last, const string& ssn, double salary)
    : Employee(first, last, ssn) {
    setWeeklySalary(salary);
}

double SalariedEmployee::earnings() const {
    return getWeeklySalary();
}

double SalariedEmployee::getWeeklySalary() const {
    return weeklySalary;
}

void SalariedEmployee::print() const {
    cout << "salaried employee: ";
    Employee::print();
    cout << "weekly salary: " << getWeeklySalary() << endl;
}

void SalariedEmployee::setWeeklySalary(double salary) {
    weeklySalary = (salary < 0) ? 0 : salary;
}