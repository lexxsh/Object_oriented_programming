#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	FILE* fp;
	fp = fopen("MultiTable.txt", "w");
	if (fp == NULL) {
		cout << "실패 - 종료 '\n";
		return 1;
	}
	int arr[11][11];
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (i == 0)arr[i][j] = j;
			else if (j == 0) arr[i][j] = i;
			else arr[i][j] = i * j;
			fputc(arr[i][j], fp);
			cout << setw(5) << arr[i][j];
		}
		cout << "\n";
	}
	fclose(fp);
}s