#pragma once		//������� 
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

using namespace std;

class Employee		//Employee Ŭ���� ����
{					//�־��� UML���̾�׷��� ���� �ۼ��Ͽ���.
public:				//��� �Լ� ���� ��Ʈ
	Employee(string f, string l, int s); //Ŭ���� ������ 
	void setFirstName(string f);		//ù��° �̸��� �޴� set�Լ�(string�� �Ű������� �޴´�)
	string getFirstName();				//ù��° �̸��� ��ȯ�ϴ� get�Լ�
	void setLastName(string l);			//������ �̸��� �޴� set�Լ�(string�� �޴´�)
	string getLastName();				//������ �̸��� ��ȯ�ϴ� get�Լ�
	void setMonthlySalary(int s);		//�̹��޿����� �޴� set�Լ�(int�� �޴´�)
	int getMonthlySalary();				//�̹��޿����� ��ȯ�ϴ� get�Լ�
private:
	string FirstName;	//ù��° �̸� �������
	string lastName;	//������ �̸� �������
	int monthlySalary;	//�̹��� ���� �������
};
#endif // !EMPLOYEE_H