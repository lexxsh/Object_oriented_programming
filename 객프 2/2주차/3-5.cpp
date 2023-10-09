#include<iostream>
using namespace std;

class account {  //account 클래스  
public:
	account(int k) { //생성자 제공 -> 초기자본을 입력할 수 있도록해줌.
		member = k; //account의 계좌 번호를 알 수 있는 함수
		Initial();  //초기잔액을 받아들이는 함수 실행
	}
	void Initial() { //초기잔액을 받아들이는 멤버함수
		cout << "account" << member << " balance: $";
		int balance; //초기잔액을 저장할 변수
		cin >> balance; //사용자로부터 변수값을 받아들인다.
		if (balance < 0) { //초기잔액이 0보다 작은 경우
			money = 0;  //사용자의 계좌 잔고에 0원을 입력한다.
			cout << "Initialize to zero your initial balance less than 0\n" << endl; //값이 유효하지 않음을 가리키는 오류 메시지 출력
		}
		else money = balance; //0보다 큰경우에는 사용자의 계좌 잔고에 입력받은 변수값을 대입한다.
	}
	int credit(int additional) { //현재 잔고에 입력받은 수를 더하는 멤버함수
		cin >> additional;   //일정액을 사용자로 부터 입력받는다.
		money += additional; //현재 잔고에 입력받은 수를 더해준다.
	}
	void debit() {  //잔고에서 일정액을 빼주는 멤버함수
		cout << endl << "Enter withdrawa1 amount for account" << member << ": "; //얼만큼의 일정액을 뺄것인지 사용자에게 안내하는 문구
		int withdraw = 0; //일정액을 받을 변수
		cin >> withdraw; //일정액을 사용자로부터 입력받는다.
		cout << endl << "attempting to subtract " << withdraw << " from account" << member << " balance" << endl << endl; //사용자에게 일정액을 다시 안내해준다.
		if (withdraw > money)cout << "Debit amount exceeded account balance." << endl << endl; //일정액이 잔액보다 큰경우 출력하는 메시지
		else money -= withdraw; //잔액에서 일정액을 빼준다.
	}
	int getBalance() { //현재 잔액을 반환해주는 멤버함수
		cout << "account" << member << " balance: $"; //사용자의 계좌 잔액 출력 메시지
		return money; //사용자의 잔액을 출력해준다.
	}

private:
	int money = 0; //계좌잔액을 저장할 데이터 멤버
	int member = 0; //출력메시지에 사용될 account 멤버 숫자
};
int main() {
	account mem1(1); //account클래스의 mem1 생성
	account mem2(2); //mem2 생성
	mem1.debit(); //debit 함수 실행ㄴ
	cout << mem1.getBalance() << endl; //잔고를 출력해준다.
	cout << mem2.getBalance() << endl;
	mem2.debit();
	cout << mem1.getBalance() << endl;
	cout << mem2.getBalance() << endl;
}
