#include<iostream>
using namespace std;
int main() {
	int a, b;
	do {
		cout << "Enter 2 numbers\n";
		cin >> a >> b;
		if (a > b)cout << a << " is big!\n";
		else if (a < b) cout << b << " is big!\n";
	} while (a != b);
	cout << "2 numbers same!";
	return 0;
}