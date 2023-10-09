#include <iostream> 
using namespace std; 

int get_integer(); 
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
	cout << "insert the integer value: " << endl; 
	cin >> n; 
	return n; 
}
int factorial(int n) { 
	long result = 1;
	for (int i = 1; i <= n; i++) {
								 
		result *= i; 
	}
	return result; 
}
int combination(int n, int r) { 
	return (factorial(n) / (factorial(r) * factorial(n - r))); 
}
