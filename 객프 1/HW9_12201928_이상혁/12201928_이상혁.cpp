//// ex 1
//#include<iostream> 
//using namespace std; 
//
//int main() { 
//	int n = 10; 
//	int* m; 
//
//	m = &n; // m�� n�� �ּҸ� �����Ѵ�.
//	cout << "address : " << m << ", value : " << *m << endl; // "address : "�� m�� ��, ", value : "�� *m�� ��(m �ּ��� ��)�� ���ʴ�� ����ϰ� ���� �ѱ��.
//	n = 100; // n�� 100�� �����Ѵ�.
//	cout << "address : " << m << ", value : " << *m << endl; // "address : "�� m�� ��, ", value : "�� *m�� ��(m �ּ��� ��)�� ���ʴ�� ����ϰ� ���� �ѱ��.
//
//	return 0; 
//}
//
// ex 2
//#include<iostream> 
//using namespace std;
//
//int main() { 
//	char c = 'a'; 
//	int i = 10000; 
//	double d = 6.78; 
//	char* pc = &c; // char�� �������� ���� pc�� ����� c�� �ּҸ� �����Ѵ�.
//	int* pi = &i; // int�� �������� ���� pi�� ����� i�� �ּҸ� �����Ѵ�. 
//	double* pd = &d; // double�� �������� ���� pd�� ����� d�� �ּҸ� �����Ѵ�.
//
//	(*pc)++; // *pc(pc �ּ��� ��)�� *pc + 1�� �����Ѵ�.
//	*pi = *pi + 1; // *pi(pi �ּ��� ��)�� *pi + 1�� �����Ѵ�.
//	*pd += 1; // *pd(pd �ּ��� ��)�� *pd + 1�� �����Ѵ�.
//
//	cout << "c = " << c << endl; 
//	cout << "i = " << i << endl; 
//	cout << "d = " << d << endl;
//
//	return 0;
//}

//// ex 3
//#include<iostream> 
//using namespace std; 
//
//int main() { 
//	int i = 10000; 
//	int* p, * q; 
//
//	p = &i; // p�� i�� �ּҸ� �����Ѵ�,
//	q = &i; // q�� i�� �ּҸ� �����Ѵ�.
//	*p = *p + 1; // *p(p �ּ��� ��)�� *p + 1�� �����Ѵ�.
//	*q = *q + 1; // *q(q �ּ��� ��)�� *q+ 1�� �����Ѵ�.
//
//	cout << "i = " << i << endl;
//
//	return 0;
//}

// ex 4
//#include<iostream>
//using namespace std; 
//
//int main() { 
//	int i; 
//	double* pd; // double�� ����Ʈ�� ���� pd�� �����.
//
//	pd = & i; // pd�� i�� �ּҸ� �����Ѵ�. pd�� double�� �������� �����̰� i�� int�� �����̹Ƿ� ������ ��Ÿ����.
//	*pd = 36.5; // *pd(pd �ּ��� ��)�� 36.5�� �����Ѵ�.
//
//	return 0; 
//}
//
// ex 5
//#include<iostream>
//using namespace std; 
//
//int main() {
//	int a[] = { 10,20,30,40,50 };
//
//	cout << &a[0] << endl; // a[0]�� �ּҸ� ����ϰ� ���� �ѱ��.
//	cout << &a[1] << endl; // a[1]�� �ּҸ� ����ϰ� ���� �ѱ��.
//	cout << &a[2] << endl; // a[2]�� �ּҸ� ����ϰ� ���� �ѱ��.
//	cout << a << endl;
//
//	return 0;
//}

