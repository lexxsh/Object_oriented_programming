//// ex 1
//#include<iostream> 
//using namespace std; 
//
//int main() { 
//	int n = 10; 
//	int* m; 
//
//	m = &n; // m에 n의 주소를 대입한다.
//	cout << "address : " << m << ", value : " << *m << endl; // "address : "과 m의 값, ", value : "와 *m의 값(m 주소의 값)을 차례대로 출력하고 줄을 넘긴다.
//	n = 100; // n에 100을 대입한다.
//	cout << "address : " << m << ", value : " << *m << endl; // "address : "과 m의 값, ", value : "와 *m의 값(m 주소의 값)을 차례대로 출력하고 줄을 넘긴다.
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
//	char* pc = &c; // char의 포인터형 변수 pc를 만들고 c의 주소를 대입한다.
//	int* pi = &i; // int의 포인터형 변수 pi를 만들고 i의 주소를 대입한다. 
//	double* pd = &d; // double이 포인터형 변수 pd를 만들고 d의 주소를 대입한다.
//
//	(*pc)++; // *pc(pc 주소의 값)에 *pc + 1을 대입한다.
//	*pi = *pi + 1; // *pi(pi 주소의 값)에 *pi + 1을 대입한다.
//	*pd += 1; // *pd(pd 주소의 값)에 *pd + 1을 대입한다.
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
//	p = &i; // p에 i의 주소를 대입한다,
//	q = &i; // q에 i의 주소를 대입한다.
//	*p = *p + 1; // *p(p 주소의 값)에 *p + 1을 대입한다.
//	*q = *q + 1; // *q(q 주소의 값)에 *q+ 1을 대입한다.
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
//	double* pd; // double의 포인트형 변수 pd를 만든다.
//
//	pd = & i; // pd에 i의 주소를 대입한다. pd는 double의 포인터형 변수이고 i는 int형 변수이므로 오류가 나타난다.
//	*pd = 36.5; // *pd(pd 주소의 값)에 36.5를 대입한다.
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
//	cout << &a[0] << endl; // a[0]의 주소를 출력하고 줄을 넘긴다.
//	cout << &a[1] << endl; // a[1]의 주소를 출력하고 줄을 넘긴다.
//	cout << &a[2] << endl; // a[2]의 주소를 출력하고 줄을 넘긴다.
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
//	cout << "a = " << a << endl; // "a = "과 a의 값(&a[0])을 출력하고 줄을 넘긴다.
//	cout << "a + 1 = " << a + 1 << endl; // "a + 1 = "과 a + 1의 값(&a[1])을 출력하고 줄을 넘긴다.
//	cout << "a = " << *a << endl; // "a = "과 *a의 값(a[0]의 값)을 출력하고 줄을 넘긴다.
//	cout << "a + 1 = " << *(a + 1) << endl; // "a = "과 *(a + 1)의 값(a[1]의 값)을 출력하고 줄을 넘긴다.
//
//	return 0; 
//}

//// ex 7
//#include<iostream> 
//using namespace std; 
//
//int main() {
//	int a[] = { 10,20,30,40,50 }; // int형 배열 a[]를 만들고 { 10,20,30,40,50 }를 대입한다.
//	int* p; // int의 포인터형 변수 p를 만든다.
//	p = a; // p에 배열 a를 대입한다.
//
//	cout << "1 = " << a[0] << " 2 = " << a[1] << " 3 = " << a[2] << endl; //"1 = ", a[0]의 값, " 2 = ", a[1]의 값, " 3 = ", a[2]의 값을 차례대로 출력하고 줄을 넘긴다.
//	cout << "1 = " << p[0] << " 2 = " << p[1] << " 3 = " << p[2] << endl; //"1 = ", p[0]의 값, " 2 = ", p[1]의 값, " 3 = ", p[2]의 값을 차례대로 출력하고 줄을 넘긴다.
//
//	p[0] = 60; // p[0]에 60을 대입한다.
//	p[1] = 70; // p[1]에 70을 대입한다.
//	p[2] = 80; // p[2]에 80을 대입한다.
//
//	cout << "1 = " << a[0] << " 2 = " << a[1] << " 3 = " << a[2] << endl; //"1 = ", a[0]의 값, " 2 = ", a[1]의 값, " 3 = ", a[2]의 값을 차례대로 출력하고 줄을 넘긴다.
//	cout << "1 = " << p[0] << " 2 = " << p[1] << " 3 = " << p[2] << endl; //"1 = ", p[0]의 값, " 2 = ", p[1]의 값, " 3 = ", p[2]의 값을 차례대로 출력하고 줄을 넘긴다.
//
//	return 0;
//}

