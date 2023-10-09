#include "employee.h"
#include <iostream>
#include <string>

using namespace std;

Employee::Employee(const string& first, const string& last, const string& ssn)
    : firstName(first), lastName(last), socialSecurityNumber(ssn) {}

string Employee::getFirstName() const {
    return firstName;
}

string Employee::getLastName() const {
    return lastName;
}

string Employee::getSocialSecurityNumber() const {
    return socialSecurityNumber;
}

void Employee::print() const {
    cout << getFirstName() << ' ' << getLastName() << endl
        << "social security number: " << getSocialSecurityNumber() << endl;
}

void Employee::setFirstName(const string& first) {
    firstName = first;
}

void Employee::setLastName(const string& last) {
    lastName = last;
}

void Employee::setSocialSecurityNumber(const string& ssn) {
    socialSecurityNumber = ssn;
}