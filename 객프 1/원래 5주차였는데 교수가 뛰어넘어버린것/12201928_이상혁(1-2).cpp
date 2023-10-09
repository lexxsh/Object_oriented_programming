#include<iostream>
using namespace std;
int main() {
	int a,b;
	cout << "Enter two numbers\n";
	cin >> a >> b;
	if (b % a == 0)cout << a << " is a factor of " << b;
	return 0;
}