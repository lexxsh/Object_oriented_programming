#include <iostream>
using namespace std;

int global;  // 4-1
void main() {
	int local;
	global = 0;
	local = 2;
	{
		int very_local;
		very_local = global + local;
	}
}

int n = 1000;   // 4-2
int cal_sum();
void main() {
	int sum;
	sum = cal_sum();
	cout << "sum of firstd" << n << "naural numbers is" << sum;
}
int cam_sum() {
	int i, s = 0;
	for (i = 0; i <= n; i++) {
		s = s + i;
	}
	return (s);
}

void sub1(void) {   // 4-3
	int x;
	x = 0;
	cout << "'sub1' s first x = " << x << endl;
	{
		int y;
		x = 1;
		y = 2;
		cout << "'sub1' s second x = " << x << endl;
		cout << "'sub1' s first y = " << y << endl;
	}
	x = 3;
	cout << "'sub1' s last x = " << x << endl;
}

void sub2(void) {
	int x;
	x = 0;
	cout << "'sub1' s first x = " << x << endl;
	{
		int y;
		x = 1;
		y = 2;
		cout << "'sub1' s second x = " << x << endl;
		cout << "'sub1' s first y = " << y << endl;
	}
	cout << "'sub1' s third y = " << y << endl;
	{
		int y;
		x = 3;
		y = 3;
		cout << "'sub1' s fourth x = " << x << endl;
		cout << "'sub1' s second y = " << y << endl;
	}
	cout << "'sub1' s last x = " << y << endl;
}
void main() {
	cout << "sub1 출력" << endl;
	sub1();
	cout << endl << "sub2 출력" << endl;
	sub2();
}

void main() {     //ex 5
	void message();
	message();
}
void message() {
	cout << "Category of Function" << endl;
}

void main() {    //ex6-1
	int sum;
	int cam_sum();
	sum = cal_sum();
	cout << "sum of first ten naural numbers is " << sum << endl;
}
int cal_sum() {
	int i, s = 0;
	for (i = 0; i <= 10; i++) {
		s = s + i;
	}
	return(s);
}

int n = 1000;     //ex6-2
void main() {
	int sum;
	int cal_sum();
	sum = cal_sum();
	cout << "sum of first" << n << "naural numbers is " << sum << endl;
}

int cal_sum() {
	int i, s = 0;
	for (i = 0; i <= n; i++) {
		s = s + i;
	}
	return(s);
}

void main() {      //ex6-3
	int today(int, int, int);
	int d, m, y;
	cout << "enter today's data dd/mm/yy" << endl;
	cin >> d >> m >> y;
	today(d, m, y);
}

void today(int x, int y, int z) {
	cout << "today is " << z << y << x << endl;
}

void main() {     //ex7
	int x, y, z;
	int add(int, int, int);

	cout << "Enter any three numbers : " << endl;
	cin >> x >> y >> z;
	z = add(x, y, z);
	cout << "z = " << z << endl;
}
int add(int a, int b, int c) {
	return (a + b + c);
}

#include<math.h>     //ex 8-1
void main() {
	float p = 3.14159265;
	cout << cos(p);
}

#include<stdlib.h>   //ex 8-2
#include<time.h>

void get_random(int n) {
	int i;
	for (i = 0; i < n; i++) cout << rand() << endl;
}
int main(void) {
	srand((unsigned)time(NULL));
	get_random(10);
	return 0;
}

#include<time.h>   //ex 8-3
void main() {
	time_t a = time(NULL);
	for(int x=0;x<100000000;x++){}
	time_t b = time(NULL);
	cout << "processing time = " << b - a << endl;
}

void main() {     //ex9-1
	int x, y;
	void swap(int, int);
	cout << "Enter the values of x and y" << endl;
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;
	swap(x, y);
	cout << "x = " << x << ", y = " << y;
}
void swap(int a, int b) {
	int c;
	c = a;
	a = b;
	b = c;
	cout << "the values after swapping are x = " << a << ", y = " << b << endl;
}

void main() {     //ex9-2
	int x, y;
	void swap(int *, int *);
	cout << "Enter the values of x and y" << endl;
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;
	cout << "x의 주소 = " << &x << ", y의 주소 = " << &y << endl;
	swap(&x, &y);
	cout << "x" << x << ", y = " << y << endl;
	cout << "x의 주소 = " << &x << ", y의 주소 = " << &y << endl;
}
void swap(int *a, int *b) {
	int c;
	c = *a;
	*a = *b;
	*b = c;
	cout << "the values after swapping are x = " << *a << ", y = " << *b << endl;
}

void main() {     //ex 10-1
	int n, factorial;
	int fact(int);
	cout << "Enter the any number" << endl;
	cout << "number = ";
	cin >> n;
	factorial = fact(n);
	cout << "the factorial is " << factorial << endl;
}
int fact(int n) {
	int res = 1, i;
	for (i = n; i >= 1; i--) {
		res = res * i;
	}
	return(res);
}

void main() {     //ex 10-2
	int n, factorial;
	int fact(int);
	cout << "Enter the any number" << endl;
	cin >> n;
	factorial = fact(n);
	cout << "the factorial is " << factorial << endl;
}
int fact(int n) {
	int res = 1;
	if(n==1){
		return(res);
	}
	else {
		res = n * fact(n - 1);
	}
	return(res);
}

int main() {    //ex 1 - a
	cout << "Only stupids use C?" << endl;
	display();
	return 0;
}
void display()
{
	cout << "Fools too use C!" << endl;
	main();
}

int a = 0;     //ex 1-b
int main() {
	a += 1;
	if (a > 10) {
		return 0;
	}
	cout << "C to it that C survives" << endl;
	main();
}

 
int main() {   //ex 3
	int i = 30, c;
	c = check(i);
	cout << c << endl;
}
int check(int ch) {
	if (ch >= 45) return(100);
	else return(10);
}

#include<math.h>
int multiply(int ch);
int main() {
	int i = 136;
	int c = multiply(i * 1000);
	cout << c << endl;
	return 0
}
int multiply(int ch)
{
	if (ch >= 40000) return ch / 10;
	else return 10;
}