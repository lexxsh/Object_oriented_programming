#pragma once
#pragma once
#ifndef OVERNIGHTPACKAGE_H // 포함 전처리기
#define OVERNIGHTPACKAGE_H

#include <string>
using namespace std; 

#include "Package.h" // 헤더파일 include

class OvernightPackage :public Package { // Package와는 상속관계인 class 생성
public:
	OvernightPackage(const string&, const string&, const string&, const string&, const int,
		const string&, const string&, const string&, const string&, const int,
		double, double, // class OvernightPackage의 생성자, 각각에 대한 정보를 매개변수로 받게 된다.
		double); 

	void setOvernightFeePerounce(double); // Overnight_Fee_PerOunce변수의 set함수
	double getOvernightFeePerounce() const;// Overnight_Fee_PerOunce변수의 get함수

	double Calculate_Cost() const; // 무게와 무게당가격을 고려한 기본적인 요금에
	// overnight - delivery service에 대한 추가요금을 계산 후 더하여 그 값을 반환하는 함수.

private:
	double Overnight_Fee_PerOunce;
	// overnight의 무게당 추가요금을 넣는 변수
};

#endif // !OVERNIGHTPACKAGE_H
