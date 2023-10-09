//#include<iostream>  //헤더파일로 만들기 3-1
//#ifndef TIME_H
//#define TIME_H
//using namespace std;
//
//class Time
//{
//public:
//	Time();
//	void settime(int, int, int);
//	void printuniversal();
//	void printstandard();
//private:
//	int hour;
//	int minute;
//	int second;
//};
//
//#endif

//#include<iostream>     3-2
//using namespace std;
//class gradebook {
//public:
//	void displaymessage()
//	{
//		cout << "welcome to the grade book!" << endl;
//	}
//};
//int main()
//{
//	gradebook mygradebook;
//	mygradebook.displaymessage();
//	return 0;
//}

//#include<iostream>    3-3
//#include<string>
//using namespace std;
//
//class gradebook {
//public:
//	void displaymessage(string coursename) {
//		cout << "welcone to the grade book for\n" << coursename << "!" << endl;
//
//	}
//};
//int main() {
//	string nameofcourse;
//	gradebook mygradebook;
//	cout << "please enter the course name:" << endl;
//	getline(cin,nameofcourse);
//	cout << endl;
//	mygradebook.displaymessage(nameofcourse);
//	return 0;
//}
//
//#include<iostream>     3-4
//#include<iostream>
//using namespace std;
//class gradebook {
//public:
//	void setcoursename(string name) {
//		coursename = name;
//	}
//	string getcoursename() {
//		return coursename;
//	}
//	void displaymessage() {
//		cout << "welcome to the grade book for\n" << getcoursename() << "!" << endl;
//
//	}
//private:
//	string coursename;
//};
//int main() {
//	string nameofcourse;
//	gradebook mygradebook;
//	cout << "initial course name is:" << mygradebook.getcoursename() << endl;
//	cout << "\nplease enter the course name:" << endl;
//	getline(cin, nameofcourse);
//	mygradebook.setcoursename(nameofcourse);
//	cout << endl;
//	mygradebook.displaymessage();
//	return 0;
//}
