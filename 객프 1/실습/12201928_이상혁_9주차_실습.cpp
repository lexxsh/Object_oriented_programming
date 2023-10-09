#include<iostream>
#include<iomanip>
using namespace std;

int main() {     //ex1
	int s[3][5];
	int i, j;
	int value = 0;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 5; j++) s[i][j] = value++;
	}
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 5; j++) cout << setw(3) << s[i][j];
		cout << endl;
	}
	return 0;
}

int main() {     //ex2
	int s[6][3][5] = { 0 };
	int i = 1;
	int value = 0;
	for (int z= 0; i < 5; i++) {
		for (int y = 0; y < 2; j++) {
			for (int x = 0; x < 4; x++) {
				s[z][y][z] = i++;
				cout << setw(2) << s[z][y][z] << " ";
			}
			cout << endl;
		}cout << endl;
	}
	return 0;
}



#include <iostream>  //ex3

const int SIZE =  5;

int main(void)
{
	int data[SIZE];
	int i;
	for (i = 0; i < SIZE; i++)
	{
		cout << "정수를 입력하시오.";
		cin >> data[i];
	}
	for (i = SIZE - 1; i >= 0, i--) cout << data[i];
	return 0;
}

#include<iostream>    //ex4
const int SIZE=  6;
int main() {
	int freq[SIZE] = { 0 };
	int i;
	srand((unsigned)time(NULL));
	for (i = 0; i < 10000; i++) ++freq[rand() % 6];
	cout << "================================" << endl;
	cout << " 면    빈도" << endl;
	cout << "================================" << endl;
	for (i = 0; i < SIZE; i++) cout << " " << setw(3) << i + 1 << "    "
		<< setw(3) << freq[i] << endl;
	return 0;
}

#include<iostream>
const int SIZE = 10;
void selection_sort(int list[], int n);
void printf_list(int list[], int n);

int main(){
	int grade[SIZE] = {3,2,9,7,1,4,8,0,6,5};
	cout << "원래의 배열" << endl;
	printf_list(grade, SIZE);
	selection_sort(grade, SIZE);
	cout << "정렬된 배열" << endl;
	printf_list(grade, SIZE);
	return 0;
}
void printf_list(int list[], int n) {
	int i;
	for (i = 0; i < n; i++) cout << list[i];
	cout << endl;
}

void selection_sort(int list[], int n) {
	int i, j, temp, least;
	for (i = 0; i < n - 1; i++) {
		least = i;
		for (j = i + 1; j < n; j++)
			if (list[j] < list[least]) least = j;
		temp = list[i];
		list[i] = list[least];
		list[least] = temp;
	}
}
 
#include<iostream>   //ex 17
const int SIZE = 9;
int seq_search(int list[], int n, int key);
int main() {
	int key;
	int grad[SIZE] = { 1,2,3,4,5,6,7,8,9 };
	cout << "탐색할 값을 입력하시오 : ";
	cin >> key;
	cout << "탐색 결과 = " << seq_search(grad, SIZE, key) << endl;
	return 0;
}

int seq_search(int list[], int n, int key) {
	int i;
	for (i = 0; i < n; i++)
		if (list[i] == key) return i;
	return -1;
}

#include<iostream> //ex18
const int SIZE = 9;
int binary_search(int list[], int n, int key);
int main(){
	int key;
	int grade[SIZE] = { 1,2,3,4,5,6,7,8,9 };
	cout << "탐색할 값을 입력하시오 : ";
	cin >> key;
	cout << "탐색 결과 = " << binary_search(grade, SIZE, key);
	return 0;
}
int binary_search(int lis[], int n, int key) {
	int low, high, middle;
	low = 0;
	high = n - 1;
	while (low <= high) {
		middle = (low + high) / 2;
		if (key == lis[middle]) return middle;
		else if (key > lis[middle]) low = middle + 1;
		else high = middle - 1;
	}
	return  -1;
}

#include<iostream>
const int rows = 3;
const int cols = 3;
int main(){
	int a[rows][cols] = { {2,3,0},{8,9,1},{7,0,5} };
	int b[rows][cols] = { {1,0,0},{1,0,0},{1,0,0} };
	int C[rows][cols];
	int r, c;
	for (r = 0; r < rows; r++)
		for (c = 0; c < cols; c++)
			C[r][c] = a[r][c] + b[r][c];
	for (r = 0; r < rows; r++) {
		for (c = 0; c < cols; c++) cout <<setw(2)<< C[r][c];
		cout << endl;
	}
	int d[rows][cols] = { 0 };
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < cols; j++) {
			C[i][j] = 0;
			for (int k = 0; k < rows; k++)
				C[i][j] += a[i][k] * b[k][j];
	for (r = 0; r < rows; r++) {
		for (c = 0; c < cols; c++)cout <<setw(2)<< d[r][c];
		cout << endl;
	}
	return 0;
}