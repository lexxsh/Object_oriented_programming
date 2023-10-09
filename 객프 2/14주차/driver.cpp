#include <iostream> // 원하는 출력 형태를 만들기 위해 필요한 헤더파일 include
#include <iomanip> 
#include <vector> 
using namespace std;

#include "Package.h" // Package.h 헤더파일 include
#include "TwoDayPackage.h" // TwoDayPackage.h 헤더파일 include
#include "OvernightPackage.h" // OvernightPackage.h 헤더파일 include

int main() {
	vector<Package*>packages(3); // Package 포인터 3개를 벡터를 사용하여 packages 객체로 생성함.

	packages[0] = new Package("Lou Brown", "1 Main St", "Boston", "MA", // packages[0]이 Package클래스의 객체를 가르키도록 함 (매개변수도 넣어줌)
		11111, "Mary Smith", "7 Elm St", "New York", "NY", 22222, 8.5, .5); // 8.5 * 0.5 = 4.25
	packages[1] = new TwoDayPackage("Lisa Klein", "5 Broadway",
		"Somerville", "MA", 33333, "Bob George", "21 Pine Rd", "Cambridge", "MA", // packages[1]이 TwoDayPackage클래스의 객체를 가르키도록 함 (매개변수도 넣어줌)
		44444, 10.5, .65, 2.0); // 10.5 * 0.65 + 2.0 = 8.82
	packages[2] = new OvernightPackage("Ed Lewis", "2 Oak St", "Boston", // packages[2]가 OvernightPackage클래스의 객체를 가르키도록 함 (매개변수도 넣어줌)
		"MA", 55555, "Don Kelly", "9 Main St", "Denver", "CO", 66666,
		12.25, .7, .25); // 12.25*0.7 + 12.25*0.25 = 11.64

	double totalShippingCost = 0.0; // 뒤에서 계속해서 더해줄 총 배송비를 미리 0으로 선언해둠.

	cout << fixed << setprecision(2); // 앞으로 소수점 둘째자리까지만 나오도록 고정함.

	for (size_t i = 0; i < packages.size(); i++) { // for문을 돌며 보내는,받는 사람의 정보들과 배송비를 출력하도록 함.
		cout << "Package " << i + 1 << "\n\nSender:\n"
			<< packages[i]->getSenderName() << '\n'
			<< packages[i]->getSenderAddress() << '\n'
			<< packages[i]->getSenderCity() << ", "
			<< packages[i]->getSenderState() << ' '
			<< packages[i]->getSenderZIP();
		cout << "\n\nRecipient:\n" << packages[i]->getRecipientName()
			<< '\n' << packages[i]->getRecipientAddress() << '\n'
			<< packages[i]->getRecipientCity() << ", "
			<< packages[i]->getRecipientState() << ' '
			<< packages[i]->getRecipientZIP();

		double cost = packages[i]->calculateCost(); // vector가 가르키는 객체가 배송비를 계산하도록 함. (virtual함수를 썼기에 각 클래스의 함수가 실행)
		cout << "\n\nCost: $" << cost << "\n\n"; // 계산된 배송비 출력
		totalShippingCost += cost; // 바로 윗줄에서 계산된 cost을 for문 위에서 선언했던 총 배송비에 더해줌
	}
	cout << "Total shipping cost: $" << totalShippingCost << endl; // for문이 끝난 후 총 배송비를 출력함.
	return 0;
}