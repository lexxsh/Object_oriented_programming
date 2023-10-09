#include<iostream>
using namespace std;
/*int main(){
	float a = 3.5;
	switch (a)
	{
	case 0.5:
		printf("\nThe art of C");
		break;
	case 1.5:
		printf("\nThe spirit of C");
		break;
	case 2.5:
		printf("\nSee through C");
		break;
	case 3.5:
		printf("\nSimply c");
		break;
	}
}*/
int main(){


	float a = 3.5;
	switch ((int)a)
	{
	case 0:
		cout << "\nThe art of C";
		break;
	case 1:
		cout<< "\nThe spirit of C";
		break;
	case 2:
		cout<< "\nSee through C";
		break;
	case 3:
		cout << "\nSimply c";
		break;
	}
}