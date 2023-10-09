#include <iostream> // 헤더파일 iostream 포함
using namespace std; // std 생략

#include "TwoDayPackage.h" // 헤더파일 TwoDayPackage 포함

TwoDayPackage::TwoDayPackage(const string& S_N, const string& S_A, const string& S_C,
	const string& S_S, const int S_Z, const string& R_N, const string& R_A, const string& R_C, const string& R_S, const int R_Z,
	double w, double c, double flatfee) :Package(S_N, S_A, S_C, S_S, S_Z, R_N, R_A, R_C, R_S, R_Z, w, c)
	// 이름과 주소 시 주 zipcode의 정보를 보내는 사람, 받는사람 각각 받게된다. 무게와 가격도 또한 받는다. Package와 동일하지만
	// Two-delivery에 관한 요금도 또한 받게 된다. 이를 상속관계인 Package 클래스에 매개변수를 이용하여 보내게 된다.
{
	setFlatFee(flatfee);
}

void TwoDayPackage::setFlatFee(double flat_fee) { // Flat_Fee_PerOunce변수의 set함수
	Flat_Fee = flat_fee;
}
double TwoDayPackage::getFlatFee() const { // Flat_Fee_PerOunce변수의 get함수
	return Flat_Fee;
}

double TwoDayPackage::calculateCost() const { // Two_day-delivery service의 요금 계산 함수..
	return Package::calculateCost() + getFlatFee(); // calculateCost에 Two_delivery에 대한 요금을 더해 return 한다.
}
