#include<iostream>
#include"Time.h"
using namespace std; 
int main() {
	Time ex1(23, 59, 50); //time Ŭ������ ex1��ü ����
	for (int i = 0; i < 100; i++) { //�ð��� ��Ȱ�ϰ� ��µǴ����� Ȯ���ϱ����� �ݺ���
		ex1.printfStandard(); //�ð��� ��½�Ų��.
		ex1.tick(); //�ð��� ������Ų��.
	}
}
