#include<iostream>
using namespace std;

int main() {
	int a[] = { 10,20,30,40,50 };
	cout << "&a[0] = " << &a[0] << endl;
	cout << "&a[1] = " << &a[1] << endl;
	cout << "&a[2] = " << &a[2] << endl;
	cout << "a = " << a << endl;

	return 0;
}

#include<iostream>
int main() {
	int a[] = { 10,20,30,40,50 };
	cout << "a = " << a<< endl;
	cout << "&a[1] = " << &a[1] << endl;
	cout << "a+1 = " << a+1<< endl;
	cout << "*a = " << *a << endl;
	cout << "*(a+1) = " << *(a + 1) << endl;
	return 0;
}

int main() {
	int a[] = { 10,20,30,40,50 };
	int* p;
	p = a;
	cout << "a[0] = " << a[0] << "a[1] = " << a[1] << "a[1] = " << a[2] << endl;
	cout << "p[0] = " << p[0] << "a[1] = " << p[1] << "a[1] = " << p[2] << endl;
	p[0] = 60;
	p[1] = 70;
	p[2] = 80;
	cout << "a[0] = " << a[0] << "a[1] = " << a[1] << "a[1] = " << a[2] << endl;
	cout << "p[0] = " << p[0] << "a[1] = " << p[1] << "a[1] = " << p[2] << endl;
	return 0;
}

void sub(int* p);
int main() {
	int i = 100;
	sub(&i);
	return 0;
}
void sub(int* p) {
	*p = 200;
}

void swap(int x, int y);   
int main() {
	int a = 100, b = 200;
	cout << "main() a  = " << a << "main() b  = " << b;
	swap(a, b);
	cout << "main() a  = " << a << "main() b  = " << b;
	return 0;
}   

void swap(Int*, int*);
int main() {
	int a = 100, b = 200;
	cout<<"main() a  = " << a << "main() b  = " << b;
	swap(&a, &b);
	cout << "main() a  = " << a << "main() b  = " << b;
	return 0;
}
void swap(int* px, int* py) {
	int tmp;
	cout << "swap() *px =" << *px << "swap() *py =" << *py << endl;
	tmp = *px;
	*px = *py;
	*py = tmp;
	cout << "swap() *px =" << *px << "swap() *py =" << *py << endl;
}  

void addmult(int a, int b, int* sum, int* mult) {
	*sum = a + b;
	*mult = a * b;
}
int main() {
	int x = 10;
	int y = 20;
	int s;
	int m;
	addmult(x, y, &s, &m);
	cout << "sum : " << s << "mult : " << m;
}   

struct student {
	int number;
	char name[20];
	double height;
};
int main() {
	struct student s = { 20070001,"홍길 동 ",180.2 };
	struct student* p;
	p = &s;
	cout << "학번 = " << s.number << "이름 = " << s.name << "키 = " << s.height;
	cout << "학번 = " << (*p).number << "이름 = " << (*p).name << "키 = " << (*p).height;
	cout << "학번 = " << p->number << "이름 = " << p->name << "키 = " << p->height;
	return 0;
}


struct date {
	int month;
	int day;
	int year;
};

struct student { 
	int number;
	char name[20];
	double height;
	struct date* dob;
};
int main(void) {
	struct date d = { 3,20,1980 }; 
	struct student s = { 20070001,"KIM", 180.2 };

	s.dob = &d;

	cout << "SID : " << s.number << endl;
	cout << "Name : " << s.name << endl;
	cout << "Height : " << s.height << endl;
	cout << "Bday: " << s.dob->year << "." << s.dob->month << "." << s.dob->day << endl;
	return 0;
} 

struct student {
   int number;
   char name[10];
   double height;
   struct student* next;
};

int main(void) {
   struct student s1 = { 30, "Kim", 167.2, NULL };
   struct student s2 = { 31, "Park" , 179.1, NULL };
   struct student* first = NULL;
   struct student* current = NULL;

   first = &s1;
   s1.next = &s2;
   s2.next = NULL;

   current = first;
   while (current != NULL) {
      cout << "SID = " << current->number << " Name = " << current->name 
         << ", Height = " << current->height << endl;
      current = current->next;
   }
   return 0;
}



struct point {
   int x;
   int y;
};
int get_line_parameter(struct point p1, struct point p2, float* slope, float* yintercept) {
   if (p1.x == p2.x)
      return (-1);
   else {
      *slope = (float)(p2.y - p1.y) / (float)(p2.x - p1.x);
      *yintercept = p1.y - (*slope) * p1.x;
      return (0);
   }
}
int main(void) {
   struct point pt1 = { 3, 3 }, pt2 = { 6, 6 };
   float s, y;
   if (get_line_parameter(pt1, pt2, &s, &y) == -1)
      cout << "error: same x axis." << endl;
   else
      cout << "Gradient is " << s << ", y-intercept is " << y << endl;
   return 0;
}


