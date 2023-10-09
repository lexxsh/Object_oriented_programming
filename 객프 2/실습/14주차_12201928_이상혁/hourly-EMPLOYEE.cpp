#include "hourly_employee.h"
#include <iostream>
#include <string>
#include "employee.h"

using namespace std;

HourlyEmployee::HourlyEmployee(const string& first, const string& last, const string& ssn, double hourlyWage, double hoursWorked)
    : Employee(first, last, ssn) {
    setWage(hourlyWage);
    setHours(hoursWorked);
}

double HourlyEmployee::earnings() const {
    if (getHours() <= 40) {
        return getWage() * getHours();
    }
    return 40 * getWage() + (getHours() - 40) * getWage() * 1.5;
}

double HourlyEmployee::getHours() const {
    return hours;
}

double HourlyEmployee::getWage() const {
    return wage;
}

void HourlyEmployee::print() const {
    cout << "hourly employee: ";
    Employee::print();
    cout << "hourly wage: " << getWage() << endl
        << "hours worked: " << getHours() << endl;
}

void HourlyEmployee::setHours(double hoursWorked) {
    hours = hoursWorked >= 0 && hoursWorked <= 168 ? hoursWorked : 0;
}

void HourlyEmployee::setWage(double hourlyWage) {
    wage = hourlyWage < 0 ? 0 : hourlyWage;