// ex 6
//#include<iostream> 
//using namespace std; 
//
//int main() { 
//	int a[] = { 10,20,30,40,50 }; 
//
//	cout << "a = " << a << endl; // "a = "�� a�� ��(&a[0])�� ����ϰ� ���� �ѱ��.
//	cout << "a + 1 = " << a + 1 << endl; // "a + 1 = "�� a + 1�� ��(&a[1])�� ����ϰ� ���� �ѱ��.
//	cout << "a = " << *a << endl; // "a = "�� *a�� ��(a[0]�� ��)�� ����ϰ� ���� �ѱ��.
//	cout << "a + 1 = " << *(a + 1) << endl; // "a = "�� *(a + 1)�� ��(a[1]�� ��)�� ����ϰ� ���� �ѱ��.
//
//	return 0; 
//}

//// ex 7
//#include<iostream> 
//using namespace std; 
//
//int main() {
//	int a[] = { 10,20,30,40,50 }; // int�� �迭 a[]�� ����� { 10,20,30,40,50 }�� �����Ѵ�.
//	int* p; // int�� �������� ���� p�� �����.
//	p = a; // p�� �迭 a�� �����Ѵ�.
//
//	cout << "1 = " << a[0] << " 2 = " << a[1] << " 3 = " << a[2] << endl; //"1 = ", a[0]�� ��, " 2 = ", a[1]�� ��, " 3 = ", a[2]�� ���� ���ʴ�� ����ϰ� ���� �ѱ��.
//	cout << "1 = " << p[0] << " 2 = " << p[1] << " 3 = " << p[2] << endl; //"1 = ", p[0]�� ��, " 2 = ", p[1]�� ��, " 3 = ", p[2]�� ���� ���ʴ�� ����ϰ� ���� �ѱ��.
//
//	p[0] = 60; // p[0]�� 60�� �����Ѵ�.
//	p[1] = 70; // p[1]�� 70�� �����Ѵ�.
//	p[2] = 80; // p[2]�� 80�� �����Ѵ�.
//
//	cout << "1 = " << a[0] << " 2 = " << a[1] << " 3 = " << a[2] << endl; //"1 = ", a[0]�� ��, " 2 = ", a[1]�� ��, " 3 = ", a[2]�� ���� ���ʴ�� ����ϰ� ���� �ѱ��.
//	cout << "1 = " << p[0] << " 2 = " << p[1] << " 3 = " << p[2] << endl; //"1 = ", p[0]�� ��, " 2 = ", p[1]�� ��, " 3 = ", p[2]�� ���� ���ʴ�� ����ϰ� ���� �ѱ��.
//
//	return 0;
//}

//// ex 8
//#include<iostream> 
//using namespace std; 
//
//void sub(int* p); // �Լ� sub�� ������ Ÿ���̴�.
//
//int main() { 
//	int i = 100; 
//	sub(&i); // sub()�Լ��� �μ��� &i(i�� �ּ�)�� �־� sub(&i)�� �����Ѵ�.
//	cout << i; // i�� ���� ����Ѵ�.
//	return 0; 
//}
//
//void sub(int* p) { // �ƹ��� ���� ��ȯ���� �ʴ� �Լ� sub�� �����.
//	*p = 200; // *p(p �ּ��� ��)�� 200�� �����Ѵ�.
//}

//// ex 9
//#include<iostream> 
//using namespace std; 
//
//void swap(int x, int y); 
//int main() {
//	int a = 100, b = 200; 
//	cout << "main() a = " << a << " b = " << b << endl; // "main() a = ", a�� ��, " b = ", b�� ���� ���ʴ�� ����ϰ� ���� �ѱ��.
//	swap(a, b); // �Լ� swqp()�� �μ��ν� a,b�� �־� swap(a, b)�� �����Ѵ�.
//	cout << "main() a = " << a << " b = " << b << endl; // "main() a = ", a�� ��, " b = ", b�� ���� ���ʴ�� ����ϰ� ���� �ѱ��.
//	return 0; 
//}

