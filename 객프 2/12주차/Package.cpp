#include <iostream> // iostream 헤더파일 include
using namespace std; // std 생략가능하도록 함.

#include "Package.h" // Package.h 라는 헤더파일 include

Package::Package(const string& S_N, const string& S_A, const string& S_C, // class Package의 생성자이다.
	const string& S_S, const int S_Z,  // 보내는사람과 받는사람의 이름, 주소, 시, 주, zipcode 
	const string& R_N, const string& R_A, const string& R_C,
	const string& R_S, const int R_Z,
	double we, double co) // 그리고 수화물의 무게와 무게당가격을 매개변수로 받음.
{
	setSenderName(S_N);
	setSenderAddress(S_A);
	setSenderCity(S_C);
	setSenderState(S_S);
	setSenderZip(S_Z);

	setRecipientName(R_N);
	setRecipientAddress(R_A);
	setRecipientCity(R_C);
	setRecipientState(R_S);
	setRecipientZip(R_Z);

	setweight(we);
	setCost(co);
}
// about sender - set & get
void Package::setSenderName(const string& name) { // Send_Name변수의 set함수
	Send_Name = name;
}
string Package::getSenderName() const { // Send_Name변수의 get함수
	return Send_Name;
}
void Package::setSenderAddress(const string& add) { // Send_Address변수의 set함수
	Send_Address = add;
}
string Package::getSenderAddress() const { // Send_Address변수의 get함수
	return Send_Address;
}
void Package::setSenderCity(const string& city) { // Send_City변수의 set함수
	Send_City = city;
}
string Package::getSenderCity() const { // Send_City변수의 get함수
	return Send_City;
}
void Package::setSenderState(const string& sta) { // Send_State변수의 set함수
	Send_State = sta;
}
string Package::getSenderState() const { // Send_State변수의 get함수
	return Send_State;
}
void Package::setSenderZip(const int zip) { // Send_Zipcode변수의 set함수
	Send_Zipcode = zip;
}
int Package::getSenderZip() const { // Send_Zipcode변수의 get함수
	return Send_Zipcode;
}
// about Recipient - set & get
void Package::setRecipientName(const string& name) { // Receive_Name변수의 set함수
	Receive_Name = name;
}
string Package::getRecipientName() const {  // Receive_Name변수의 get함수
	return Receive_Name;
}
void Package::setRecipientAddress(const string& add) { // Receive_Address변수의 set함수
	Receive_Address = add;
}
string Package::getRecipientAddress() const { // Receive_Address변수의 get함수
	return Receive_Address;
}
void Package::setRecipientCity(const string& city) { // Receive_City변수의 set함수
	Receive_City = city;
}
string Package::getRecipientCity() const { // Receive_City변수의 get함수
	return Receive_City;
}
void Package::setRecipientState(const string& sta) { // Receive_State변수의 set함수
	Receive_State = sta;
}
string Package::getRecipientState() const { // Receive_State변수의 get함수
	return Receive_State;
}
void Package::setRecipientZip(const int zip) { // Receive_Zipcode변수의 set함수
	Receive_Zipcode = zip;
}
int Package::getRecipientZip() const { // Receive_Zipcode변수의 get함수
	return Receive_Zipcode;
}
// about weight,cost - set & get
void Package::setweight(double we) {  // Weight변수의 set함수
	Weight = we;
}
double Package::getweight() const {  // Weight변수의 get함수
	return Weight;
}
void Package::setCost(double co) { // Cost변수의 set함수
	Cost = co;
}
double Package::getCost() const { // Cost변수의 get함수
	return Cost;
}
// General_calculate_cost
double Package::General_Calculate_Cost() const { // 무게와 무게당가격을 고려하여 요금을 계산하는 함수
	return getweight() * getCost(); // 무게와 무게당가격을 곱하여 그 값을 return함.
}