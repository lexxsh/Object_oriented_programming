#pragma once
#pragma once
#ifndef TWODAYPACKAGE_H // ���� ��ó����
#define TWODAYPACKAGE_H

#include <string> 
using namespace std; 

#include "Package.h" // ������� include

class TwoDayPackage :public Package { // Ŭ���� TwoDayPackage  Ŭ���� Package�� ��� �����̴�.
public:
	TwoDayPackage(const string&, const string&, const string&, const string&, const int,
		const string&, const string&, const string&, const string&, const int,
		double, double, // Ŭ���� ������
		double); //������ ���� ������ �Ű������� �ް� �ȴ�.

	void setFlatFee(double); // Flat_Feee���� set�Լ�
	double getFlatFee() const; // Flat_Fee���� get�Լ�

	double Calculate_Cost() const; // ���Կ� ���Դ簡�ݿ� Two_day-delivery service�� ���� �߰������ ���� �� �� ���� ��ȯ�ϴ� �Լ�.

private:
	double Flat_Fee;
	// double �ڷ���, �߰������ ����ϴ� ��� ����
};

#endif // !TWODAYPACKAGE_H