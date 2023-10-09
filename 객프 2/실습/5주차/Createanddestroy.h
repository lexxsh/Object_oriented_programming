#pragma once
#include<string>
using namespace std;
#ifndef CREATE_H
#define CREATE_H

class createanddestroy {
public:
	createanddestroy(int, string);
	~createanddestroy();
private:
	int objectID;
	string message;
};
#endif // !CREATE_H
