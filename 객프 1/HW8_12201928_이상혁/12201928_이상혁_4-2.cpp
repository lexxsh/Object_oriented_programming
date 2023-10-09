#include<iostream>
using namespace std;
const int num = 5;


struct student_array {
    int korean, english, math, total, ID;
    char sex;
    string name;
};
student_array s[num];
void load();
void show();
void best_score();
void malesex_students();
void femalesex_students();
void change();


int main() {
    int menu;
    while (1) {
        cout << "1. load 2. show 3. best score 4. male students 5. female students 6. change 7. exit" << endl;
        cout << "select menu" << endl;
        cin >> menu;
        if (menu == 7) break;
        switch (menu) {
        case 1:
            load();
            break;
        case 2:
            show();
            break;
        case 3:
            best_score();
            break;
        case 4:
            malesex_students();
            break;
        case 5:
            femalesex_students();
            break;
        case 6:
            change();
            break;
        default:
            cout << "enter again" << endl;
            break;
        }
    }
    return 0;
}

void load() {
    cout << "enter data for 5 students (name id sex korean english math scores)" << endl;
    for (int i = 0; i < num; i++) {
        cout << "student " << i + 1 << ": ";
        cin >> s[i].name >> s[i].ID >> s[i].sex >> s[i].korean >> s[i].english >> s[i].math;
        s[i].total = s[i].korean + s[i].english + s[i].math;
    }
};
void show() {
    cout << "The score report" << endl;
    for (int i = 0; i < num; i++) {
        cout << "student: " << i + 1 << endl;
        cout << "student name: " << s[i].name << " student ID: " << s[i].ID << " age: "
            << " sex: " << s[i].sex << endl;
        cout << " korean: " << s[i].korean << " english : " << s[i].english
            << " math: " << s[i].math << " total: " << s[i].total << endl;
    }
};
void best_score() {
    int max[3] = { 0 };
    int index[3] = { 0 };
    for (int i = 0; i < num; i++) {
        if (s[i].korean > max[0]) {
            max[0] = s[i].korean;
            index[0] = i;
        }
        if (s[i].english > max[1]) {
            max[1] = s[i].english;
            index[1] = i;
        }
        if (s[i].korean > max[2]) {
            max[2] = s[i].korean;
            index[2] = i;
        }
    }
    cout << "best score for korean: " << s[index[0]].name << " " << max[0] << endl;
    cout << "best score for english: " << s[index[1]].name << " " << max[1] << endl;
    cout << "best score for math: " << s[index[2]].name << " " << max[2] << endl;
};
void malesex_students() {
    for (int i = 0; i < num; i++) {
        if (s[i].sex == 'M') {
            cout << "The data for male students" << endl;
            cout << "student: " << i + 1 << endl;
            cout << "student name: " << s[i].name << " student ID: " << s[i].ID << " age: "
                << " sex: " << s[i].sex << endl;
            cout << " korean: " << s[i].korean << " english : " << s[i].english
                << " math: " << s[i].math << " total: " << s[i].total << endl;
        }
    }
};
void femalesex_students() {
    for (int i = 0; i < num; i++) {
        if (s[i].sex == 'F') {
            cout << "The data for male students" << endl;
            cout << "student: " << i + 1 << endl;
            cout << "student name: " << s[i].name << " student ID: " << s[i].ID << " age: "
                << " sex: " << s[i].sex << endl;
            cout << " korean: " << s[i].korean << " english : " << s[i].english
                << " math: " << s[i].math << " total: " << s[i].total << endl;
        }
    }
}

void change() {
    int id;
    cout << "enter student ID" << endl;
    cin >> id;
    for (int i = 0; i < num; i++) {
        if (s[i].ID == id) {
            cout << "enter nex data(name id sex korean english math" << endl;
            cout << "student " << i + 1 << ": ";
            cin >> s[i].name >> s[i].ID >> s[i].sex >> s[i].korean >> s[i].english >> s[i].math;
            s[i].total = s[i].korean + s[i].english + s[i].math;
        }
    }
};