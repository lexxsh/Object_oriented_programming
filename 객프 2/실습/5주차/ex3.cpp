#include<iostream>
using namespace std;
#include "increment.h"
int main() {
	Increment value(10, 5);
	cout << "Befor incrementing: ";
	value.print();
	for (int j = 1; j <= 3; j++) {
		value.addIncrement();
		cout << "After increment " << j << ": ";
		value.print();
	}
}