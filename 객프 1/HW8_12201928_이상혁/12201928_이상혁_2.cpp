#include<iostream>
using namespace std;
const int num = 3;

struct score {
	int korean;
	int english;
	int math;
	int total;
	int ID;
	int age;
	char sex;
};
int main() {
	score s[num];
	cout << "Enter student ID, age, sex(M for man, F for woman),and scores for 3 students"
		<< endl;
	for (int i = 0; i < num; i++) {
		cout << "student " << i + 1 << ": ";
		cin >> s[i].ID >> s[i].age >> s[i].sex >> s[i].korean >> s[i].english >> s[i].math;
		s[i].total = s[i].korean + s[i].english + s[i].math;
	}
	cout << "The score report" << endl;
	for (int i = 0; i < num; i++) {
		cout << "student: " << i + 1 << endl;
		cout << "student ID: " << s[i].ID << " age: " << s[i].age << " sex: "
			<< s[i].sex << endl;
		cout << "korean: " << s[i].korean << " english : " << s[i].english
			<< " math: " << s[i].math << " total: " << s[i].total << endl;
	}

}