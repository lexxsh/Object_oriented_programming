
#include<iostream>
using namespace std;
#include"Createanddestroy.h"
createanddestroy::createanddestroy(int ID, string messageString)
{
	objectID = ID;
	message = messageString;
	cout << "object" << objectID << "   constructior runs   " <<
		message << endl;
}

createanddestroy::~createanddestroy()
{
	cout << (objectID == 1 || objectID == 6 ? "\n" : "");
	cout << "object " << objectID << "  destructor runs  "
		<< message << endl;
}


