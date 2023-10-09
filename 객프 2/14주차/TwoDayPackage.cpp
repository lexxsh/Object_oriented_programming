#include <iostream> // ������� iostream ����
using namespace std; // std ����

#include "TwoDayPackage.h" // ������� TwoDayPackage ����

TwoDayPackage::TwoDayPackage(const string& S_N, const string& S_A, const string& S_C,
	const string& S_S, const int S_Z, const string& R_N, const string& R_A, const string& R_C, const string& R_S, const int R_Z,
	double w, double c, double flatfee) :Package(S_N, S_A, S_C, S_S, S_Z, R_N, R_A, R_C, R_S, R_Z, w, c)
	// �̸��� �ּ� �� �� zipcode�� ������ ������ ���, �޴»�� ���� �ްԵȴ�. ���Կ� ���ݵ� ���� �޴´�. Package�� ����������
	// Two-delivery�� ���� ��ݵ� ���� �ް� �ȴ�. �̸� ��Ӱ����� Package Ŭ������ �Ű������� �̿��Ͽ� ������ �ȴ�.
{
	setFlatFee(flatfee);
}

void TwoDayPackage::setFlatFee(double flat_fee) { // Flat_Fee_PerOunce������ set�Լ�
	Flat_Fee = flat_fee;
}
double TwoDayPackage::getFlatFee() const { // Flat_Fee_PerOunce������ get�Լ�
	return Flat_Fee;
}

double TwoDayPackage::calculateCost() const { // Two_day-delivery service�� ��� ��� �Լ�..
	return Package::calculateCost() + getFlatFee(); // calculateCost�� Two_delivery�� ���� ����� ���� return �Ѵ�.
}
