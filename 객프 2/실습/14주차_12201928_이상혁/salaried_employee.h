#ifndef SALARIED_EMPLOYEE_H
#define SALARIED_EMPLOYEE_H

#include <string>
#include "employee.h"

using namespace std;

class SalariedEmployee : public Employee {
protected:
    double weeklySalary;

public:
    SalariedEmployee(const string&, const string&, const string&, double = 0.0);
    double earnings() const;
    double getWeeklySalary() const;
    void print() const;
    void setWeeklySalary(double);
};

#endif