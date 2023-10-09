#include <iostream>
constexpr auto PI = 3.141592;
using namespace std;
int main(void)
{
	float radius, area, circumference; 
	cout << "insert the radius : ";
	cin >> radius;
	area = PI * radius * radius; 
	circumference = 2.0 * PI * radius; 
	cout << "radius = " << radius << "\n";
	cout << "circle area = " << area << "," 
		<< "circumference = " << circumference<<"\n";
	return 0;
}