#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

using namespace std;

class Employee {
protected:
    string firstName;
    string lastName;
    string socialSecurityNumber;

public:
    Employee(const string&, const string&, const string&);
    virtual double earnings() const = 0;
    string getFirstName() const;
    string getLastName() const;
    string getSocialSecurityNumber() const;
    virtual void print() const;
    void setFirstName(const string&);
    void setLastName(const string&);
    void setSocialSecurityNumber(const string&);
};

#endif