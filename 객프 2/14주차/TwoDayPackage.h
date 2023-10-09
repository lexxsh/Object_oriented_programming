#pragma once // 전처리문

#include <string> // 헤더파일 string
using namespace std; // std 생략

#include "Package.h" // 프로젝트 내의 Package 헤더파일 추가 (

class TwoDayPackage :public Package { // Package 클래스에 상속인 클래스 선언
public:
	TwoDayPackage(const string&, const string&, const string&, const string&, const int, const string&, const string&, 
		const string&, const string&, const int, double, double, double); // 클래스의 생성자
	// 이름과 주소 시 주 zipcode의 정보를 보내는 사람, 받는사람 각각 받게된다. 무게와 가격도 또한 받는다. Package와 동일하지만
	// Two-delivery에 관한 요금도 또한 받게 된다.

	void setFlatFee(double); // Flat_Feee변수 -> set함수와 get함수
	double getFlatFee() const;

	virtual double calculateCost() const; // virtual을 사용하였다. 본래 존재했던 무게당의 가격에서 생성자를 통해 받은
	// 매개변수인 Two-delivery에 관한 요금을 더하여 계산한다.

private:
	double Flat_Fee;
	// double을 사용하였다. 추가 요금을 담을 수 있는 변수다.
};