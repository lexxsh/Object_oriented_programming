#pragma once
#pragma once
#ifndef TWODAYPACKAGE_H // 포함 전처리기
#define TWODAYPACKAGE_H

#include <string> 
using namespace std; 

#include "Package.h" // 헤더파일 include

class TwoDayPackage :public Package { // 클래스 TwoDayPackage  클래스 Package와 상속 관계이다.
public:
	TwoDayPackage(const string&, const string&, const string&, const string&, const int,
		const string&, const string&, const string&, const string&, const int,
		double, double, // 클래스 생성자
		double); //각각에 대한 정보를 매개변수로 받게 된다.

	void setFlatFee(double); // Flat_Feee변수 set함수
	double getFlatFee() const; // Flat_Fee변수 get함수

	double Calculate_Cost() const; // 무게와 무게당가격에 Two_day-delivery service에 대한 추가요금을 더한 후 그 값을 반환하는 함수.

private:
	double Flat_Fee;
	// double 자료형, 추가요금을 담당하는 멤버 변수
};

#endif // !TWODAYPACKAGE_H