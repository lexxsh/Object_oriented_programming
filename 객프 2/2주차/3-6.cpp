#include<iostream>
#include<string>
using namespace std;

class Invoice { //�Ǹ��ϴ� ǰ�� ���� Invoice Ŭ����
public:
	Invoice(string pn, string pe, int pq, int pp) { //������ ������ ������� �Ű������� �޴� ������
		set_part_number(pn); //��ǰ��ȣ set�Լ�
		set_part_explain(pe); //��ǰ���� set�Լ�
		set_part_quantity(pq); //������ ǰ���� �� set�Լ�
		set_part_price(pp); //ǰ�� ���� set�Լ�

		cout << "Part number: " << part_number << endl; //~15������ ������ ������ִ� ����
		cout << "Part description: " << part_description << endl;
		cout << "Quantity: " << quantity << endl;
		cout << "Price per item: $" << price << endl;
		cout << "Invoice amount: $" << getInvoiceAmount() << endl;
	} 
	void set_part_number(string pn) { //��ǰ��ȣ�� setting�ϴ� �Լ�
		part_number = pn;             //�Ű������� �޾ƿ� pn���� ������ ����� �����Ѵ�.
	}
	string get_part_number() {//��ǰ��ȣ�� get�ϴ� �Լ�
		return part_number;//��ǰ��ȣ�� ��ȯ�Ѵ�.
	}
	void set_part_explain(string pe) {//��ǰ������ setting�ϴ� �Լ�
		part_description = pe;		  //pe���� ������ ����� �����Ѵ�.
	}
	string get_part_explain() {//��ǰ������ get�ϴ� �Լ�
		return part_explain;//��ǰ������ ��ȯ�Ѵ�.
	}
	void set_part_quantity(int pq) {  //������ ǰ���� ���� setting�ϴ� �Լ�			 
		if (pq < 0) {                //pq�� 0���� �������(quauntity�� < 0 �� ����)
			cout << endl << "quantity cannot be negative. quantity set to 0." << endl; //�����޽����� ����Ѵ�.
			cout << endl << "Invoce data members modified." << endl << endl; //�����Ͱ��� 0���� ������� �˸���.
			quantity = 0;           //0���� �ʱ�ȭ�����ش�.
		}
		else quantity = pq;   //0�� ���ų� ũ�� pq���� �����͸������ �����Ѵ�.
	}
	int get_part_quantity() {//ǰ���� ���� get�ϴ� �Լ�
		return quantity;//ǰ���� ���� ��ȯ�Ѵ�.
	}
	void set_part_price(int pp){ //ǰ�� ������ setting�ϴ� �Լ� 
		if (pp < 0) {   //pp�� 0���� �������(part_price < 0 �� ����)
			cout << endl << "price per item cannot be negative. price per item set to 0." << endl;//�����޽����� ����Ѵ�.
			cout << endl << "Invoce data members modified." << endl << endl; //���� 0���� ������� �˸���.
			price = 0;         //0���� �ʱ�ȭ�����ش�.
		}
		else price = pp;  //0�� ���ų� 0���� ũ�� pp���� ������ ������� �����Ѵ�.
	}
	int get_part_price() {//ǰ�� ������ get�ϴ� �Լ�
		return price;//ǰ�� ������ ��ȯ�Ѵ�.
	}
	int getInvoiceAmount() {//������ �հ踦 ����ϴ� �Լ�
		int money = quantity * price; //���� �ܰ� ��� ������ ���Ͽ� �̴´�.
		return money;  //�� ���� ��ȯ�Ѵ�.
	}
private:  //������ ���� ���� �ܺο����� ������ �� ���� private�� ������ �����Ͽ���.
	string part_number ; //��ǰ��ȣ�� ������ �������
	string part_description;//��ǰ������ ������ �������
	int quantity = 0;//��ǰ�� ���� ������ �������
	int price = 0;//��ǰ�� ������ ������ �������
};
int main() {
	Invoice num1("12345", "Hammer", 100, 5);
	Invoice num2("123456", "Saw", 5, -11);
}