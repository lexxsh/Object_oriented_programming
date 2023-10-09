#include "baseplus.h"
#include <iostream>
#include <string>
#include "CommisionEmployee.h"

using namespace std;

BasePlusCommissionEmployee::BasePlusCommissionEmployee(const string& first, const string& last, const string& ssn, double sales, double rate, double salary)
    : CommissionEmployee(first, last, ssn, sales, rate) {
    setBaseSalary(salary);
    cout << "BasePlusCommissionEmployee constructor: " << endl;
    print();
    cout << endl;
}

BasePlusCommissionEmployee::~BasePlusCommissionEmployee() {
    cout << "BasePlusCommissionEmployee destructor: " << endl;
    print();
    cout << endl;
}