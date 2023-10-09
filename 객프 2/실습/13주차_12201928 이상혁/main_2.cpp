#include <iomanip>
#include <iostream>
#include <string>
#include "base_plus_commission.h"
#include "CommissionEmployee.h"

using namespace std;

int main() {
    CommissionEmployee* commissionEmployeePtr = 0;
    BasePlusCommissionEmployee basePlusCommissionEmployee("Bob", "Lewis", "333-33-3333", 5000, 0.04, 300);

    commissionEmployeePtr = &basePlusCommissionEmployee;

    string firstName = commissionEmployeePtr->getFirstName();
    string lastName = commissionEmployeePtr->getLastName();
    string ssn = commissionEmployeePtr->getSocialSecurityNumber();
    double grossSales = commissionEmployeePtr->getGrossSales();
    double commissionRate = commissionEmployeePtr->getCommissionRate();

    // error
    double baseSalary = commissionEmployeePtr->getBaseSalay();
    commissionEmployeePtr->setBaseSalary(500);
    return 0;
}