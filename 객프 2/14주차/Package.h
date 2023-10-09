
#pragma once // 전처리기문
#include <string> // 헤더파일 string 추가
using namespace std; // std 제거

class Package { // Package 클래스 생성
public:
	Package(const string&, const string&, const string&, const string&, const int, const string&, const string&,
		const string&, const string&, const int, double, double); // 앞서 선언한 클래스의 생성자
	// 이름과 주소 시 주 zipcode의 정보를 보내는 사람, 받는사람 각각 받게된다. 무게와 가격도 또한 받는다.

	void setSenderName(const string&); // Send_Name변수 -> set함수와 get함수
	string getSenderName() const;

	void setSenderAddress(const string&); // Send_Address변수 -> set함수와 get함수
	string getSenderAddress() const; 

	void setSenderCity(const string&); // Send_Address변수 -> set함수와 get함수
	string getSenderCity() const; 

	void setSenderState(const string&); // Send_State변수 -> set함수와 get함수
	string getSenderState()const; 

	void setSenderZIP(const int); // Send_Zipcode변수 -> set함수와 get함수
	int getSenderZIP() const; 

	void setRecipientName(const string&); // Receive_Name변수 -> set함수와 get함수
	string getRecipientName() const; 

	void setRecipientAddress(const string&); // Receive_Address변수 -> set함수와 get함수
	string getRecipientAddress() const;

	void setRecipientCity(const string&); // Receive_City변수 -> set함수와 get함수
	string getRecipientCity() const;

	void setRecipientState(const string&); // Receive_State변수 -> set함수와 get함수
	string getRecipientState() const;

	void setRecipientZIP(const int); // Receive_Zipcode변수 -> set함수와 get함수
	int getRecipientZIP() const;

	void setweight(double); // Weight변수 -> set함수와 get함수
	double getweight() const; 

	void setCost(double); // Cost변수 -> set함수와 get함수
	double getCost() const; 

	virtual double calculateCost() const; //virtual로 선언한 무게에 따른 가격을 계산해주는 함수다.

protected: // protected를 사용하였다
	string Send_Name; // string 자료형 -> 보내는 사람의 '이름'변수
	string Send_Address; // string 자료형 -> 보내는 사람의 '주소'변수
	string Send_City; // string 자료형 -> 보내는 사람의 '시'변수
	string Send_State; // string 자료형 -> 보내는 사람의 '주'변수
	int Send_Zipcode; // int 자료형 -> 보내는 사람의 'zipcode'변수

	string Receive_Name; // string 자료형 -> 받는 사람의 '이름'변수
	string Receive_Address; // string 자료형 -> 받는 사람의 '주소'변수 
	string Receive_City; // string 자료형 -> 받는 사람의 '시'변수
	string Receive_State; // string 자료형 -> 받는 사람의 '주'변수
	int Receive_Zipcode; // int 자료형 -> 받는 사람의 'zipcode'변수

	double Weight; // double자료형 -> 수화물의 무게변수
	double Cost; // double자료형 -> 배송 비용변수
};
