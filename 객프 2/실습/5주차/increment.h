#pragma once
#ifndef  INCREMENT_h
#define INCREMENT_h
class Increment {
public:
	Increment(int c = 0, int i = 1);
	void addIncrement() {
		count += increment;
	}
	void print() const;
private:
	int count;
	const int increment;
};
#endif // ! INCREMENT_h

