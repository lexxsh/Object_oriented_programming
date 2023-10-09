/*#include <iomanip>
#include <iostream>
#include "employee.h"

using namespace std;

int main() {
    CommissionEmployee employee("Sue", "Jones", "222-22-2222", 10000, 0.06);
    cout << fixed << setprecision(2);
    cout << "Employee information obtained by getter funtions:" << endl
        << "First name is " << employee.getFirstName() << endl
        << "Last name is " << employee.getLastName() << endl
        << "Social security number is " << employee.getSocialSecurityNumber() << endl
        << "Gross sales is " << employee.getGrossSales() << endl
        << "Commission rate is " << employee.getCommissionRate() << endl;
    employee.setGrossSales(8000);
    employee.setCommissionRate(0.1);
    cout << "Updated employee information output by print function:" << endl;
    employee.print();
    cout << "Employee's earnings: $" << employee.earnings() << endl;
    return 0;
}
#include "employee.h"
#include <iostream>
#include <string>

using namespace std;

BasePlusCommissionEmployee::BasePlusCommissionEmployee(const string& first, const string& last, const string& ssn, double sales, double rate, double salary) {
    firstName = first;
    lastName = last;
    socialSecurityNumber = ssn;
    setGrossSales(sales);
    setCommissionRate(rate);
    setBaseSalary(salary);
}

double BasePlusCommissionEmployee::earnings() const {
    return baseSalary + commissionRate * grossSales;
}

double BasePlusCommissionEmployee::getBaseSalary() const {
    return baseSalary;
}

double BasePlusCommissionEmployee::getCommissionRate() const {
    return commissionRate;
}

string BasePlusCommissionEmployee::getFirstName() const {
    return firstName;
}

double BasePlusCommissionEmployee::getGrossSales() const {
    return grossSales;
}

string BasePlusCommissionEmployee::getLastName() const {
    return lastName;
}

string BasePlusCommissionEmployee::getSocialSecurityNumber() const {
    return socialSecurityNumber;
}

void BasePlusCommissionEmployee::print() const {
    cout << "commission employee: " << firstName << ' ' << lastName << endl
        << "social security number: " << socialSecurityNumber << endl
        << "gross sales: " << grossSales << endl
        << "commission rate: " << commissionRate << endl
        << "base salary: " << baseSalary << endl;
}

void BasePlusCommissionEmployee::setBaseSalary(double salary) {
    baseSalary = salary < 0.0 ? 0 : salary;
}

void BasePlusCommissionEmployee::setCommissionRate(double rate) {
    commissionRate = (rate > 0.0 && rate < 1.0) ? rate : 0;
}

void BasePlusCommissionEmployee::setFirstName(const string& first) {
    firstName = first;
}

void BasePlusCommissionEmployee::setGrossSales(double sales) {
    grossSales = sales < 0.0 ? 0 : sales;
}

void BasePlusCommissionEmployee::setLastName(const string& last) {
    lastName = last;
}

void BasePlusCommissionEmployee::setSocialSecurityNumber(const string& ssn) {
    socialSecurityNumber = ssn;
}  */
#include "employee.h"
#include <iostream>
#include <string>

using namespace std;

BasePlusCommissionEmployee::BasePlusCommissionEmployee(const string& first, const string& last, const string& ssn, double sales, double rate, double salary)
    : CommissionEmployee(first, last, ssn, sales, rate) {
    setBaseSalary(salary);
}

double BasePlusCommissionEmployee::earnings() const {
    return baseSalary + commissionRate * grossSales;
}

double BasePlusCommissionEmployee::getBaseSalary() const {
    return baseSalary;
}

void BasePlusCommissionEmployee::print() const {
    cout << "commission employee: " << firstName << ' ' << lastName << endl
        << "social security number: " << socialSecurityNumber << endl
        << "gross sales: " << grossSales << endl
        << "commission rate: " << commissionRate << endl
        << "base salary: " << baseSalary << endl;
}

void BasePlusCommissionEmployee::setBaseSalary(double salary) {
    baseSalary = salary < 0.0 ? 0 : salary;
}