#pragma once
#include<iostream>
#include<string>

class Date {
public:
	Date(int m, int d, int y);
	void setMonth(int m);
	int getMonth();
	void setDay(int d);
	int getDay();
	void setYear(int y);
	int getYear();
	void displayDate();

private:
	int month;
	int day;
	int year;
};