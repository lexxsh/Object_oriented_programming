#include<iostream>
#include<math.h>

using namespace std;
double x[] = { 34.22,39.87,41.85,43.23,40.06,53.29,53.29,54.14,49.12,40.71,55.15 };
double y[] = { 102.34,100.93,97.43,97.81,98.32,98.32,100.07,97.08,91.59,94.85,94.65 };
const int SIZE = sizeof(x) / sizeof(double);
double none[SIZE];

double sigma(double arr1[], double arr2[]) {
	double sum = 0;
	for (int i = 0; i < SIZE; i++) {
		sum += (arr1[i] * arr2[i]);
	}
	return sum;
}
double cal() {
	double a, b, c, ans;
	a = SIZE * sigma(x, y) - sigma(x, none) * sigma(y, none);
	b = SIZE * sigma(x, x) - pow(sigma(x, none), 2);
	c = SIZE * sigma(y, y) - pow(sigma(y, none), 2);
	ans = a / sqrt(b * c);
	return ans;
}
int main() {
	fill_n(none, SIZE, 1);
	cout << " r = " << cal();
}

