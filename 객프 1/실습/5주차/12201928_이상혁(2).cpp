#include<iostream>
using namespace std;
int add(int a,int b);         //ex01
void main() {
	int x = 1, y = 2, z;
	z = add(x, y);
	cout << "z = " << z << endl;
}
int add(int a, int b) {
	return (a + b);
}

#include<iostream>
using namespace std;
int square(int a);             //ex02
void main() {            
	int x = 15, z;
	z = square(x);
	cout << " z = " << z << endl;
	return 0;
}
int square(int a) {
	return (a * a);
}


#include<iostream>
using namespace std;
int get_integer();             //ex03
int factorial(int);
int combination(int, int);

int main() {
	int a, b;
	a = get_integer();
	b = get_integer();

	cout << "C(" << a << "," << b << ") = " << combination(a, b) << endl;

	return 0;
}
int get_integer() {
	int n;
	cout << "integer value: " << endl;
	cin >> n;
	return n;
}
int factorial(int n) {
	long result = 1;
	for (int i = 1; i <= n; i++) {

		result *= i;
	}
	cout << "factorial value" << result << endl;
	return result;
}
int combination(int n, int r) {
	return (factorial(n) / (factorial(r) * factorial(n - r)));
}
