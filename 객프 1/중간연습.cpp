#include<iostream>
#include<string>

using namespace std;
int main() {
	int arr[10];
	cout << "Enter 10 num'\n";
	for (int i = 0; i < 10; i++) cin >> arr[i];
	for (int i = 0; i < 10; i++) {
		for(int j = 0; j < 10; j++) {
			if (arr[i] < arr[j]) {
				int tmp;
				tmp = arr[j];
				arr[j] = arr[i];
				arr[i] = tmp;
			}
		}
	}
	for (int i = 0; i < 10; i++) cout << arr[i] << "  ";

}