//// ex 8
//#include<iostream> 
//using namespace std; 
//
//void sub(int* p); // 함수 sub의 프로토 타입이다.
//
//int main() { 
//	int i = 100; 
//	sub(&i); // sub()함수에 인수로 &i(i의 주소)를 넣어 sub(&i)를 실행한다.
//	cout << i; // i의 값을 출력한다.
//	return 0; 
//}
//
//void sub(int* p) { // 아무런 값도 반환하지 않는 함수 sub를 만든다.
//	*p = 200; // *p(p 주소의 값)에 200을 대입한다.
//}

//// ex 9
//#include<iostream> 
//using namespace std; 
//
//void swap(int x, int y); 
//int main() {
//	int a = 100, b = 200; 
//	cout << "main() a = " << a << " b = " << b << endl; // "main() a = ", a의 값, " b = ", b의 값을 차례대로 출력하고 줄을 넘긴다.
//	swap(a, b); // 함수 swqp()에 인수로써 a,b를 넣어 swap(a, b)를 실행한다.
//	cout << "main() a = " << a << " b = " << b << endl; // "main() a = ", a의 값, " b = ", b의 값을 차례대로 출력하고 줄을 넘긴다.
//	return 0; 
//}

//void swap(int x, int y) { 
//	int tmp; 
//	cout << "swap() x = " << x << " y = " << y << endl; // "swap() x = ", x의 값, " y = ", y의 값을 출력하고 줄을 넘긴다.
//	tmp = x; // tmp에 x의 값을 대입한다.
//	x = y; // x에 y의 값을 대입한다.
//	y = tmp; // y에 tmp의 값을 대입한다.
//	cout << "swap() x = " << x << " y = " << y << endl; // "swap() x = ", x의 값, " y = ", y의 값을 출력하고 줄을 넘긴다.
//}

// ex 10
//#include<iostream> 
//using namespace std; 
//
//void swap(int*, int*); 
//int main() { 
//	int a = 100, b = 200;
//	cout << "main() a = " << a << " b = " << b << endl; // "main() a = ", a의 값, " b = ", b의 값을 차례대로 출력하고 줄을 넘긴다.
//	swap(&a, &b); // 함수 swqp()에 인수로써 &a(a의 주소),&b(b의 주소)를 넣어 swap(&a, &b)를 실행한다.
//	cout << "main() a = " << a << " b = " << b << endl; // "main() a = ", a의 값, " b = ", b의 값을 차례대로 출력하고 줄을 넘긴다.
//	return 0; 
//}
//
//void swap(int* px, int* py) { // 아무런 값도 반환하지 않는 함수 swap을 만든다.
//	int tmp; 
//	cout << "swap() *px = " << *px << " *py = " << *py << endl; // "swap() *px = ", *px의 값, " *py = ", *py의 값을 출력하고 줄을 넘긴다.
//	tmp = *px; // tmp에 *px의 값(px 주소의 값)을 대입한다.
//	*px = *py; // *px에 *py의 값(py 주소의 값)을 대입한다.
//	*py = tmp; // *py에 tmp의 값을 대입한다.
//	cout << "swap() *px = " << *px << " *py = " << *py << endl; // "swap() *px = ", *px의 값, " *py = ", *py의 값을 출력하고 줄을 넘긴다.
//}
//
// ex 11
//#include<iostream> 
//using namespace std; 
//
//void addmult(int a, int b, int* sum, int* mult) { // 아무런 값도 반환하지 않는 함수 addmult를 만든다.
//	*sum = a + b; // *sum(sum 주소의 값)에 a + b의 값을 대입한다.
//	*mult = a * b; // *mult(mult 주소의 값)에 a * b의 값을 대입한다.
//}
//
//int main() {
//	int x = 10; // int형 변수 x를 만들고 10을 대입한다.
//	int y = 20; // int형 변수 y를 만들고 20을 대입한다.
//	int s; // int형 변수 s를 만든다.
//	int m; // int형 변수 m을 만든다.
//
//	addmult(x, y, &s, &m); // 함수 addmult()에 x, y, &s(s의 주소), &m(m의 주소)을 인수로 넣어 addmult(x, y, &s, &m)를 실행한다.
//	cout << s << " " << m << endl; // s, " ", m을 출력하고 줄을 넘긴다.
//
//	return 0; 
//}

