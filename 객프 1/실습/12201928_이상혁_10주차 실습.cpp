#include<iostream>

using namespace std;    //ex1
/*struct student {
	int number;
	char name[10]; //문자열을 문자의 배열로 선언
	double height;
};

int main() {
	struct student s;
	strcpy_s(s.name, "댱댱아");
	s.number = 12210000;
	s.height = 170.2;
	s = { 12210000,"댱댱아",170.2 };
	cout << "sid : " << s.number << endl; // 접근
	cout << "name : " << s.name << endl;
	cout << "height : " << s.height << endl;

	return 0;
}

struct student {           //ex2
	int korean;
	int english;
	int math;
};

int main() {
	student x, y;
	x.korean = 90;
	x.english = 80;
	x.math = 70;

	cout << "x의 국어 영어 수학 " << x.korean << " " << x.english
		<< " " << x.math << endl;
	cin >> y.korean >> y.english >> y.math;
	cout << "y의 국어 영어 수학 " << y.korean << " " << y.english
		<< " " << y.math << endl;
}  

const int size = 3;

struct student {                 //ex3
	int number;
	char name[20];
	double height;
};
int main() {
	struct student list[size];
	for (int i = 0; i < size; i++) {
		cout << "학번입력 ";
		cin >> list[i].number;
		cout << "이름입력 ";
		cin >> list[i].name;
		cout << "무게입력 ";
		cin >> list[i].height;
	}
	for (int i = 0; i < size; i++) {
		cout << "학번 : " << list[i].number;
		cout << "이름 : " << list[i].name;
		cout << "무게 : " << list[i].height;
	}
	return 0;
} 

struct vector {                 //ex4
	float x;
	float y;
};
struct vector get_vector_sum(struct vector a, struct vector b);

int main() {
	struct vector a = { 2.0,3.0 };
	struct vector b = { 5.0,6.0 };
	struct vector sum;

	sum = get_vector_sum(a, b);
	cout << "벡터 합은 " << sum.x << sum.y << endl;
	return 0;
}
struct vector get_vector_sum(struct vector a, struct vector b) {
	struct vector result;
	result.x = a.x + b.x;
	result.y = a.y + b.y;
	return result;
}  

union example {                    //ex5
	int i;
	char c;
};
int main() {
	union example v;
	v.i = 100;
	cout << "v.c : " << v.c << " v.i : " << v.i << endl;
	v.c = 'A';
	cout << "v.c : " << v.c << " v.i : " << v.i << endl;
} 

union ip_address {                   //ex6
	unsigned long laddr;
	unsigned char saddr[4];
};
int main() {
	union ip_address addr;
	addr.saddr[0] = 1;
	addr.saddr[1] = 0;
	addr.saddr[2] = 0;
	addr.saddr[3] = 127;

	cout << "x : " << addr.laddr;
	return 0;
}

const int stu_num = 1;         //ex 7
const int reg_num = 2;

struct student {
	int type;
	union {
		int stu_num;
		char reg_num[15];
	}id;
	char name[20];
};
void print(struct student s) {
	switch (s.type) {
	case stu_num:
		cout << "std : " << s.id.stu_num;
		cout << "name : " << s.name;
		break;
	case reg_num:
		cout << "std : " << s.id.reg_num;
		cout << "name : " << s.name;
		break;
	default:
		cout << "type errrr" << endl;
		break;
	}   
}
int main() {
	struct student s1, s2;
	s1.type = stu_num;
	s1.type = stu_num;
	s1.id.stu_num = 122000000;
	strcpy(s1.name, "HOEN");

	s2.type = reg_num;
	strcpy(s2.id.reg_num, "0111212-3333333");
	strcpy(s2.name, "HOEN");

	print(s1);
	print(s2);
	return 0;
} */
