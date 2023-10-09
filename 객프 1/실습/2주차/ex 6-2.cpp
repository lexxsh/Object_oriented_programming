#include <iostream>
using namespace std;
int main(void)
{
	float y = 6.5e2;
	cout << "y = " << y << "\n";
	printf("y = %f\n", y);

	cout << scientific << "y = " << y << "\n";
	printf("y = %e\n", y);
	return 0;
}