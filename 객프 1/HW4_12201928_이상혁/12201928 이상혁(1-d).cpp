#include<iostream>
using namespace std;
/*int main(){
	int a = 3, b = 4, c;
	c = b - a;
	switch (c) {
		case 1||2:
			printf("God give me an opportunity to change things");
			break;
		case a||b:
			printf("God give me an opportunity to run my show");
			break;
	}
}*/
int main() {
	int a = 3, b = 4, c, d;
	c = b - a;
	
	if (c == 1 || c == 2) d = 0;
	else if (c == a || c == b) d = 1;
	
	switch (d) {
	case 0:
		cout << "God give me an opportunity to change things";
		break;
	case 1:
		cout << "God give me an opportunity to run my show";
		break;
	}
	return 0;
}