#include<iostream>

using namespace std;

class count {
public:
	void setx(int value)
	{
		x = value;
	}
	void print()
	{
		cout << x << endl;
	}
private:
	int x;
};
int main() {
	count counter;
	count* counterptr = &counter;
	count& counterref = counter;
	cout << "set x to 1 and print using the object's name: ";
	counter.setx(1);
	counter.print();
	cout << "set x to 2 and print using a reference to an object: ";
	counterref.setx(2);
	counterref.print();
	cout << "set x to 3 and printf using a pointer to an object: ";
	counterptr->setx(3);
	counterptr->print();
	return 0;
}