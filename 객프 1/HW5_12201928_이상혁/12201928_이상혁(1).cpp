#include<iostream>
using namespace std;
int square(int n) {
	return(n * n);
}
int get_max(int x, int y) {
	if (x > y) return(x);
	else return(y);
}
int absolute(int x) {
	if (x > 0)return x;
	else return - x;
}
void draw_rect(int side) {
	int x, y;
	for (y = 0; y < side; y++) {
		for (x = 0; x < side; x++) cout << "*";
		cout << "\n";
	}
	return;
}
int get_integer(void) {
	int n;
	cout << "integer value: ";
	cin >> n;
	return n;
}
int power(int x, int y) {
	int i;
	long result = 1;
	for (i = 0; i < y; i++) result *= x;
	return result;
}
int factorial(int n) {
	int i;
	long result = 1;
	for (int i=1; i <= n; i++) result *= i;
	return result;
}
int main() {
	int a(0), b(0);

	cin >> a;									//ex01
	cout << "EX 01 : " << square(a) << endl;

	cin >> a >> b;								//ex02
	cout << "EX 02 : " << get_max(a, b) << endl;

	cin >> a;									//ex03
	cout << "EX 03 : " << absolute(a) << endl;

	cin >> a;									//ex04
	cout << "EX 04 : \n";
	draw_rect(a);
	cout << endl;

	cout << "EX 05 : " << get_integer() << endl;//ex05						

	cin >> a >> b;								//ex06
	cout << "EX 06 : " << power(a, b) << endl;

	cin >> a;									//ex07
	cout << "EX 07 : " << factorial(a) << endl;

	return 0;
}