#include<iostream>
using namespace std;
/*int main() {
	int temp;
	scanf("%d", &temp);
	switch (temp) {
	case(temp <= 20):
		printf("\nOoooooohhhh! Damn cool!");
	case(temp>20 &&temp<=30):
		printf("\nRain rain here again!");
	case(temp>30&&temp<=40):
		printf("\nWish I am on Everest");
	default:
		printf("\nHood old nagpur weather");
	}
}*/
int main() {
	int temp, ans;
	cin >> temp;
	if (temp <= 20) ans = 0;
	else if (temp > 20 && temp <= 30) ans = 1;
	else if (temp > 30 && temp <= 40) ans = 2;
	else ans = 3;
	
	switch (ans) {
	case 0:
		cout << "\nOoooooohhhh! Damn cool!";
	case 1:
		cout << "\nRain rain here again!";
	case 2:
		cout << "\nWish I am on Everest";
	default:
		cout << "\nGood old nagpur weather";
	}
	return 0;
}