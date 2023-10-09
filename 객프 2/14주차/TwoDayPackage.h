#pragma once // ��ó����

#include <string> // ������� string
using namespace std; // std ����

#include "Package.h" // ������Ʈ ���� Package ������� �߰� (

class TwoDayPackage :public Package { // Package Ŭ������ ����� Ŭ���� ����
public:
	TwoDayPackage(const string&, const string&, const string&, const string&, const int, const string&, const string&, 
		const string&, const string&, const int, double, double, double); // Ŭ������ ������
	// �̸��� �ּ� �� �� zipcode�� ������ ������ ���, �޴»�� ���� �ްԵȴ�. ���Կ� ���ݵ� ���� �޴´�. Package�� ����������
	// Two-delivery�� ���� ��ݵ� ���� �ް� �ȴ�.

	void setFlatFee(double); // Flat_Feee���� -> set�Լ��� get�Լ�
	double getFlatFee() const;

	virtual double calculateCost() const; // virtual�� ����Ͽ���. ���� �����ߴ� ���Դ��� ���ݿ��� �����ڸ� ���� ����
	// �Ű������� Two-delivery�� ���� ����� ���Ͽ� ����Ѵ�.

private:
	double Flat_Fee;
	// double�� ����Ͽ���. �߰� ����� ���� �� �ִ� ������.
};