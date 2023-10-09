#pragma once
#pragma once
#ifndef OVERNIGHTPACKAGE_H // ���� ��ó����
#define OVERNIGHTPACKAGE_H

#include <string>
using namespace std; 

#include "Package.h" // ������� include

class OvernightPackage :public Package { // Package�ʹ� ��Ӱ����� class ����
public:
	OvernightPackage(const string&, const string&, const string&, const string&, const int,
		const string&, const string&, const string&, const string&, const int,
		double, double, // class OvernightPackage�� ������, ������ ���� ������ �Ű������� �ް� �ȴ�.
		double); 

	void setOvernightFeePerounce(double); // Overnight_Fee_PerOunce������ set�Լ�
	double getOvernightFeePerounce() const;// Overnight_Fee_PerOunce������ get�Լ�

	double Calculate_Cost() const; // ���Կ� ���Դ簡���� ����� �⺻���� ��ݿ�
	// overnight - delivery service�� ���� �߰������ ��� �� ���Ͽ� �� ���� ��ȯ�ϴ� �Լ�.

private:
	double Overnight_Fee_PerOunce;
	// overnight�� ���Դ� �߰������ �ִ� ����
};

#endif // !OVERNIGHTPACKAGE_H
