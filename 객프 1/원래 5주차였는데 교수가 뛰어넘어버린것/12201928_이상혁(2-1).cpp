#include<iostream>
using namespace std;
int main(){
	int num, max(-9999), loc;
	cout << "Enter 10 numbers\n";
	for (int i = 0; i < 10; i++) {
		cin >> num;
		if (num > max) {
			max = num;
			loc = i;
		}
	}
	cout << "The max: " << max << endl;
	cout << "The location of max: " << loc << endl;
}