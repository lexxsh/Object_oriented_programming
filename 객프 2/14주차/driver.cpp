#include <iostream> // ���ϴ� ��� ���¸� ����� ���� �ʿ��� ������� include
#include <iomanip> 
#include <vector> 
using namespace std;

#include "Package.h" // Package.h ������� include
#include "TwoDayPackage.h" // TwoDayPackage.h ������� include
#include "OvernightPackage.h" // OvernightPackage.h ������� include

int main() {
	vector<Package*>packages(3); // Package ������ 3���� ���͸� ����Ͽ� packages ��ü�� ������.

	packages[0] = new Package("Lou Brown", "1 Main St", "Boston", "MA", // packages[0]�� PackageŬ������ ��ü�� ����Ű���� �� (�Ű������� �־���)
		11111, "Mary Smith", "7 Elm St", "New York", "NY", 22222, 8.5, .5); // 8.5 * 0.5 = 4.25
	packages[1] = new TwoDayPackage("Lisa Klein", "5 Broadway",
		"Somerville", "MA", 33333, "Bob George", "21 Pine Rd", "Cambridge", "MA", // packages[1]�� TwoDayPackageŬ������ ��ü�� ����Ű���� �� (�Ű������� �־���)
		44444, 10.5, .65, 2.0); // 10.5 * 0.65 + 2.0 = 8.82
	packages[2] = new OvernightPackage("Ed Lewis", "2 Oak St", "Boston", // packages[2]�� OvernightPackageŬ������ ��ü�� ����Ű���� �� (�Ű������� �־���)
		"MA", 55555, "Don Kelly", "9 Main St", "Denver", "CO", 66666,
		12.25, .7, .25); // 12.25*0.7 + 12.25*0.25 = 11.64

	double totalShippingCost = 0.0; // �ڿ��� ����ؼ� ������ �� ��ۺ� �̸� 0���� �����ص�.

	cout << fixed << setprecision(2); // ������ �Ҽ��� ��°�ڸ������� �������� ������.

	for (size_t i = 0; i < packages.size(); i++) { // for���� ���� ������,�޴� ����� ������� ��ۺ� ����ϵ��� ��.
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

		double cost = packages[i]->calculateCost(); // vector�� ����Ű�� ��ü�� ��ۺ� ����ϵ��� ��. (virtual�Լ��� ��⿡ �� Ŭ������ �Լ��� ����)
		cout << "\n\nCost: $" << cost << "\n\n"; // ���� ��ۺ� ���
		totalShippingCost += cost; // �ٷ� ���ٿ��� ���� cost�� for�� ������ �����ߴ� �� ��ۺ� ������
	}
	cout << "Total shipping cost: $" << totalShippingCost << endl; // for���� ���� �� �� ��ۺ� �����.
	return 0;
}