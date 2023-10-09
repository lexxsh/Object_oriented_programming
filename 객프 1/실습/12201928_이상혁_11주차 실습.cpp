#include<iostream>
using namespace std;

/*
enum days { sun, mon, tue, wed, thu, fri, sat };

enum caroptions {
	sunroof = 0x01, spoiler = 0x02, foglights = 0x03,tintedwiondow = 0x08
};
void main() {
	days days1;
	days1 = fri;
	int car;
	car = tintedwiondow;
	if (days1 == 5) {
		cout << "friday" << endl;
	}
	if (days1 == 8) {
		cout << "tintedwiondow" << endl;
	}
}
  
enum tvtye{lcd, led, pdp, td};
void main() {
	int type;
	cout << "enter the tpye of tv :";
	cin >> type;
	switch (type) {
	case lcd:
		cout << "lcd tv" << endl;
		break;
	case led:
		cout << "led tv" << endl;
		break;
	case pdp:
		cout << "pdp tv" << endl;
		break;
	case td:
		cout << "td tv" << endl;
		break;
	default:
		cout << "reselect the tv type" << endl;
		break;
	}
}
 

typedef struct point {
	int x;
	int y;
} POINT;
POINT translate(POINT p, POINT delta);
void main() {
	POINT p = { 2,3 };
	POINT delta = { 10,10 };
	POINT result;
	result = translate(p, delta);
	cout << "coordinate  of the new point : " << result.x << result.y << endl;
}
POINT translate(POINT p, POINT delta) {
	POINT new_p;
	new_p.x = p.x + delta.x;
	new_p.y = p.y + delta.y;
	return new_p;
}  

#pragma pack(show)
union test {
	int a;
	double b;
	char name[9];
};
struct test1 {
	double a;
	char b;
	short c;
	int d;
};
struct test2
{
	char a;
	double b;
	short c;
	int d;
};
void main() {
	cout << "test  " << sizeof(test) << endl;
	cout << "test 1 " << sizeof(test1) << endl;
	cout << "test 2 " << sizeof(test2) << endl;
}  

int main() {
	int n = 10;
	int* m;
	m = &n;
	cout << "address : " << m << " value : " << *m;

	n = 100;
	cout << "address : " << m << " value : " << *m;
	return 0;
}  

int main() {
	char c = 'a';
	int i = 100000;
	double d = 6.89;

	char* pc = &c;
	int* pi = &i;
	double* pd = &d;
	(*pc)++;
	*pi = *pi + 1;
	*pd += 1;
	cout << "c = " << c<<endl;
	cout << "i = " << i<<endl;
	cout << "d = " << d<<endl;
	return 0;
}
  
int main() {
	int i = 100000;
	int* p, * q;
	p = &i;
	q = &i;
	*p = *p + 1;
	*q = *q + 1;
	cout << " i = " << i;
	return 0;
}  
int main() {
	int i;
	double* pd;
	pd& i;
	*pd = 36.5;
	return 0;
}*/
