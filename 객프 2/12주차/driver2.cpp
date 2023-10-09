#include <iostream> 
#include <iomanip> 
using namespace std; 

#include "Package.h" 
#include "TwoDayPackage.h" 
#include "OvernightPackage.h" 

int main() {
	Package P1("SangHyuck", "1 Main St", "incheon", "Korea", 12201928, // 클래스 Package의 객체 생성 후 값들 선언
		"Mary Smith", "7 EIm St", "New York", "NY", 22222, 8.123, 5); 
	TwoDayPackage P2("SangHyck", "inha St", "incheon", "Korea", 12201928, // 클래스 TwoDayPackage의 객체 생성 후 값들 선언
		"Bob George", "21 Pine Rd", "Cambridge", "Ma", 44444, 10, 5, 7); 
	OvernightPackage P3("SangHyck", "inha St", "incheon", "Korea", 12201928, // 클래스 OvernightPackage의 객체 생성 후 값들 선언
		"Don kelly", "9 Main St", "Denver", "California", 66666, 6, 5, 0.5); 

	cout << setprecision(2) << fixed; //iomanip를 사용한 소수점 형식

	cout << "Package 1:" << endl << endl; //각각에 대한 정보들 출력
	cout << "Sender:" << endl
		<< P1.getSenderName() << endl
		<< P1.getSenderAddress() << endl
		<< P1.getSenderCity() << ", "
		<< P1.getSenderState()<<" "
		<< P1.getSenderZip() << endl << endl;
	cout << "Recipient:" << endl
		<< P1.getRecipientName() << endl
		<< P1.getRecipientAddress() << endl
		<< P1.getRecipientCity() << ", "
		<< P1.getRecipientState() << " "
		<< P1.getRecipientZip() << endl << endl;
	cout << "Cost:$"<< P1.General_Calculate_Cost() << endl << endl;


	cout << "Package 2:" << endl << endl;
	cout << "Sender:" << endl
		<< P2.getSenderName() << endl
		<< P2.getSenderAddress() << endl
		<< P2.getSenderCity() << ", "
		<< P2.getSenderState() << " "
		<< P2.getSenderZip() << endl << endl;
	cout << "Recipient:" << endl
		<< P2.getRecipientName() << endl
		<< P2.getRecipientAddress() << endl
		<< P2.getRecipientCity() << ", "
		<< P2.getRecipientState() << " "
		<< P2.getRecipientZip() << endl << endl;
	cout << "Cost:$" << P2.General_Calculate_Cost() << endl << endl;


	cout << "Package 3:" << endl << endl;
	cout << "Sender:" << endl
		<< P3.getSenderName() << endl
		<< P3.getSenderAddress() << endl
		<< P3.getSenderCity() << ", "
		<< P3.getSenderState() << " "
		<< P3.getSenderZip() << endl << endl;
	cout << "Recipient:" << endl
		<< P3.getRecipientName() << endl
		<< P3.getRecipientAddress() << endl
		<< P3.getRecipientCity() << ", "
		<< P3.getRecipientState() << " "
		<< P3.getRecipientZip() << endl << endl;
	cout << "Cost:$" << P3.General_Calculate_Cost() << endl << endl;

	return 0;
}