#include<iostream>
using namespace std;
int main() {
	int a, b, c;
	cout << "Select a menu\n1. food 2. drink\n";
	cin >> a;
	if (a == 1) {
		cout << "You have selected food. Which food?\n" <<
			"1. Korean 2. American 3.Chinese\n";
		cin >> b;
		switch (b) {
		case 1:
			cout << "You have selected a Korean food. Which Korean food\n?" <<
				"1. Rice 2.Bulgogi\n";
			cin >> c;
			if (c == 1)cout << "Enjoy your Rice!";
			else cout << "Enjoy your Bulgogi!";
			break;
		case 2:
			cout << "You have selected an American food. Which American food?\n" <<
				"1. Hamburger 2. Salad\n";
			cin >> c;
			if (c == 1)cout << "Enjoy your Hamhurger!";
			else cout << "Enjoy your Salad!";
			break;
		case 3:
			cout << "You have selected a Chinese food. Which Chinese food?\n" <<
				"1. Noodle 2. Dimsum\n";
			cin >> c;
			if (c == 1)cout << "Enjoy your Noodle!";
			else cout << "Enjoy your Dimsum!";
			break;
		}
	}
	else {
		cout << "You have selected drink. Which drink?\n" <<
			"1. Cola 2. Orange juice 3.Water\n";
		cin >> b;
		switch (b) {
		case 1:
			cout << "Enjoy your Cola!";
			break;
		case 2:
			cout << "Enjoy your Orange juice!";
			break;
		case 3:
			cout << "Enjoy your Water!";
			break;
		}
		return 0;
	}
}