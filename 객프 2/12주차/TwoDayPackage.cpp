#include <iostream> 
using namespace std; 

#include "TwoDayPackage.h" // 헤더파일 include

TwoDayPackage::TwoDayPackage(const string& S_N, const string& S_A, const string& S_C,
	const string& S_S, const int S_Z, // 클래스의 생성자.
	const string& R_N, const string& R_A, const string& R_C,
	const string& R_S, const int R_Z, // 보내는사람, 받는 사람의 주소 이름 시
	double we, double co, // 수화물의 무게와 무게당가격,
	double flatfee) // Twoday의 배달서비스에대한 요금계산  
	:Package(S_N, S_A, S_C, S_S, S_Z, R_N, R_A, R_C, R_S, R_Z, we, co)
{	// 상속인 class에 매개변수를 넣어줌
	setFlatFee(flatfee);
}

void TwoDayPackage::setFlatFee(double flat_fee) { // Flat_Fee_PerOunce변수의 set함수
	Flat_Fee = flat_fee;
}
double TwoDayPackage::getFlatFee() const { // Flat_Fee_PerOunce변수의 get함수
	return Flat_Fee;
}

double TwoDayPackage::Calculate_Cost() const { // Two_day-delivery service에 대한 요금을 계산하는 함수.
	return General_Calculate_Cost() + getFlatFee(); // 기본적인 요금에 Flat_fee를 더하여 반환하는 함수.
}
