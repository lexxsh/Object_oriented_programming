#include "basepluscommissioemployee.h"
#include <iostream>
#include <string>
#include "employee.h"

using namespace std;

CommissionEmployee::CommissionEmployee(const string& first, const string& last, const string& ssn, double sales, double rate)
    : Employee(first, last, ssn) {
    setGrossSales(sales);
    setCommissionRate(rate);
}

double CommissionEmployee::earnings() const {
    return commissionRate * grossSales;
}

double CommissionEmployee::getCommissionRate() const {
    return commissionRate;
}

double CommissionEmployee::getGrossSales() const {
    return grossSales;
}

void CommissionEmployee::print() const {
    cout << "commission employee: ";
    Employee::print();
    cout << "gross sales: " << getGrossSales() << endl
        << "commission rate: " << getCommissionRate() << endl;
}

void CommissionEmployee::setCommissionRate(double rate) {
    commissionRate = rate > 0 && rate < 1 ? rate : 0;
}

void CommissionEmployee::setGrossSales(double sales) {
    grossSales = sales < 0 ? 0 : sales;
}