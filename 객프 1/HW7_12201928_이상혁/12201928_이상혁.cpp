#include<iostream>
#include<time.h>
#include<iomanip>
using namespace std;

void fill(int arr[][20]);
void show(int arr[][20]);
void row_sum(int arr[][20]);
void col_sum(int arr[][20]);
void diagonal_sum(int arr[][20]);
void back_diagonal_sum(int arr[][20]);
void row_max(int arr[][20]);
void col_max(int arr[][20]);
void max_row(int arr[][20]);
void max_col(int arr[][20]);


int main() {
	int arr[20][20];
	fill(arr);
	show(arr);
	row_sum(arr);
	col_sum(arr);
	diagonal_sum(arr);
	back_diagonal_sum(arr);
	row_max(arr);
	col_max(arr);
	max_row(arr);
	max_col(arr);
}

void fill(int arr[][20]) {
	srand((int)time(NULL));
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 20; j++) {
			arr[i][j] = rand() % 100;
		}
	}
}

void show(int arr[][20]) {
	cout << "-------------------------SHOW--------------------------------------------------------" << endl;
	cout << "   col";
	for (int i = 0; i < 20; i++)cout << setw(4) << i;
	cout << "\nrow" << endl;
	for (int i = 0; i < 20; i++) {
		cout << setw(4) << i << "  ";
		for (int j = 0; j < 20; j++) {
			cout << setw(4) << arr[i][j];
		}
		cout << endl;
	}
	cout << "-------------------------------------------------------------------------------------" << endl;
}

void row_sum(int arr[][20]) {
	int sum = 0;
	cout << "<row sum>" << endl;
	for (int i = 0; i < 20; i++) cout << setw(5) << i;
	cout << endl;
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 20; j++) {
			sum += arr[i][j];
		}
		cout << setw(5) << sum;
		sum = 0;
	}
	cout << "\n\n";
}

void col_sum(int arr[][20]) {
	int sum = 0;
	cout << "<col sum>" << endl;
	for (int i = 0; i < 20; i++) cout << setw(5) << i;
	cout << endl;
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 20; j++) {
			sum += arr[j][i];
		}
		cout << setw(5) << sum;
		sum = 0;
	}
	cout << "\n\n";
}

void diagonal_sum(int arr[][20]) {
	int sum = 0;
	for (int i = 0; i < 20; i++) sum += arr[i][i];
	cout << "<diagonal sum> :: " << sum << "\n\n";
}

void back_diagonal_sum(int arr[][20]) {
	int sum = 0;
	for (int i = 0; i < 20; i++) sum += arr[i][19 - i];
	cout << "<backward diagonal sum> :: " << sum << "\n\n";
}

void row_max(int arr[][20]) {
	int max;
	cout << "<row max>" << endl;
	for (int i = 0; i < 20; i++) cout << setw(5) << i;
	cout << endl;
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 20; j++) {
			if (j == 0) max = arr[i][j];
			else {
				if (arr[i][j] > max) max = arr[i][j];
			}
		}
		cout << setw(5) << max;
	}
	cout << "\n\n";
}

void col_max(int arr[][20]) {
	int max;
	cout << "<col max>" << endl;
	for (int i = 0; i < 20; i++) cout << setw(5) << i;
	cout << endl;
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 20; j++) {
			if (j == 0) max = arr[j][i];
			else {
				if (arr[j][i] > max) max = arr[j][i];
			}
		}
		cout << setw(5) << max;
	}
	cout << "\n\n";
}

void max_row(int arr[][20]) {
	int max(0);
	int location;
	int sum = 0;
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 20; j++) {
			sum += arr[i][j];
		}
		if (sum > max) {
			max = sum;
			location = i;
		}
		sum = 0;
	}
	cout << "max row [" << location << "] : " << max << endl;
}

void max_col(int arr[][20]) {
	int max(0);
	int location;
	int sum = 0;
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 20; j++) {
			sum += arr[j][i];
		}
		if (sum > max) {
			max = sum;
			location = i;
		}
		sum = 0;
	}
	cout << "max col [" << location << "] : " << max << endl;
}

