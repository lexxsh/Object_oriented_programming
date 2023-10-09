#include <iostream>
using namespace std;
#include<fstream>

// EX #1
void main() {
   char* pc = NULL;
   pc = new char[1]; // 동적 메모리 할당
   int i = 0;
   if (pc == NULL) {
      cout << "Memory allocation Error" << endl;
      exit(1);
   }
   *pc = 'm';
   cout << "*pc = " << *pc << endl;
   delete[] pc; // 더 이상 필요하지 않을 경우 할당된 메모리해제
}

// EX #2
void main() {
   char* pc = NULL;
   int i = 0;
   pc = new char[100];
   if (pc == NULL) {
      cout << "Memory allocation Error" << endl;
      exit(1);
   }
   for (i = 0; i < 26; i++) {
      *(pc + i) = 'a' + i;
   }
   *(pc + i) = 0;
   cout << pc << endl;
   cout << (void*)pc;
   delete[] pc;
}

// EX #3
void main() {
   int* pi = NULL;
   pi = new int[5];
   if (pi == NULL) {
      cout << "Memory allocation Error" << endl;
      exit(1);
   }
   pi[0] = 100; // *(pi+0) = 100; 
   pi[1] = 200; // *(pi+1) = 200;
   pi[2] = 300; // *(pi+2) = 300;
   pi[3] = 400; // *(pi+3) = 400;
   pi[4] = 500; // *(pi+4) = 500;
   cout << *(pi + 0) << endl;
   cout << pi[0] << endl;
   cout << *(pi + 3) << endl;
   delete[] pi;
}

// EX #4
struct Book {
   int number;
   char title[30];
};
void main() {
   struct Book* p;
   p - new Book[2];
   if (p == NULL) {
      cout << "Memory allocation Error" << endl;
      exit(1);
   }
   p->number = 1;
   strcpy_s(p->title, "C/C++ Programming");
   (p + 1)->number = 2;
   strcpy_s((p + 1)->title, "Data Structure");
   cout << p->number << endl;
   cout << p->title << endl;
   cout << (p + 1)->number << endl;
   cout << (p + 1)->title << endl;
   delete[] p;
}

 EX #5
void main() {
	ofstream a;
	a.open("sample.txt");
	int i = 0;
	if (a.is_open()) {
		a << "a";
		cout << "success" << endl;
	}
	else
		cout << "fail" << endl;
	a.close();
}

 EX #6
#include<string>
#include<sstream>
void main() {
	ofstream a;
	char fname[100];
	int sid, count = 0;
	char name[20];
	float score, total = 0.0;
	cout << "enter the score file name : " << endl;
	cin >> fname;
	a.open(fname);
	if (a.is_open()) {
		while (1) {
			cout << "enter the sid, name, score : " << endl;
			cin >> sid;
			if (sid < 0)break;
			cin >> name >> score;
			a << sid << " " << name << " " << score << endl;
		}
	}
	a.close();
	ifstream aa;
	string line;
	aa.open(fname);

	if (aa.is_open()) {
		while (1) {
			getline(aa,line);
			stringstream ss(line);
			ss.str(line);
			string name;
			int num,score;
			ss >> num >> name >> score;
			if (aa.eof())break;
			total = total + score;
			count++;
		}
	}
	cout << "average : " << total / count << endl;
	aa.close();
}