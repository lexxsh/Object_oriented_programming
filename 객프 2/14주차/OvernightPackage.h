#pragma once // 전처리기문

#include <string> // 헤더파일 string을 추가
using namespace std; // std 생략.

#include "Package.h" // 상속을 위해 Package 헤더파일을 추가하였다.

class OvernightPackage :public Package { //Package와 상속관계인 클래스 OvernightPackage 생성
public:
	OvernightPackage(const string&, const string&, const string&, const string&, const int, const string&, const string&,
		const string&, const string&, const int, double, double, double); //앞서 선언한 Package 헤더파일의 생성자인
	 //이름과 주소 시 주 zipcode의 정보를 보내는 사람, 받는사람 각각 받게된다. 무게와 가격도 또한 받고 overnightpackage의 요금도 추가로 받는다.

	void setOvernightFeePerounce(double); // Overnight_Fee_PerOunce변수 -> set 함수와 get 함수
	double getOvernightFeePerounce() const;

	virtual double calculateCost() const; // virtual을 사용하였다. 무게, 무게당의 가격에 따른 값에 overnight와 관련된 요금을 추가하고 계산하는 함수

private:
	double Overnight_Fee_PerOunce;
	// double을 사용하였다. overnight_pacakage에 대한 무게당 가격을 저장하는 멤버변수다.
};