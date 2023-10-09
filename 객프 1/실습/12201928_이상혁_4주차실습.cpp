#include<iostream>
#include<iomanip>
#include<Math.h>
using namespace std;

int main() {
	int cont = 0 , i = 1;
	while (1) {
		cont = i+cont;
		if (cont >= 5050) {
			break;
		}
		i++;
	}
	cout << " i = " << i << "cont = " << cont << endl;
}

int main() {
	int cont = 0, i = 1;
	for (;;)
	{
		cont = i + cont;
		if (cont >= 5050)
			break;
		i++;
	}
	cout << "i = " << i << "cont = " << cont << endl;
}

int main() {
	int i = 22;
	int a = 1, b = 3;
	int a1 = 1, a2 = 1, a3 = 1, a4 = 1, a5 = 1;
	int c1, c2, c3, c4, c5, c6;

	c1 = a + b;
	c2 = a - b;
	c3 = a * b;
	c4 = a / b;
	c5 = a & b;
	c6 = pow(2, 10);
	a1 += b;
	a2 -= b;
	a3 *= b;
	a4 /= b;
	a5 %= b;
	cout << setw(3) << "c1" << setw(3) << "c2" << setw(3) << "c3" << setw(3) << "c4" << setw(3) << "c5" << setw(3) << "c6" << endl;
	cout << setw(3) << c1 << setw(3) << c2 << setw(3) << c3 << setw(3) << c4 << setw(3) << c5 << setw(3) << c6 << endl;
	cout << setw(3) << "a1" << setw(3) << "a2" << setw(3) << "a3" << setw(3) << "a4" << setw(3) << "a5" << endl;
	cout << setw(3) << a1 << setw(3) << a2 << setw(3) << a3 << setw(3) << a4 << setw(3) << a5 << endl;

	return 0;
}

int main() {
	int i = 3;
	switch (i) {
	case 1:
		cout << "I am in case 1" << endl;
	case 2:
		cout << "I am in case 2" << endl;
	case 3:
		cout << "I am in case 3" << endl;
		break;
	default:
		cout << "I am in default" << endl;
	}
	return 0;
}

int main() {
	int i;
	for (;;) {
		cout << "숫자를 입력해주세요 : ";
		cin >> i;
		i %= 2;
		switch (i) {
		case 0:
			cout << "짝수 입니다." << endl;
		default : 
			cout << "홀수 입니다." << endl;
			break;
		}
		return 0;
	}
}
int main() {
	char suite = 3;
	switch (suite)
	{
	case 1:
		cout << "Diamond"<< endl;
	case 2:
		cout << "Spade" << endl;
	default:
		cout << "Heart" << endl;
	}
	cout << "I thjought one wears a suite" << endl;
}

int main() {
	int c = 3;
	switch (c)
	{
	case 'v':
		cout << "I am in case v " << endl;
		break;
	case 3:
		cout << "I am in case 3 " << endl;
	case 12:
		cout << "I am in case 12" << endl;
	}
		cout << "I am in default" << endl;
	}

int main() {
	int k, j = 2;
	switch (k = j + 1)
	{
	case 0:
		cout << "Tailor" << endl;
	case 1:
		cout << "Tutor" << endl;
	case 2:
		cout << "Tramp" << endl;
	default:
		cout << "Pure Simple Egghead!" << endl;
	}
}
int main() {
	int i = 0;
	switch (i)
	{
	case 0:
		cout << "Customers are dicey" << endl;
	case 1:
		cout << "Markets are pricey" << endl;
	case 2:
		cout << "Investors are moody" << endl;
	case 3:
		cout << "At least employees are good" << endl;
	}
}

int main() {
	int k;
	float j = 3.1;
	switch (k = j + 1) {
	case 3:
		cout << "Trapped" << endl;
		break;
	default:
		cout << "Caught!" << endl;
	}
}
int main() {
	int ch = 'a' + 'b';
	switch (ch)
	{
	case 'a':
	case 'b':
		cout << "You entered b" << endl;
	case'A':
		cout << "nas as in ashar" << endl;
	case'b'+'a':
		cout << "YOU entered a and b" << endl;
	}
}
int main() {
	int i = 1;
	switch (i - 2) {
	case -1:
		cout << "Feeding fish" << endl;
	case 0 :
		cout << "Weeding grass" << endl;
	case 1:
		cout << "mending roof" << endl;
	default:
		cout << "Just to survive" << endl;
	}
}