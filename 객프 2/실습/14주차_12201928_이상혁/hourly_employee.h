#ifndef HOURLY_EMPLOYEE_H
#define HOURLY_EMPLOYEE_H

#include <string>
#include "employee.h"

using namespace std;

class HourlyEmployee : public Employee {
protected:
    double wage;
    double hours;

public:
    HourlyEmployee(const string&, const string&, const string&, double = 0.0, double = 0.0);
    double earnings() const;
    double getHours() const;
    double getWage() const;
    void print() const;
    void setHours(double);
    void setWage(double);
};

#endif#pragma once
