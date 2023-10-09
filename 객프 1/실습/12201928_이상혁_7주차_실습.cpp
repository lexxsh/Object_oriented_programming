#include<iostream>
#include<iomanip>

using namespace std;

/*int main() {
	int grade[10];
	int i;
	for (i = 0; i < 10; i++) grade[i] = 0;
	cout << "=====================\n";
	cout << " INDEX VALUE \n";
	cout << "=====================\n";
	for (i = 0; i < 10; i++) cout << setw(5) << i << setw(5) << grade[i] << endl;
	return 0;
}

int main(){
	int grade[10] = {31,63,62,87,14,25,92,70,75,53};
	int i;
	cout << "=====================\n";
	cout << " INDEX VALUE \n";
	cout << "=====================\n";
	for (i = 0; i < 10; i++) cout << setw(5) << i << setw(5) << grade[i] << endl;
	return 0;
} 

constexpr int STUDENTS = 5;
int main() {
	int grade[STUDENTS];
	int sum = 0;
	for (int i = 0; i < STUDENTS; i++) {
		cout <<i+ 1<<"번째 학생 점수 입력 : ";
		cin >> grade[i];
		sum += grade[i];
	}
	(double)average = (double)sum / STUDENTS;
	cout << "average score = " << average << "\n";
	return 0;
} 

constexpr int SIZE = 5;
int main() {
	int array[SIZE] = { 1,2,3,4,5 };
	int i;
	for (i = 0; i <= SIZE; i++) cout << "array[" << i << "]  " << array[i] << endl;
	return 0;
} 

constexpr int SIZE = 5;
int main() {
	int a[SIZE] = { 1,2,3,4,5 };
	int b[SIZE];
	cout<<"a 배열 값 출력"<<endl;
	for (int i = 0; i < SIZE; i++)
		cout << "a[" << i << "]" << a[i] << endl;
	cout << "b 배열 값 출력" << endl;
	for (int i = 0; i < SIZE; i++)
		cout << "b[" << i << "]" << b[i] << endl;
	for (int i = 0; i < SIZE; i++) b[i] = a[i];
	cout << "c 배열 값 출력" << endl;
	for (int i = 0; i < SIZE; i++)
		cout << "a[" << i << "]" << a[i] << endl;
	cout << "d 배열 값 출력" << endl;
	for (int i = 0; i < SIZE; i++)
		cout << "b[" << i << "]" << b[i] << endl;
	return 0; 
} 

constexpr int SIZE = 5;
int main() {
	int a[SIZE] = { 1,2,3,4,5 };
	int b[SIZE] = { 1,2,3,4,5 };
	int comepare = 0;
	if (a == b) cout << "a와 b가 같다.\n";
	else cout << "wrong results.\n";
	cout << a << endl;
	cout << b << endl;
	for (int i = 0; i < SIZE; i++) {
		if (a[i] != b[i]) {
			cout << "a[] != b[]\n";
			comepare = 1;
			break;
		}
	}
	if(comepare != 1) cout << "a[]=b[]\n";
	return 0;
} 


int main() {
	int grade[] = { 1,2,3,4,5,6 };
	int size;
	size = sizeof(grade) / sizeof(grade[0]);
	cout << sizeof(grade) << endl << sizeof(grade[0]) << endl;
	for (int i = 0; i < size; i++) cout << grade[i];
	cout << endl;
	cout << "배열의 값 개수: " << size << endl;
	return 0;
}


constexpr int SIZE = 10;
int main() {
	int grade[SIZE];
	int min;
	for (int i = 0; i < SIZE; i++) {
		cout << "enter the scores : ";
		cin >> grade[i];
	}
	min = grade[0];
	for (int i = 1; SIZE; i++) {
		if (grade[i] < min) min = grade[i];
	}
	cout << "minimum value is " << min << endl;
	return 0;
} 
	

constexpr int SIZE = 7;
void square_array(int a[], int size);
void print_array(int a[], int size);
void square_element(int e);

int main() {
	int list[SIZE] = { 1,2,3,4,5,6,7 };
	print_array(list, SIZE);
	square_array(list, SIZE);
	print_array(list, SIZE);

	cout << setw(3) << list[6] << endl;
	square_element(list[6]);
	cout << setw(3) << list[6] << endl;
	return 0;
}
void square_array(int a[], int size) {
	for (int i = 0; i < size; i++) a[i] = a[i] * a[i];
}
void square_element(int e) {
	e = e * e;
	cout << "square_el : " << e;
}
void print_array(int a[], int size) {
	for (int i = 0; i < size; i++)cout << setw(3) << a[i];
	cout << endl;
}
*/



