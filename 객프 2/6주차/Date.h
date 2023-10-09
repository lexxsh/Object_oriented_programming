#pragma once
#ifndef DATE_H
#define DATE_H

class Date {
public:
	Date(); // �Ű������� ���� ������, �ý����� ����ð��� �ҷ��� �� month, day, year�� ����.
	Date(int, int); // int�� �Ű������� 2���� ������, ddd,yyyy ���·� �޴´�.
	Date(int, int, int); // int�� �Ű������� 3���� ������, dd,mm,yyyy ���·� �޴´�.
	Date(string, int, int); // string�� �Ű����� 1���� int�� �Ű����� 2���� ���� ������. Month,dd,yyyy���·� �޴´�.

	void print() const; // month / day / year ���·� ����ϴ� �Լ�.
	void printDDDYYYY() const; // DDD / year���·� ����ϴ� �Լ�.
	void printMMDDYY() const; // MM / DD / YY ���·� ����ϴ� �Լ�.
	void printMonthDDYYYY() const; // Month(string) / DD / YYYY ���·� ����ϴ� �Լ�.

private:
	int month; // �� Ŭ�������� '��'�� ����ϴ� int�ڷ��� ����.
	int day; // �� Ŭ�������� '��'�� ����ϴ� int�ڷ��� ����.
	int year; // �� Ŭ�������� '�⵵'�� ����ϴ� int�ڷ��� ����.

	int checkDay(int) const; // ��¥�� ��/�⵵�� ������� ��, �ùٸ��� �ԷµȰ����� �Ǵ��ϴ� �Լ�.
	int daysInMonth(int) const; // �� checkDay���� ���δ�. '��'�� �Է����� �� �̿� �ش��ϴ� ���ڸ� return ���ִ� �Լ��̴�.
	bool isLeapYear() const; // �� daysInMonth���� ���δ�. �� Ŭ������ �ԷµǾ��ִ� �⵵�� �������� �Ǵ��ϴ� �Լ��̴�. return �ڷ����� bool�̴�.
	int convertDDToDDD() const; // DD���¸� DDD���·� �ٲ��־� int�ڷ������� return �ϴ� �Լ��̴�. �̴� printDDDYYYY���� ���δ�.
	void setMMDDFromDDD(int); // DDD���¸� MMDD���·� �ٲپ� �����ϴ� �Լ��̴�. �����ڸ� Date(ddd,yyyy)�� �޾��� ���� ���δ�.
	string convertMMToMonth(int) const; // MM���¸� Month(string) �� �ٲپ� string �ڷ������� return ���ִ� �Լ��̴�. �̴� printMonthDDYYYY���� ���δ�. 
	void setMMFromMonth(string); // Month���¸� MM���·� �ٲپ� �����ϴ� �Լ��̴�. �����ڸ� Date(Month,dd,yyyy)�� �޾��� ���� ���δ�.
	int convertYYYYToYY() const; // YYYY���¸� YY�� �ٲپ� int�ڷ������� return �ϴ� �Լ��̴�. �̴� printMMDDYY���� ���δ�. 
	void setYYYYFromYY(int); // YY���¸� YYYY���·� �ٲپ� ������ ���� ���δ�. �ƹ��������� ������ �ʴ´�. (������ �߰������� ���ڴ�.)
};

#endif
