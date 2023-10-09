#include<iostream>
using namespace std;
const int SIze = 3;
struct score{
	int korean;
	int english;
	int math;
	int total;
};
int main() {
	score s[SIze];
	cout << "Enter scores for 3 students" << endl;
	for (int i = 0; i < SIze; i++) {
		cout << "student " << i+1 << ": ";
		cin >> s[i].korean >> s[i].english >> s[i].math;
		s[i].total = s[i].korean + s[i].english + s[i].math;
	}
	cout << "The score report" << endl;
	for (int i = 0; i < SIze; i++) {
		cout << "student " << i+1 << endl;
		cout << "korean: " << s[i].korean << " english: " << s[i].english
			<< " math: " << s[i].math << " total: " << s[i].total << endl;
	}

}