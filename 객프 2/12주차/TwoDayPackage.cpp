#include <iostream> 
using namespace std; 

#include "TwoDayPackage.h" // ������� include

TwoDayPackage::TwoDayPackage(const string& S_N, const string& S_A, const string& S_C,
	const string& S_S, const int S_Z, // Ŭ������ ������.
	const string& R_N, const string& R_A, const string& R_C,
	const string& R_S, const int R_Z, // �����»��, �޴� ����� �ּ� �̸� ��
	double we, double co, // ��ȭ���� ���Կ� ���Դ簡��,
	double flatfee) // Twoday�� ��޼��񽺿����� ��ݰ��  
	:Package(S_N, S_A, S_C, S_S, S_Z, R_N, R_A, R_C, R_S, R_Z, we, co)
{	// ����� class�� �Ű������� �־���
	setFlatFee(flatfee);
}

void TwoDayPackage::setFlatFee(double flat_fee) { // Flat_Fee_PerOunce������ set�Լ�
	Flat_Fee = flat_fee;
}
double TwoDayPackage::getFlatFee() const { // Flat_Fee_PerOunce������ get�Լ�
	return Flat_Fee;
}

double TwoDayPackage::Calculate_Cost() const { // Two_day-delivery service�� ���� ����� ����ϴ� �Լ�.
	return General_Calculate_Cost() + getFlatFee(); // �⺻���� ��ݿ� Flat_fee�� ���Ͽ� ��ȯ�ϴ� �Լ�.
}
