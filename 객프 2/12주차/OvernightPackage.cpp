#include <iostream> 
using namespace std; 

#include "OvernightPackage.h" // 헤더파일 include

OvernightPackage::OvernightPackage(const string& S_N, const string& S_A, const string& S_C,
	const string& S_S, const int S_Z, // class 생성자
	const string& R_N, const string& R_A, const string& R_C,
	const string& R_S, const int R_Z, // 보내는사람과 받는사람의 정보들
	double we, double co, // 무게, 무게가격
	double over_night_fee_peronce) //  추가요금을 매개변수로 받음.
	:Package(S_N, S_A, S_C, S_S, S_Z, R_N, R_A, R_C, R_S, R_Z, we, co)
{	// 상속관계를 가지는 Package클래스에 매개변수들을 넣어줌.
	setOvernightFeePerounce(over_night_fee_peronce);
}

void OvernightPackage::setOvernightFeePerounce(double overnight_fee) { // Overnight_Fee_PerOunce변수의 set함수
	Overnight_Fee_PerOunce = overnight_fee;
}
double OvernightPackage::getOvernightFeePerounce() const { // Overnight_Fee_PerOunce변수의 get함수
	return Overnight_Fee_PerOunce;
}
double OvernightPackage::Calculate_Cost() const {
	return General_Calculate_Cost() + (getweight() * getOvernightFeePerounce());
} // 기본적인 요금에 overnight - delivery service에 대한 추가요금을 계산 후 더하여 그 값을 반환하는 함수.