#include<iostream>
using namespace std;
void main() {  //ex1
	int j=1; 
	while (j <= 10) {
		printf("j = %d\n", j);		
		j = j + 1;
	} 
}

void main() {  //ex2
	int i = 1;
	while (i <= 10) {
		printf("i = %d\n", i);
		i++;
	}
}

void main() {   //ex3
	int x = 1;
	while (x == 1) x = x - 1;
	printf("x = %d\n", x);
}
  
void main() {  //ex4
	char x;
	for (x = 0; x <= 255; x++)
		printf("\nAscii value %d Character %c", x, x);
}

void main() {  //ex4-1
	unsigned char x = 0;
	unsigned char y;
	while(x<=255){
		printf("\nAscii value %d Character %c", x, x);
		x++;
		if (x == 255) break;
}

void main(){ //ex5
	int a = 4, b = 4;
	cout << "a = " << a-- << endl;
	cout << "a = " << a << endl;
	cout << "b = " << --b << endl;
	cout << "b = " << b << endl;

	int x = 4, y, z;
	y = --x;
	cout << "x = " << x << endl;
	z = x--;
	cout << "x = " << x << endl;
	cout << "z = " << z << endl;
	printf("x = %d, y = %d, z = %d", x, y, z);
}

void main() {  //ex6
	int a = 4, b = 3, c;
	cout << "c = " << a-- - b << endl;
	cout << "a = " << a << endl;
	
	int d = 5, e = 3, f;
	cout << "f = " << --d - e << endl;
	cout << "d = " << d << endl;
	
	int x = 4, y = 3, z;
	z = x-- - y;
	printf("x = %d, y = %d, c = %d\n", x, y, z);
}

void main() {  //ex7
	while ('a' < 'b')
		printf("\nmalyalam is a palindrome");
}

void main() {  //ex8
	int i = 10;
	while (i = 20)
		printf("\nA computer buff!");
}

void main() {  //ex9
	int i;
	while (i = 10) {
		printf("i = %d\n", i);
		i = i + 1;
	}
}

void main() {  //ex10
	float x = 1.1;
	while (x == 1.1) {
		printf("%f\n", x);
		x = x - 0.1;
	}
}

void main() {  //ex11
	while ('1' < '2')
		printf("In while loop\n");
}

void main() {
	char x;
	for (x = 0; x <= 255; x++)
		printf("\nAscii value %d Character %c", x, x);
}

void main() {
	int x = 4,y = 0, z;
	while (x >= 0) {
		x--; 
		y++;
		if (x == y)
			continue;
		else printf("x = %d, y = %d\n", x, y);
	}
}

void main() {
	int x = 4, y = 0, z;
	while (x >= 0) {
		if (x == y)
			break;
		else
			printf("x = %d, y = %d\n", x, y);
		x--; 
		y++;
	}
}

int main(void) {
	int day, date;
	printf("===================================\n");
	printf("SUN. MON. TUE. WEN. THU. FRI. SAT. \n");
	printf("===================================\n");
	for (day = 0; day < START_DAY; day++) {
		printf("    ");
		for (date = 1; date <= DAYS_OF_MONTHE; date++) {
			if (day == 7) {
				day = 0;
				printf("\n");
			}
			day++;
			printf("%4d", date);
		}
		printf("\n===================================\n");
		return 0;
	}
}