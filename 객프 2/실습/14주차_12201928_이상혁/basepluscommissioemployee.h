#pragma once
#include <string>
#include "employee.h"

using namespace std;

class CommissionEmployee : public Employee {
protected:
    double grossSales;
    double commissionRate;

public:
    CommissionEmployee(const string&, const string&, const string&, double = 0.0, double = 0.0);
    virtual double earnings() const;
    double getCommissionRate() const;
    double getGrossSales() const;
    virtual void print() const;
    void setCommissionRate(double);
    void setGrossSales(double);
};

#endif