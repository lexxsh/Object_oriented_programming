
#include <iostream>
#include <string>
using namespace std;

#include"string.h" // string.h ������� include

int main() {
	String string1; //������ ��ü ���� ���� �����Ѵ�.
	String string2 = "happy"; // string2��ü�� =�� ����� happy�� �־��ش�.
	String string3 = "birth day";// string3��ü�� =�� ����� birth day �� �־��ش�.
	String string4 = "to you"; // string2��ü�� =�� ����� hto you�� �־��ش�.

	cout << "string2 = " << string2 << endl; // << �����ڸ� ���� ��ü�� ���ڿ����� ���
	cout << "string3 = " << string3 << endl; // << �����ڸ� ���� ��ü�� ���ڿ����� ���
	cout << "string1 = string2 + string3" << endl;
	cout << "----�����----" << endl; // ����� �ȳ�
	string1 = string2 + string3; // =, + �����ڸ� ���� �� ��ü�� ���ڿ� ������ ������ �� �����Ѵ�.
	cout << "string1 = " << string1 << endl << endl; // << �����ڸ� ���� ����� �����Ͽ����� ���

	cout << "string2 = " << string2 << endl; // << �����ڸ� ���� ��ü�� ���ڿ����� ���
	cout << "string3 = " << string3 << endl; // << �����ڸ� ���� ��ü�� ���ڿ����� ���
	cout << "string4 = " << string4 << endl; // << �����ڸ� ���� ��ü�� ���ڿ����� ���
	cout << "string1 = string2 + string3 + string4" << endl;
	cout << "----�����----" << endl; // ����� �ȳ�
	string1 = string2 + string3 + string4; // =, + �����ڸ� ���� �� ��ü�� ���ڿ� ������ ������ �� �����Ѵ�.
	cout << "string1 = " << string1 << endl; // << �����ڸ� ���� ����� �����Ͽ����� ���

	return 0;
}