//void swap(int x, int y) { 
//	int tmp; 
//	cout << "swap() x = " << x << " y = " << y << endl; // "swap() x = ", x�� ��, " y = ", y�� ���� ����ϰ� ���� �ѱ��.
//	tmp = x; // tmp�� x�� ���� �����Ѵ�.
//	x = y; // x�� y�� ���� �����Ѵ�.
//	y = tmp; // y�� tmp�� ���� �����Ѵ�.
//	cout << "swap() x = " << x << " y = " << y << endl; // "swap() x = ", x�� ��, " y = ", y�� ���� ����ϰ� ���� �ѱ��.
//}

// ex 10
//#include<iostream> 
//using namespace std; 
//
//void swap(int*, int*); 
//int main() { 
//	int a = 100, b = 200;
//	cout << "main() a = " << a << " b = " << b << endl; // "main() a = ", a�� ��, " b = ", b�� ���� ���ʴ�� ����ϰ� ���� �ѱ��.
//	swap(&a, &b); // �Լ� swqp()�� �μ��ν� &a(a�� �ּ�),&b(b�� �ּ�)�� �־� swap(&a, &b)�� �����Ѵ�.
//	cout << "main() a = " << a << " b = " << b << endl; // "main() a = ", a�� ��, " b = ", b�� ���� ���ʴ�� ����ϰ� ���� �ѱ��.
//	return 0; 
//}
//
//void swap(int* px, int* py) { // �ƹ��� ���� ��ȯ���� �ʴ� �Լ� swap�� �����.
//	int tmp; 
//	cout << "swap() *px = " << *px << " *py = " << *py << endl; // "swap() *px = ", *px�� ��, " *py = ", *py�� ���� ����ϰ� ���� �ѱ��.
//	tmp = *px; // tmp�� *px�� ��(px �ּ��� ��)�� �����Ѵ�.
//	*px = *py; // *px�� *py�� ��(py �ּ��� ��)�� �����Ѵ�.
//	*py = tmp; // *py�� tmp�� ���� �����Ѵ�.
//	cout << "swap() *px = " << *px << " *py = " << *py << endl; // "swap() *px = ", *px�� ��, " *py = ", *py�� ���� ����ϰ� ���� �ѱ��.
//}
//
// ex 11
//#include<iostream> 
//using namespace std; 
//
//void addmult(int a, int b, int* sum, int* mult) { // �ƹ��� ���� ��ȯ���� �ʴ� �Լ� addmult�� �����.
//	*sum = a + b; // *sum(sum �ּ��� ��)�� a + b�� ���� �����Ѵ�.
//	*mult = a * b; // *mult(mult �ּ��� ��)�� a * b�� ���� �����Ѵ�.
//}
//
//int main() {
//	int x = 10; // int�� ���� x�� ����� 10�� �����Ѵ�.
//	int y = 20; // int�� ���� y�� ����� 20�� �����Ѵ�.
//	int s; // int�� ���� s�� �����.
//	int m; // int�� ���� m�� �����.
//
//	addmult(x, y, &s, &m); // �Լ� addmult()�� x, y, &s(s�� �ּ�), &m(m�� �ּ�)�� �μ��� �־� addmult(x, y, &s, &m)�� �����Ѵ�.
//	cout << s << " " << m << endl; // s, " ", m�� ����ϰ� ���� �ѱ��.
//
//	return 0; 
//}

// ex 12 
// �����͸� ���� ����ü ����
//#include<iostream> 
//using namespace std; 
//
//struct student { 
//	int number;
//	char name[20]; 
//	double height;
//};
//
//int main() { 
//	struct student s = { 200700001,"hong",180.2 }; 
//	struct student* p; // struct student�� �������� ���� p�� �����.
//	p = &s; // p�� &s(s�� �ּ�)�� �����Ѵ�.
//	cout << "student id is: " << s.number << " name is:" << s.name << " height is: " << s.height << endl;
//	 "student id is: "�� s.number�� ��, " name is:", s.name�� ��, " height is: ",  s.height�� ���� ����ϰ� ���� �ѱ��.
//	cout << "student id is: " << (*p).number << " name is:" << (*p).name << " height is: " << (*p).height << endl;
//	 "student id is: ", (*p).number�� ��(p �ּҿ� �ִ� number ��), " name is:",(*p).name�� ��, " height is: ", (*p).height�� ���� ����ϰ� ���� �ѱ��.
//	cout << "student id is: " << p->number << " name is:" << p->name << " height is: " << p->height << endl;
//	 "student id is: ", p->.number(p �ּҿ� �ִ� number ��)�� ��, " name is:", p->name�� ��, " height is: ", p->height�� ���� ����ϰ� ���� �ѱ��.
//	return 0; 
//}

