#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	switch (n)
	{
	case 1:
		cout << "You have selected a rice";
		break;
	case 2:
		cout << "You have selected a bread";
		break;
	case 3:
		cout << "You have selected a drink";
		break;
	case 4:
		cout << "You have selected a noodle";
		break;
	}
	return 0;
}