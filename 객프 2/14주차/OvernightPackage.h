#pragma once // ��ó���⹮

#include <string> // ������� string�� �߰�
using namespace std; // std ����.

#include "Package.h" // ����� ���� Package ��������� �߰��Ͽ���.

class OvernightPackage :public Package { //Package�� ��Ӱ����� Ŭ���� OvernightPackage ����
public:
	OvernightPackage(const string&, const string&, const string&, const string&, const int, const string&, const string&,
		const string&, const string&, const int, double, double, double); //�ռ� ������ Package ��������� ��������
	 //�̸��� �ּ� �� �� zipcode�� ������ ������ ���, �޴»�� ���� �ްԵȴ�. ���Կ� ���ݵ� ���� �ް� overnightpackage�� ��ݵ� �߰��� �޴´�.

	void setOvernightFeePerounce(double); // Overnight_Fee_PerOunce���� -> set �Լ��� get �Լ�
	double getOvernightFeePerounce() const;

	virtual double calculateCost() const; // virtual�� ����Ͽ���. ����, ���Դ��� ���ݿ� ���� ���� overnight�� ���õ� ����� �߰��ϰ� ����ϴ� �Լ�

private:
	double Overnight_Fee_PerOunce;
	// double�� ����Ͽ���. overnight_pacakage�� ���� ���Դ� ������ �����ϴ� ���������.
};