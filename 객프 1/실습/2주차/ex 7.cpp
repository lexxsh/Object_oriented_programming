#include <iostream>

using namespace std;
int main(void)
{
	char x, x1, x2, x3;
	unsigned char y;
	x = -128;
	x1 = x - 1;
	x2 = x - 2;
	x3 = x - 3;

	cout << "x = " << (int)x << endl;
	cout << "x-1 = " << x1 << endl;
	cout << "x-2 = " << x2 << endl;
	cout << "x-3 = " << x3 << endl;

	printf("x = %d\n", x);
	printf("x-1 = %d\n", x1);
	printf("x-2 = %d\n", x2);
	printf("x-3 = %d\n", x3);

	y = 256;

	printf("y = %u\n", y);
	printf("y+1 = %u\n", y + 1);
	printf("y+2 = %u\n", y + 2);
	printf("y+3 = %u\n", y + 3);

	cout << "y = " << (int)y << endl;
	cout << "y+1 = " << y + 1 << endl;
	cout << "y+2 = " << y + 2 << endl;

	return 0;
}