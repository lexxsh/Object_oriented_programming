#include <iostream> 
using namespace std; 

#include "OvernightPackage.h" // ������� include

OvernightPackage::OvernightPackage(const string& S_N, const string& S_A, const string& S_C,
	const string& S_S, const int S_Z, // class ������
	const string& R_N, const string& R_A, const string& R_C,
	const string& R_S, const int R_Z, // �����»���� �޴»���� ������
	double we, double co, // ����, ���԰���
	double over_night_fee_peronce) //  �߰������ �Ű������� ����.
	:Package(S_N, S_A, S_C, S_S, S_Z, R_N, R_A, R_C, R_S, R_Z, we, co)
{	// ��Ӱ��踦 ������ PackageŬ������ �Ű��������� �־���.
	setOvernightFeePerounce(over_night_fee_peronce);
}

void OvernightPackage::setOvernightFeePerounce(double overnight_fee) { // Overnight_Fee_PerOunce������ set�Լ�
	Overnight_Fee_PerOunce = overnight_fee;
}
double OvernightPackage::getOvernightFeePerounce() const { // Overnight_Fee_PerOunce������ get�Լ�
	return Overnight_Fee_PerOunce;
}
double OvernightPackage::Calculate_Cost() const {
	return General_Calculate_Cost() + (getweight() * getOvernightFeePerounce());
} // �⺻���� ��ݿ� overnight - delivery service�� ���� �߰������ ��� �� ���Ͽ� �� ���� ��ȯ�ϴ� �Լ�.