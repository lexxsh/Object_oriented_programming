#pragma once
#pragma once
#ifndef PACKAGE_H // ���� ��ó����
#define PACKAGE_H 

#include <string>
using namespace std; 

class Package { // Ŭ���� Package ����
public:
	Package(const string&, const string&, const string&, const string&, const int,
		const string&, const string&, const string&, const string&, const int,
		double, double); // class ������. ������ ���� ������ �Ű������� �ް� �ȴ�.

	void setSenderName(const string&); // Send_Name������ set�Լ��� get�Լ�
	string getSenderName() const;

	void setSenderAddress(const string&); // Send_Address������ set�Լ�
	string getSenderAddress() const; // Send_Name������ get�Լ�

	void setSenderCity(const string&); // Send_Address������ set�Լ�
	string getSenderCity() const; // Send_Address������ get�Լ�

	void setSenderState(const string&); // Send_State������ set�Լ�
	string getSenderState()const; // Send_State������ get�Լ�

	void setSenderZip(const int); // Send_Zipcode������ set�Լ�
	int getSenderZip() const; // Send_Zipcode������ get�Լ�

	void setRecipientName(const string&); // Receive_Name������ set�Լ�
	string getRecipientName() const; // Receive_Name������ get�Լ�

	void setRecipientAddress(const string&); // Receive_Address������ set�Լ�
	string getRecipientAddress() const; // Receive_Address������ get�Լ�

	void setRecipientCity(const string&); // Receive_City������ set�Լ�
	string getRecipientCity() const; // Receive_City������ get�Լ�

	void setRecipientState(const string&); // Receive_State������ set�Լ�
	string getRecipientState() const; // Receive_State������ get�Լ�

	void setRecipientZip(const int); // Receive_Zipcode������ set�Լ�
	int getRecipientZip() const; // Receive_Zipcode������ get�Լ�

	void setweight(double); // Weight������ set�Լ�
	double getweight() const; // Weight������ get�Լ�

	void setCost(double); // Cost������ set�Լ�
	double getCost() const; // Cost������ get�Լ�

	double General_Calculate_Cost() const; // ����, ������ ���Ͽ� ����� ����ϴ� �Լ�

protected: // protected�� ����
	string Send_Name; // ������ ����� �̸� ����
	string Send_Address; // ������ ��� �ּ� ����
	string Send_City; // ������ ��� �� ����
	string Send_State; // ������ ��� �� ����
	int Send_Zipcode; // ������ ��� zipcode ����

	string Receive_Name; // �޴� ��� �̸� ����
	string Receive_Address; // �޴� ��� �ּ� ����
	string Receive_City; // �޴� ��� �� ����
	string Receive_State; // �޴� ��� �� ����
	int Receive_Zipcode; // �޴� ��� zipcode ����

	double Weight; // ���Ը� ��� ����
	double Cost; // ��ۺ���� ��� ����
};

#endif // !PACKAGE_H
