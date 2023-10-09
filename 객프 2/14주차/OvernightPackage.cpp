#include <iostream> // ������� iostream ����	
using namespace std; // std ����

#include "OvernightPackage.h" // ������� OvernightPackage ����

OvernightPackage::OvernightPackage(const string& S_N, const string& S_A, const string& S_C, const string& S_S, const int S_Z,
	const string& R_N, const string& R_A, const string& R_C, const string& R_S, const int R_Z, double we, double co, double over_night_fee_peronce) 
	:Package(S_N, S_A, S_C, S_S, S_Z, R_N, R_A, R_C, R_S, R_Z, we, co)
{   // �̸��� �ּ� �� �� zipcode�� ������ ������ ���, �޴»�� ���� �ްԵȴ�. ���Կ� ���ݵ� ���� �ް� overnightpackage�� ��ݵ� �߰��� �޴´�.
	// �� ���Ŀ� ��Ӱ����� Package Ŭ������ ������ �ȴ�.
	setOvernightFeePerounce(over_night_fee_peronce);
	// overnightpacakge �� �߰������ set�Լ��� ����Ͽ� ������ �����Ѵ�.
}

void OvernightPackage::setOvernightFeePerounce(double overnight_fee) { // Overnight_Fee_PerOunce������ ���� set�Լ�
	Overnight_Fee_PerOunce = overnight_fee;
}
double OvernightPackage::getOvernightFeePerounce() const { // Overnight_Fee_PerOunce������ ���� get�Լ�
	return Overnight_Fee_PerOunce;
}
double OvernightPackage::calculateCost() const {
	return Package::calculateCost() + (getweight() * getOvernightFeePerounce());
} // �⺻���� ��ݿ� overnight - delivery service�� ���� �߰������ ��� �� ���Ͽ� �� ���� ��ȯ�ϴ� �Լ�.