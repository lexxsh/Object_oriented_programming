#pragma once
#ifndef ARRAY_H

#include<iostream>
using namespace std;

class Array
{
	friend ostream& operator<<(ostream&, const Array&);
	friend istream& operator>>(istream&, Array&);
public:
	Array(int = 10);
	Array(const Array&);
	~Array();
	int getsize() const;

	const Array& operator = (const Array&);
	bool operator==(const Array&) const;

	bool operator!=(const Array& right) const
	{
		return !(*this == right);
	}
	int& operator[](int);
	int operator[](int)const;
private:
	int size;
	int* ptr;
};

#endif // !ARRAY_H
