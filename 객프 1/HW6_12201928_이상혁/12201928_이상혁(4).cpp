#include<iostream>
using namespace std;
void sum();

int main() {
	sum();
	return 0;
}
void sum() {
	int n,sum1(0),sum2(0),sum3(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		sum1 += i;
		if (i % 2 == 0) sum2 += i;
		else sum3 += i;
	}
	cout << "1부터 n까지의 합 : " << sum1 << endl;
	cout << "1부터 n까지의 짝수의 합 : " << sum2 << endl;
	cout << "1부터 n까지의 홀수의 합 : " << sum3 << endl;
}