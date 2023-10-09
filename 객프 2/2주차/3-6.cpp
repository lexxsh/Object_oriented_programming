#include<iostream>
#include<string>
using namespace std;

class Invoice { //판매하는 품목에 대한 Invoice 클래스
public:
	Invoice(string pn, string pe, int pq, int pp) { //각각의 데이터 멤버값을 매개변수로 받는 생성자
		set_part_number(pn); //부품번호 set함수
		set_part_explain(pe); //부품설명 set함수
		set_part_quantity(pq); //구입할 품목의 양 set함수
		set_part_price(pp); //품목별 가격 set함수

		cout << "Part number: " << part_number << endl; //~15각각의 정보를 출력해주는 내용
		cout << "Part description: " << part_description << endl;
		cout << "Quantity: " << quantity << endl;
		cout << "Price per item: $" << price << endl;
		cout << "Invoice amount: $" << getInvoiceAmount() << endl;
	} 
	void set_part_number(string pn) { //부품번호를 setting하는 함수
		part_number = pn;             //매개변수로 받아온 pn값을 데이터 멤버로 대입한다.
	}
	string get_part_number() {//부품번호를 get하는 함수
		return part_number;//부품번호를 반환한다.
	}
	void set_part_explain(string pe) {//부품설명을 setting하는 함수
		part_description = pe;		  //pe값을 데이터 멤버에 대입한다.
	}
	string get_part_explain() {//부품설명을 get하는 함수
		return part_explain;//부품설명을 반환한다.
	}
	void set_part_quantity(int pq) {  //구입할 품목의 양을 setting하는 함수			 
		if (pq < 0) {                //pq가 0보다 작은경우(quauntity가 < 0 와 같다)
			cout << endl << "quantity cannot be negative. quantity set to 0." << endl; //오류메시지를 출력한다.
			cout << endl << "Invoce data members modified." << endl << endl; //데이터값이 0으로 저장됨을 알린다.
			quantity = 0;           //0으로 초기화시켜준다.
		}
		else quantity = pq;   //0과 같거나 크면 pq값을 데이터멤버값에 대입한다.
	}
	int get_part_quantity() {//품목의 양을 get하는 함수
		return quantity;//품목의 양을 반환한다.
	}
	void set_part_price(int pp){ //품목별 가격을 setting하는 함수 
		if (pp < 0) {   //pp가 0보다 작은경우(part_price < 0 와 같다)
			cout << endl << "price per item cannot be negative. price per item set to 0." << endl;//오류메시지를 출력한다.
			cout << endl << "Invoce data members modified." << endl << endl; //값이 0으로 저장됨을 알린다.
			price = 0;         //0으로 초기화시켜준다.
		}
		else price = pp;  //0과 같거나 0보다 크면 pp값을 데이터 멤버값에 대입한다.
	}
	int get_part_price() {//품목별 가격을 get하는 함수
		return price;//품목별 가격을 반환한다.
	}
	int getInvoiceAmount() {//송장의 합계를 계산하는 함수
		int money = quantity * price; //계좌 잔고에 양과 가격을 곱하여 녛는다.
		return money;  //그 값을 반환한다.
	}
private:  //각각의 값에 대해 외부에서는 접근할 수 없게 private에 변수를 선언하였다.
	string part_number ; //부품번호를 저장할 멤버변수
	string part_description;//부품설명을 저장할 멤버변수
	int quantity = 0;//부품의 양을 저장할 멤버변수
	int price = 0;//부품의 가격을 저장할 멤버변수
};
int main() {
	Invoice num1("12345", "Hammer", 100, 5);
	Invoice num2("123456", "Saw", 5, -11);
}