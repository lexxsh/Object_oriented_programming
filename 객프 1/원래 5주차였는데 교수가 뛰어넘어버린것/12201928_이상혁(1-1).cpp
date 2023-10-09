#include<iostream>
using namespace std;
int main() {
	int n, max(-2147483648);
	cout << "Enter3numbers\n";
	for (int i = 0; i < 3; i++) {
		cin >> n;
		if (n > max) max = n;
	}
	cout << max << " is the greatest";
	return 0;
}