//#include<iostream>  3-7
//#include<string>
//using namespace std;
//class gradebook {
//public:
//	gradebook(string name)
//	{
//		setcoursename(name);
//	}
//	void setcoursename(string name)
//	{
//		coursename = name;
//	}
//	string getcoursename() {
//		return coursename;
//	}
//	void displaymessage() {
//		cout << "welcome to the grade book for\n" << getcoursename() << "!" << endl;
//	}
//private:
//	string coursename;
//};
//int main() {
//	gradebook gradebook1("cs101 introduction to c++ programming");
//	gradebook gradebook2("cs102 data structures in c++");
//	cout << "gradebook1 created for course: " << gradebook1.getcoursename() << "\ngradebook2 created for course : "
//		<< gradebook2.getcoursename() << endl;
//	return 0;
//}

//#include<iostream>   3-8
//#include<string>
//using namespace std;
//class gradebook {
//public:
//	gradebook(string name) {
//		setcoursename(name);
//	}
//	void setcoursename(string name) {
//		coursename = name;
//	}
//	string getcoursename() {
//		return coursename;
//	}
//	void displaymessage() {
//		cout << "welcome to the gradebook for\n" << getcoursename() << "!" << endl;
//	}
//private:
//	string coursename;
//};

//#include <iostream>     
//#include <string>
//using namespace std;
//
//#include "gradebook.h"
//
//int main() {
//    GradeBook gradeBook1("cs101 Introduction to Programming in C++");
//    GradeBook gradeBook2("cs102 Data Structures");
//
//    cout << "gradeBook1's initial course name is: " << gradeBook1.getCourseName()
//        << "\ngradeBook2's initial course name is: " << gradeBook2.getCourseName() << endl;
//
//    gradeBook1.setCourseName("cs101 c++ Programming");
//
//    cout << "\ngradeBook1's course name is: " << gradeBook1.getCourseName()
//        << "\ngradeBook2's course name is: " << gradeBook2.getCourseName() << endl;
//    return 0;
//}

//#pragma once   3-9
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//
//class GradeBook {
//public:
//    GradeBook(string);
//    void setCourseName(string);
//    string getCourseName();
//    void displayMessage();
//
//private:
//    string courseName;
//};

//#include<iostream>
//#include"gradebook.h"
//
//GradeBook::GradeBook(string name) {
//	setCourseName(name);
//}
//void GradeBook::setCourseName(string name) {
//	courseName = name;
//}
//string GradeBook::getCourseName() {
//	return courseName;
//}
//void GradeBook::displayMessage() {
//	cout << "welcome to the grade book for\n" << getCourseName() << "!" << endl;
//}


//#include <iostream>
//#include <string>
//using namespace std;
//
//#include "gradebook.h"
//
//GradeBook::GradeBook(string name) {
//    setCourseName(name);
//}
//
//void GradeBook::setCourseName(string name) {
//    if (name.length() <= 25)
//        courseName = name;
//    if (name.length() > 25) {
//        courseName = name.substr(0.25);
//        cout << "Name: " << name << "exceeds maximum length (25). \n"
//            << "Limiting courseName to first 25 characters \n" << endl;
//    }
//}
//
//string GradeBook::getCourseName() {
//    return courseName;
//}
//void GradeBook::displayMessage() {
//    cout << "welcome to the grade book for\n" << getCourseName() << "!" << endl;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//#include "gradebook.h"
//
//int main() {
//    GradeBook gradeBook1("cs101 Introduction to Programming in C++");
//    GradeBook gradeBook2("cs102 Data Structures");
//
//    cout << "gradeBook1's initial course name is: " << gradeBook1.getCourseName()
//        << "\ngradeBook2's initial course name is: " << gradeBook2.getCourseName() << endl;
//
//    gradeBook1.setCourseName("cs101 c++ Programming");
//
//    cout << "\ngradeBook1's course name is: " << gradeBook1.getCourseName()
//        << "\ngradeBook2's course name is: " << gradeBook2.getCourseName() << endl;
//    return 0;
//}