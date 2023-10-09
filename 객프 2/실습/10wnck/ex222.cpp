#include<iostream>
#include"Array.h"
using namespace std;
int main() {
	Array omtetersl(7);
	Array ittttt;

	cout << "size of array integersl is" << omtetersl.getsize()
		<< "\nArray after intitialiization:\n" << omtetersl;
	cout << "size of array integersl is" << ittttt.getsize()
		<< "\nArray after intitialiization:\n" << ittttt;
	cout << "\nENTER 17 INTEGERS:" << endl;
	cin >> omtetersl >> ittttt;

	cout << "\nAfter inout, the Arrays contain:\n" <<
		"inters1:\n" << omtetersl
		<< "inters2:\n" << ittttt;

	cout << "\nEvalusating: integers1 != integers1" << endl;

	if (omtetersl != ittttt)
		cout << "integers1 and integers2 are not equal" << endl;

	Array integers3(omtetersl);
	cout << "size of array integersl is" << integers3.getsize()
		<< "\nArray after intitialiization:\n" << integers3;

	cout << "\nAssigning integers2 to integers1:" << endl;
	omtetersl = ittttt;

	cout << "integers1:\n" << omtetersl << "intergers1" << ittttt;

	cout << "\nEvaluating: integers1 == integers2" << endl;

	if (omtetersl == ittttt)
		cout << "integers1 and integese2 are equal" << endl;

	cout << "integers1 and integers1 are equal" << endl;

	cout << "\ninterrs1[5] is " << omtetersl[5];

	cout << "\n\nAssigiing 1000 to integers1[5]" << endl;
	omtetersl[5] = 1000;
	cout << "integers1:\n" << omtetersl;

	cout << "\nAttempt to assign 1000 to integers1[15]" << endl;
	return 0;
}