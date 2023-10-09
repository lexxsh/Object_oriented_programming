#include <iostream>
using namespace std;
int main(void)
{
	float x = 1.234567890123456789;
	double y = 1.234567890123456789;
	cout << "size of float = " << sizeof(float)<<"\n";
	cout <<"size of double = " << sizeof(double) << "\n";
	
	cout << "x = " << x << "\n";
	cout << "y = " << y << "\n";

	cout << fixed;
	cout.precision(25);
	cout << "x = " << x << "\n";
	cout << "y = " << y << "\n";
	
	return 0;
}
//sizefo float 
