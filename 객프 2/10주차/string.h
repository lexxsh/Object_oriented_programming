#pragma once
#include <iostream>
#include <string>
using namespace std;

#ifndef STRING_H // ��ó����
#define STRING_H

class String { // Ŭ���� string ����
	friend ostream& operator<<(ostream& output, const String& s); // << �����ڸ� ����� �����ε� friend�� ����Ѵ�.

public:
	String(); // Ŭ������ ������
	String(const char*); // char*�� �Ű������� ������ ������
	String(const String&); // Ŭ���� ��ü�� �Ű������� ������ ������

	String operator=(const String&); // =������ �����ε� string ��ü�� �Ű������� ���Ѵ�.. 
	String operator+(const String&); // +������ �����ε� string ��ü�� �Ű������� ���Ѵ�.. 

private:
	char* ft; // �����Ҵ��� ����ϴ� ������ �������
	int row; // ���ڿ��� ���̸� ������ ��� ����.
};

#endif#pragma once
