#include <stdio.h>
using namespace std;

typedef struct {
	char name[20];
	int id;
	char sex;
	int kor, eng, math;
}student;

void main() {
	student std[5];
	int i;
	printf("enter name, id, sex, kor, eng, math for 5 students\n");
	for (i = 0; i < 5; i++) {
		printf("student %d: ", i);
		scanf("%s %d %c %d %d %d", &std[i].name, &std[i].id, &std[i].sex, &std[i].kor, &std[i].eng, &std[i].math);
	}
	printf("now displaying the students \n");
	for (i = 0; i < 5; i++) {
		printf("student %d\n", i);
		printf("name: %s student ID: %d sex: %c\n", std[i].name, std[i].id, std[i].sex);
		printf("kor score: %d eng score: %d math socre:%d \n", std[i].kor, std[i].eng, std[i].math);
	}
}

