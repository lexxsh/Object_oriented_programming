#include <iostream> // iostream ������� include
using namespace std; // std ���������ϵ��� ��.

#include "Package.h" // Package.h ��� ������� include

Package::Package(const string& S_N, const string& S_A, const string& S_C, // class Package�� �������̴�.
	const string& S_S, const int S_Z,  // �����»���� �޴»���� �̸�, �ּ�, ��, ��, zipcode 
	const string& R_N, const string& R_A, const string& R_C,
	const string& R_S, const int R_Z,
	double we, double co) // �׸��� ��ȭ���� ���Կ� ���Դ簡���� �Ű������� ����.
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
string Package::getSenderState() const { // Send_State������ get�Լ�
	return Send_State;
}
void Package::setSenderZip(const int zip) { // Send_Zipcode������ set�Լ�
	Send_Zipcode = zip;
}
int Package::getSenderZip() const { // Send_Zipcode������ get�Լ�
	return Send_Zipcode;
}
// about Recipient - set & get
void Package::setRecipientName(const string& name) { // Receive_Name������ set�Լ�
	Receive_Name = name;
}
string Package::getRecipientName() const {  // Receive_Name������ get�Լ�
	return Receive_Name;
}
void Package::setRecipientAddress(const string& add) { // Receive_Address������ set�Լ�
	Receive_Address = add;
}
string Package::getRecipientAddress() const { // Receive_Address������ get�Լ�
	return Receive_Address;
}
void Package::setRecipientCity(const string& city) { // Receive_City������ set�Լ�
	Receive_City = city;
}
string Package::getRecipientCity() const { // Receive_City������ get�Լ�
	return Receive_City;
}
void Package::setRecipientState(const string& sta) { // Receive_State������ set�Լ�
	Receive_State = sta;
}
string Package::getRecipientState() const { // Receive_State������ get�Լ�
	return Receive_State;
}
void Package::setRecipientZip(const int zip) { // Receive_Zipcode������ set�Լ�
	Receive_Zipcode = zip;
}
int Package::getRecipientZip() const { // Receive_Zipcode������ get�Լ�
	return Receive_Zipcode;
}
// about weight,cost - set & get
void Package::setweight(double we) {  // Weight������ set�Լ�
	Weight = we;
}
double Package::getweight() const {  // Weight������ get�Լ�
	return Weight;
}
void Package::setCost(double co) { // Cost������ set�Լ�
	Cost = co;
}
double Package::getCost() const { // Cost������ get�Լ�
	return Cost;
}
// General_calculate_cost
double Package::General_Calculate_Cost() const { // ���Կ� ���Դ簡���� ����Ͽ� ����� ����ϴ� �Լ�
	return getweight() * getCost(); // ���Կ� ���Դ簡���� ���Ͽ� �� ���� return��.
}