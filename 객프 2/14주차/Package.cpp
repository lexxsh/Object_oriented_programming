#include <iostream> // iostream ������� include
using namespace std; // std ���������ϵ��� ��.

#include "Package.h" // Package.h ��� ������� include

Package::Package(const string& S_N, const string& S_A, const string& S_C, const string& S_S, const int S_Z,  const string& R_N, 
	const string& R_A, const string& R_C, const string& R_S, const int R_Z, double w, double c) 
	// �̸��� �ּ� �� �� zipcode�� ������ ������ ���, �޴»�� ���� �ްԵȴ�. ���Կ� ���ݵ� ���� �޴´�.
{
	setSenderName(S_N);     //�����ڸ� ���� �Ű������� ���� �������� set�Լ��� ����� ������ �����ϰ� �ȴ�.
	setSenderAddress(S_A);
	setSenderCity(S_C);
	setSenderState(S_S);
	setSenderZIP(S_Z);

	setRecipientName(R_N);
	setRecipientAddress(R_A);
	setRecipientCity(R_C);
	setRecipientState(R_S);
	setRecipientZIP(R_Z);

	setweight(w);
	setCost(c);
}
void Package::setSenderName(const string& name) { // Send_Name������ set�Լ�
	Send_Name = name;
}
string Package::getSenderName() const { // Send_Name������ get�Լ�
	return Send_Name;
}
void Package::setSenderAddress(const string& add) { // Send_Address������ set�Լ�
	Send_Address = add;
}
string Package::getSenderAddress() const { // Send_Address������ get�Լ�
	return Send_Address;
}
void Package::setSenderCity(const string& city) { // Send_City������ set�Լ�
	Send_City = city;
}
string Package::getSenderCity() const { // Send_City������ get�Լ�
	return Send_City;
}
void Package::setSenderState(const string& sta) { // Send_State������ set�Լ�
	Send_State = sta;
}
string Package::getSenderState() const { // Send_State���� -> get�Լ�
	return Send_State;
}
void Package::setSenderZIP(const int zip) { // Send_Zipcode���� -> set�Լ�
	Send_Zipcode = zip;
}
int Package::getSenderZIP() const { // Send_Zipcode���� ->  get�Լ�
	return Send_Zipcode;
}
void Package::setRecipientName(const string& name) { // Receive_Name���� -> set�Լ�
	Receive_Name = name;
}
string Package::getRecipientName() const {  // Receive_Name���� -> get�Լ�
	return Receive_Name;
}
void Package::setRecipientAddress(const string& add) { // Receive_Address���� -> set�Լ�
	Receive_Address = add;
}
string Package::getRecipientAddress() const { // Receive_Address���� -> get�Լ�
	return Receive_Address;
}
void Package::setRecipientCity(const string& city) { // Receive_City���� -> set�Լ�
	Receive_City = city;
}
string Package::getRecipientCity() const { // Receive_City���� -> get�Լ�
	return Receive_City;
}
void Package::setRecipientState(const string& sta) { // Receive_State���� -> set�Լ�
	Receive_State = sta;
}
string Package::getRecipientState() const { // Receive_State���� -> get�Լ�
	return Receive_State;
}
void Package::setRecipientZIP(const int zip) { // Receive_Zipcode���� -> set�Լ�
	Receive_Zipcode = zip;
}
int Package::getRecipientZIP() const { // Receive_Zipcode���� -> get�Լ�
	return Receive_Zipcode;
}
void Package::setweight(double w) {  // Weight���� -> set�Լ�
	Weight = w;
}
double Package::getweight() const {  // Weight���� -> get�Լ�
	return Weight;
}
void Package::setCost(double c) { // Cost���� -> set�Լ�
	Cost = c;
}
double Package::getCost() const { // Cost���� -> get�Լ�
	return Cost;
}
double Package::calculateCost() const { // ���Կ� ���Դ簡���� ����Ͽ� ����� ����ϴ� �Լ�
	return getweight() * getCost(); // ���Կ� ���Դ簡���� ���Ͽ� �� ���� return��.
}