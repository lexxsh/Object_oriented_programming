#include<iostream>
#include<string>
#include"Date.h"

using namespace std;
Date::Date(int m, int d, int y) {
	setMonth(m);
	setDay(d);
	setYear(y);
}
void Date::setMonth(int m) {
	if (0 < m && m < 13) month = m;
	else month = 1;
}
int Date::getMonth() {
	return month;
}
void Date::setDay(int d) {
	day = d;
}
int Date::getDay() {
	return day;
}
void Date::setYear(int y) {
	year = y;
}
int Date::getYear() {
	return year;
}
void Date::displayDate() {
	cout << "Original date:\n" << month << "/" << day << "/" << year << endl;
}