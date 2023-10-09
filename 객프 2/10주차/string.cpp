#include <iostream>
#include <string>
using namespace std;

#include "string.h" // ������� include

String::String() // string Ŭ������ �⺻ �����ڴ�
	: row(0) //���� row������ �ƹ��͵� ������ �ʾ������ 0�� �����Ѵ�. 
{
	this->ft = NULL; // ���� �����Ϳ��� this�� ����Ͽ� NULL�� �Ҵ�.
}

String::String(const char* st) { // st���ڿ��� �Ű������� ���ϴ� ������
	this->row = (strlen(st) + 1); // �Է¹��� ���ڿ����� 1�� ũ���� row������ �������ش�.
	this->ft = new char[this->row]; // row�� ���� �����Ҵ�
	strcpy(this->ft, st); // ft�� �Ҵ�Ȱ��� st���ڿ��� ����
}

String::String(const String& ptr) { //Ŭ���� ��ü�� �Ű������� ���ϴ� ������
	this->row = ptr.row; // �Ű������� ���� ��ä�� row�� row������ �Ҵ��Ѵ�.
	this->ft = new char[this->row]; // row��ŭ ft�� �����Ҵ� 
	strcpy(this->ft, ptr.ft); // ft�� �����Ҵ��� ������ Ŭ������ü�� ���� ������ �������ش�.
}

String String::operator=(const String& right) { // �ش� Ŭ������ ��ü�� �Ű������� ������ = ������ �����ε��̴�. 
	delete[] this->ft; // ft�� �Ҵ�� �޸� ����
	this->row = right.row; // �Ű����� �� ��ü�� len���� len�� �����Ѵ�.
	this->ft = new char[this->row]; //row�� ��ŭ ft�� �����Ҵ�
	strcpy(this->ft, right.ft); // ft�� �����Ҵ��� ������ Ŭ������ü�� ���� ������ �������ش�.

	return *this; // �ش� ��ü�� return�Ѵ�.
}

String String::operator+(const String& right) { // �ش� Ŭ������ ��ü�� �Ű������� ������ + ������ �����ε��̴�. 
	char* new_str = new char[this->row + right.row]; // ��ü���� row������ �� �� ���� �����Ҵ����ش�.
	strcpy(new_str, this->ft); // �ش� ��ü�� ���ڿ� ������ new_str�� �־��ش�.
	strcat(new_str, " "); // �� ���ڿ��� �������� �� �߰��� ������ �ֵ��� �Ͽ���.
	strcat(new_str, right.ft); // �Ű����� ��ü�� ���ڿ� ������ new_str�� �߰�(cat)���ش�.

	String new_st(new_str); // new_str�� ��������ڿ� �־� new_st��ü�� ������ش�. (return�� ����)
	delete[] new_str; // �� �Լ� ������ �����Ҵ� ����� new_str�� �Ҵ�� �޸𸮸� ��ü�Ѵ�.
	return new_st; // ���� �Ϸ�� new_st ��ü�� return�Ѵ�.
}

ostream& operator<<(ostream& output, const String& s) { // �� Ŭ�������� ����� << ������ �����ε��̴�.
	output << s.ft;
	return output;
}