// ex 13
//#include<iostream> 
//using namespace std;
//
//struct date {
//	int month;
//	int day; 
//	int year; 
//};
//
//struct student { 
//	int number; 
//	char name[20]; 
//	double height; 
//	struct date* dob; // struct date�� ����Ʈ�� ���� dob�� �����.
//};
//
//int main() { 
//	struct date d = { 3,20,1980 }; // struct date�� ���� d�� ����� { 3,20,1980 }�� �����Ѵ�.
//	struct student s = { 200700001,"hong",180.2 }; // struct student�� ���� s�� ����� { 200700001,"hong",180.2 }�� �����Ѵ�.
//	s.dob = &d; // s.dob�� &d(d�� �ּ�)�� �����Ѵ�.
//	cout << "sid : " << s.number << endl; // "sid : ", s.number�� ���� ����ϰ� ���� �ѱ��.
//	cout << "name : " << s.name << endl; // "name : ",  s.name�� ���� ����ϰ� ���� �ѱ��.
//	cout << "height : " << s.height << endl; // "height : ", s.height�� ���� ����ϰ� ���� �ѱ��.
//	cout << "bday : " << s.dob->year << ", " << s.dob->month << ", " << s.dob->day;
//	 "bday : ", s.dob->year�� ��(s.dob �ּҿ� �ִ� year�� ��), s.dob->month�� ��, s.dob->day�� ���� ����Ѵ�.
//	return 0;
//}

// ex 14
//#include<iostream> 
//using namespace std; 

struct student { // student��� struct�� �����.
//	int number; // int�� ���� number�� �����.
//	char name[20]; // char�� �迭 name[20]�� �����.
//	double height; // double�� ���� height�� �����.
//	struct student* next; // struct student�� �������� ���� next�� �����.
//};
//
//int main() { // ���� ���� ������ �ǰ� ����Ǵ� ���� �Լ��̴�.
//	struct student s1 = { 30,"kim",167.2 }; // struct student�� ���� s1�� ����� { 30,"kim",167.2 }�� �����Ѵ�.
//	struct student s2 = { 31,"park",179.1,null }; // struct student�� ���� s1�� ����� { 31,"park",179.1,null }�� �����Ѵ�.
//	struct student* first; // struct student�� �������� ���� first�� �����.
//	struct student* current = null; // struct student�� �������� ���� current�� ����� null�� �����Ѵ�.
//
//	first = &s1; // first�� s1�� �ּҸ� �����Ѵ�.
//	s1.next = &s2; // s1.next�� s2�� �ּҸ� �����Ѵ�.
//	s2.next = null; // s2.next�� null�� �����Ѵ�.
//	current = first; // current�� first�� �����Ѵ�.
//	while (current != null) { // current != null�� true�� ��� while���ϸ� �ݺ��Ѵ�.
//		cout << "sid : " << current->number << "name : " << current->name << "height : " << current->height << endl;
//		// "sid : ", current->number)�� ��(current �ּҿ� �ִ� number�� ��, "name : ", current->name�� ��, "height : ", current->height�� ���� ����ϰ� ���� �ѱ��.
//		current = current->next; // current�� current->next(current �ּҿ� �ִ� next)�� �����Ѵ�.
//	}
//	return 0;
//}
