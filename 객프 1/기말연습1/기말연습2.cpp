#include<iostream>
using namespace std;

struct score {
	int num;
	char name[20];
	int Kor, Eng, Math;
};
int main() {
	int sum = 0, ave = 0;
	struct score a[4];
	FILE* ev = NULL;
	FILE* st = NULL;
	fopen_s(&st, "student002.txt", "r");
	fopen_s(&ev, "evaluation.txt", "w");
	for (int i = 0; i < 4; i++) {
		fscanf(st, "%d %s %d %d %d", &a[i].num, a[i].name, &a[i].Kor, &a[i].Eng, &a[i].Math);
		ave = (a[i].Kor + a[i].Eng + a[i].Math) / 3;
		fprintf(ev, "%d %d\n", a[i].num, ave);
	}
	fclose(st);
	fclose(ev);
	fopen_s(&ev, "evaluation.txt", "r");
	for (int i = 0; i < 4; i++) {
		fscanf(ev, "%d %d", &a[i].num, ave);
		cout << i << " " << ave;
	}
	fclose(ev);
	return 0;`
}
