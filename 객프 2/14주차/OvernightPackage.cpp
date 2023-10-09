#include <iostream> // 헤더파일 iostream 포함	
using namespace std; // std 생략

#include "OvernightPackage.h" // 헤더파일 OvernightPackage 포함

OvernightPackage::OvernightPackage(const string& S_N, const string& S_A, const string& S_C, const string& S_S, const int S_Z,
	const string& R_N, const string& R_A, const string& R_C, const string& R_S, const int R_Z, double we, double co, double over_night_fee_peronce) 
	:Package(S_N, S_A, S_C, S_S, S_Z, R_N, R_A, R_C, R_S, R_Z, we, co)
{   // 이름과 주소 시 주 zipcode의 정보를 보내는 사람, 받는사람 각각 받게된다. 무게와 가격도 또한 받고 overnightpackage의 요금도 추가로 받는다.
	// 그 이후에 상속관계인 Package 클래스에 보내게 된다.
	setOvernightFeePerounce(over_night_fee_peronce);
	// overnightpacakge 의 추가요금을 set함수를 사용하여 변수에 대입한다.
}

void OvernightPackage::setOvernightFeePerounce(double overnight_fee) { // Overnight_Fee_PerOunce변수에 대한 set함수
	Overnight_Fee_PerOunce = overnight_fee;
}
double OvernightPackage::getOvernightFeePerounce() const { // Overnight_Fee_PerOunce변수에 대한 get함수
	return Overnight_Fee_PerOunce;
}
double OvernightPackage::calculateCost() const {
	return Package::calculateCost() + (getweight() * getOvernightFeePerounce());
} // 기본적인 요금에 overnight - delivery service에 대한 추가요금을 계산 후 더하여 그 값을 반환하는 함수.