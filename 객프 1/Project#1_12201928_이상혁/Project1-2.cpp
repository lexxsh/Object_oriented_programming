#include<iostream>
#include<math.h>

using namespace std;

double x[] = { 3.0,4.5,5.5,6.5,7.5,8.5,8.0,9.0,9.5,10.0 };
double y[] = { 1.5,2.0,3.5,5.0,6.0,7.5,9.0,10.5,12.0,14.0 };
const int SIZE = sizeof(x) / sizeof(double);
double none[SIZE];

double sigma(double arr1[], double arr2[]);
double avrege(double arr1[]);
double cal_a();
double cal_b();

int main() {
	fill_n(none, SIZE, 1);
	cout << "구한 일차 방정식은  y = " << cal_a() << " + " << cal_b() << "x 입니다." << endl;
}
double sigma(double arr1[], double arr2[]) {
	double sum = 0;
	for (int i = 0; i < SIZE; i++) {
		sum += (arr1[i] * arr2[i]);
	}
	return sum;
}
double avrege(double arr1[]) {
	double avr;
	double sum(0);
	for (int i = 0; i < SIZE; i++) {
		sum += arr1[i];
	}
	avr = sum / SIZE;
	return avr;
}
double cal_a() {
	double ans;
	ans = avrege(y) - cal_b() * avrege(x);
	return ans;
}
double cal_b() {
	double a, b, ans;
	a = SIZE * sigma(x, y) - sigma(x, none) * sigma(y, none);
	b = SIZE * sigma(x, x) - pow(sigma(x, none), 2);
	ans = a / b;
	return ans;
}