#pragma once
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee {
public:
	Employee(const char* const, const char* const);
	~Employee();

	const char* getFirstName() const;
	const char* getLastName() const;

	static int getCount();

private:
	char* firstName;
	char* lastName;

	static int count;
};

#endif