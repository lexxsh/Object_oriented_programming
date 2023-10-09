#include<iostream>
using namespace std;
int main() {
	char a;
	int ans;
	cin >> a;
	if (a > 64 && a < 91) ans = 0;
	else ans = 1;
	switch (ans) {
	case 0:
		cout << (char)(32 + a);
		break;
	default:
		cout << a;
	}
	return 0;
}