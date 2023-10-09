#include "CommisionEmployee.h"
#include <iostream>
#include <string>

using namespace std;

CommissionEmployee::CommissionEmployee(const string& first, const string& last, const string& ssn, double sales, double rate)
    : firstName(first), lastName(lastName), socialSecurityNumber(ssn) {
    setGrossSales(sales);
    setCommissionRate(rate);
    cout << "CommissionEmployee constructor: " << endl;
    print();
    cout << endl;
}

CommissionEmployee::~CommissionEmployee() {
    cout << "CommissionEmployee destructor: " << endl;
    print();
    cout << endl;
}