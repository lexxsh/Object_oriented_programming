#include <iomanip>
#include <iostream>
#include "base_plus_commission_employee.h"
#include "commission_employee.h"

using namespace std;

int main() {
    CommissionEmployee commissionEmployee("Sue", "Jones", "222-22-2222", 10000, 0.6);
    CommissionEmployee* commissionEmployeePtr = 0;
    BasePlusCommissionEmployee basePlusCommissionEmployee("Bob", "Lewis", "333-33-3333", 5000, 0.04, 300);
    BasePlusCommissionEmployee* basePlusCommissionEmployeePtr = 0;

    cout << fixed << setprecision(2);

    cout << "Invoking print function on base-class and derived-class objects with static binding:" << endl;
    commissionEmployee.print();
    cout << endl;
    basePlusCommissionEmployee.print();
    cout << endl;

    cout << "Invoking print function on base-class and derived-class objects with dynamic binding:" << endl;

    commissionEmployeePtr = &commissionEmployee;
    cout << "Calling virtual function print with base-class pointer to base-class object invokes base-class print function:" << endl;
    commissionEmployeePtr->print();
    cout << endl;

    basePlusCommissionEmployeePtr = &basePlusCommissionEmployee;
    cout << "Calling virtual function print with derived-class pointer to derived-class object invokes derived-class print function:" << endl;
    basePlusCommissionEmployeePtr->print();
    cout << endl;

    commissionEmployeePtr = &basePlusCommissionEmployee;
    cout << "Calling virtual function print with base-class pointer to derived-class object invokes derived-class print function:" << endl;
    commissionEmployeePtr->print();
    cout << endl;
    return 0;
}