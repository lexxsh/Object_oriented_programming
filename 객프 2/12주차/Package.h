#pragma once
#pragma once
#ifndef PACKAGE_H // 포함 전처리기
#define PACKAGE_H 

#include <string>
using namespace std; 

class Package { // 클래스 Package 선언
public:
	Package(const string&, const string&, const string&, const string&, const int,
		const string&, const string&, const string&, const string&, const int,
		double, double); // class 생성자. 각각에 대한 정보를 매개변수로 받게 된다.

	void setSenderName(const string&); // Send_Name변수의 set함수와 get함수
	string getSenderName() const;

	void setSenderAddress(const string&); // Send_Address변수의 set함수
	string getSenderAddress() const; // Send_Name변수의 get함수

	void setSenderCity(const string&); // Send_Address변수의 set함수
	string getSenderCity() const; // Send_Address변수의 get함수

	void setSenderState(const string&); // Send_State변수의 set함수
	string getSenderState()const; // Send_State변수의 get함수

	void setSenderZip(const int); // Send_Zipcode변수의 set함수
	int getSenderZip() const; // Send_Zipcode변수의 get함수

	void setRecipientName(const string&); // Receive_Name변수의 set함수
	string getRecipientName() const; // Receive_Name변수의 get함수

	void setRecipientAddress(const string&); // Receive_Address변수의 set함수
	string getRecipientAddress() const; // Receive_Address변수의 get함수

	void setRecipientCity(const string&); // Receive_City변수의 set함수
	string getRecipientCity() const; // Receive_City변수의 get함수

	void setRecipientState(const string&); // Receive_State변수의 set함수
	string getRecipientState() const; // Receive_State변수의 get함수

	void setRecipientZip(const int); // Receive_Zipcode변수의 set함수
	int getRecipientZip() const; // Receive_Zipcode변수의 get함수

	void setweight(double); // Weight변수의 set함수
	double getweight() const; // Weight변수의 get함수

	void setCost(double); // Cost변수의 set함수
	double getCost() const; // Cost변수의 get함수

	double General_Calculate_Cost() const; // 무게, 가격을 통하여 요금을 계산하는 함수

protected: // protected로 선언
	string Send_Name; // 보내는 사람의 이름 변수
	string Send_Address; // 보내는 사람 주소 변수
	string Send_City; // 보내는 사람 시 변수
	string Send_State; // 보내는 사람 주 변수
	int Send_Zipcode; // 보내는 사람 zipcode 변수

	string Receive_Name; // 받는 사람 이름 변수
	string Receive_Address; // 받는 사람 주소 변수
	string Receive_City; // 받는 사람 시 변수
	string Receive_State; // 받는 사람 주 변수
	int Receive_Zipcode; // 받는 사람 zipcode 변수

	double Weight; // 무게를 담는 변수
	double Cost; // 배송비용을 담는 변수
};

#endif // !PACKAGE_H
