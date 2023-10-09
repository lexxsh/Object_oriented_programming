#include <iostream>
using namespace std;
int main(void)
{
	const double TAX_RATE = 0.15; 
	double income, salary; 
	cout<< "insert your salary : "; 
	cin >> salary; 
	income = salary - TAX_RATE * salary; 
	cout << "net income : " << income << "\n"; 
	return 0;
}