// ex 12 
// 포인터를 통한 구조체 참조
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
//	struct student* p; // struct student의 포인터형 변수 p를 만든다.
//	p = &s; // p에 &s(s의 주소)을 대입한다.
//	cout << "student id is: " << s.number << " name is:" << s.name << " height is: " << s.height << endl;
//	 "student id is: "와 s.number의 값, " name is:", s.name의 값, " height is: ",  s.height의 값을 출력하고 줄을 넘긴다.
//	cout << "student id is: " << (*p).number << " name is:" << (*p).name << " height is: " << (*p).height << endl;
//	 "student id is: ", (*p).number의 값(p 주소에 있는 number 값), " name is:",(*p).name의 값, " height is: ", (*p).height의 값을 출력하고 줄을 넘긴다.
//	cout << "student id is: " << p->number << " name is:" << p->name << " height is: " << p->height << endl;
//	 "student id is: ", p->.number(p 주소에 있는 number 값)의 값, " name is:", p->name의 값, " height is: ", p->height의 값을 출력하고 줄을 넘긴다.
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
//	struct date* dob; // struct date의 포인트형 변수 dob를 만든다.
//};
//
//int main() { 
//	struct date d = { 3,20,1980 }; // struct date형 변수 d를 만들고 { 3,20,1980 }를 대입한다.
//	struct student s = { 200700001,"hong",180.2 }; // struct student형 변수 s를 만들고 { 200700001,"hong",180.2 }를 대입한다.
//	s.dob = &d; // s.dob에 &d(d의 주소)을 대입한다.
//	cout << "sid : " << s.number << endl; // "sid : ", s.number의 값을 출력하고 줄을 넘긴다.
//	cout << "name : " << s.name << endl; // "name : ",  s.name의 값을 출력하고 줄을 넘긴다.
//	cout << "height : " << s.height << endl; // "height : ", s.height의 값을 출력하고 줄을 넘긴다.
//	cout << "bday : " << s.dob->year << ", " << s.dob->month << ", " << s.dob->day;
//	 "bday : ", s.dob->year의 값(s.dob 주소에 있는 year의 값), s.dob->month의 값, s.dob->day의 값을 출력한다.
//	return 0;
//}

// ex 14
//#include<iostream> 
//using namespace std; 

struct student { // student라는 struct를 만든다.
//	int number; // int형 변수 number을 만든다.
//	char name[20]; // char형 배열 name[20]을 만든다.
//	double height; // double형 변수 height를 만든다.
//	struct student* next; // struct student의 포인터형 변수 next를 만든다.
//};
//
//int main() { // 가장 먼저 컴파일 되고 실행되는 메인 함수이다.
//	struct student s1 = { 30,"kim",167.2 }; // struct student형 변수 s1을 만들고 { 30,"kim",167.2 }를 대입한다.
//	struct student s2 = { 31,"park",179.1,null }; // struct student형 변수 s1을 만들고 { 31,"park",179.1,null }를 대입한다.
//	struct student* first; // struct student의 포인터형 변수 first를 만든다.
//	struct student* current = null; // struct student의 포인터형 변수 current를 만들고 null을 대입한다.
//
//	first = &s1; // first에 s1의 주소를 대입한다.
//	s1.next = &s2; // s1.next에 s2의 주소를 대입한다.
//	s2.next = null; // s2.next에 null을 대입한다.
//	current = first; // current에 first를 대입한다.
//	while (current != null) { // current != null이 true일 경우 while이하를 반복한다.
//		cout << "sid : " << current->number << "name : " << current->name << "height : " << current->height << endl;
//		// "sid : ", current->number)의 값(current 주소에 있는 number의 값, "name : ", current->name의 값, "height : ", current->height의 값을 출력하고 줄을 넘긴다.
//		current = current->next; // current에 current->next(current 주소에 있는 next)을 대입한다.
//	}
//	return 0;
//}
