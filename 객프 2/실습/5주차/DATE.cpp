#include "DATE.h"
#include<iostream>
using namespace std;
Date::Date(int m , int d, int y)
{
	month = d;
	day = d;
	year = y;
}

void Date::print()
{
	cout << month << "/" << day << '/' << year;
}
