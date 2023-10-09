
#pragma once // ��ó���⹮
#include <string> // ������� string �߰�
using namespace std; // std ����

class Package { // Package Ŭ���� ����
public:
	Package(const string&, const string&, const string&, const string&, const int, const string&, const string&,
		const string&, const string&, const int, double, double); // �ռ� ������ Ŭ������ ������
	// �̸��� �ּ� �� �� zipcode�� ������ ������ ���, �޴»�� ���� �ްԵȴ�. ���Կ� ���ݵ� ���� �޴´�.

	void setSenderName(const string&); // Send_Name���� -> set�Լ��� get�Լ�
	string getSenderName() const;

	void setSenderAddress(const string&); // Send_Address���� -> set�Լ��� get�Լ�
	string getSenderAddress() const; 

	void setSenderCity(const string&); // Send_Address���� -> set�Լ��� get�Լ�
	string getSenderCity() const; 

	void setSenderState(const string&); // Send_State���� -> set�Լ��� get�Լ�
	string getSenderState()const; 

	void setSenderZIP(const int); // Send_Zipcode���� -> set�Լ��� get�Լ�
	int getSenderZIP() const; 

	void setRecipientName(const string&); // Receive_Name���� -> set�Լ��� get�Լ�
	string getRecipientName() const; 

	void setRecipientAddress(const string&); // Receive_Address���� -> set�Լ��� get�Լ�
	string getRecipientAddress() const;

	void setRecipientCity(const string&); // Receive_City���� -> set�Լ��� get�Լ�
	string getRecipientCity() const;

	void setRecipientState(const string&); // Receive_State���� -> set�Լ��� get�Լ�
	string getRecipientState() const;

	void setRecipientZIP(const int); // Receive_Zipcode���� -> set�Լ��� get�Լ�
	int getRecipientZIP() const;

	void setweight(double); // Weight���� -> set�Լ��� get�Լ�
	double getweight() const; 

	void setCost(double); // Cost���� -> set�Լ��� get�Լ�
	double getCost() const; 

	virtual double calculateCost() const; //virtual�� ������ ���Կ� ���� ������ ������ִ� �Լ���.

protected: // protected�� ����Ͽ���
	string Send_Name; // string �ڷ��� -> ������ ����� '�̸�'����
	string Send_Address; // string �ڷ��� -> ������ ����� '�ּ�'����
	string Send_City; // string �ڷ��� -> ������ ����� '��'����
	string Send_State; // string �ڷ��� -> ������ ����� '��'����
	int Send_Zipcode; // int �ڷ��� -> ������ ����� 'zipcode'����

	string Receive_Name; // string �ڷ��� -> �޴� ����� '�̸�'����
	string Receive_Address; // string �ڷ��� -> �޴� ����� '�ּ�'���� 
	string Receive_City; // string �ڷ��� -> �޴� ����� '��'����
	string Receive_State; // string �ڷ��� -> �޴� ����� '��'����
	int Receive_Zipcode; // int �ڷ��� -> �޴� ����� 'zipcode'����

	double Weight; // double�ڷ��� -> ��ȭ���� ���Ժ���
	double Cost; // double�ڷ��� -> ��� ��뺯��
};
