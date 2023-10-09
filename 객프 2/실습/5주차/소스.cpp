#include<iostream>
using namespace std;

class gradebook
{
public:
	void displaymessage() {
		cout << "my book" <<coursename<< endl;
	}
	string coursename;
};

int main() {
	gradebook mygradebook;
	gradebook* pgb = &mygradebook;
	mygradebook.coursename = "oop";
	mygradebook.displaymessage();
	int n = 10;
	int* pn = &n;
	cout << pn<<" "<<sizeof(pn) << endl;
	cout << pgb<<" "<<sizeof(pgb) << endl;
}