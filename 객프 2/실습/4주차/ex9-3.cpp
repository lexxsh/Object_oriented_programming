#include"Time.h"
#include<iostream>

using namespace std;

int main() {
	Time t1;
	Time t2(2);
	Time t3(21, 34);
	Time t4(12, 25, 42);
	Time t5(27, 74, 99);
	cout << "constructed withL\n\nt1: all arguments defaulted\n   ";
	t1.printUniversal();
	cout << "\n  ";
	t1.printStandard();
	cout << "\n\nt2: hour specifiedl minute and second defaulted\n   ";
	t2.printUniversal();
	cout << "\n  ";
	t2.printStandard();
	cout << "\n\nt3: hour and minute specifiedl second defaulted\n   ";
	t3.printUniversal();
	cout << "\n  ";
	t3.printStandard();
	cout << "\n\nt4: hour and minute and second specified\n   ";
	t4.printUniversal();
	cout << "\n  ";
	t4.printStandard();
	cout << "\n\nt4: all invalid values specified\n   ";
	t5.printUniversal();
	cout << "\n  ";
	t5.printStandard();
	cout << endl;

	return 0;
}