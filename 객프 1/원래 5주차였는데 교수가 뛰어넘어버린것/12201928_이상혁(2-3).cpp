#include<iostream>
using namespace std;
int main() {
	int n,n1,n2;
	while(1){
		cout << "1.add 2.sub 3.mul 4.div 5.quit\nselect operation\n";
		cin >> n;
		if (n == 5) break;
		cout << "enter two numbers\n";
		cin >> n1 >> n2;
		switch (n) {
		case 1:
			cout << "the sum is " << n1 + n2 << endl;
			break;
		case 2:
			cout << "the sub is " << n1 - n2 << endl;
			break;
		case 3:
			cout << "the mul is " << n1 * n2 << endl;
			break;
		case 4:
			cout << "the div is " << n1 / n2 << endl;
			break;
		}
	}
}