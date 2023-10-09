#include<iostream>
using namespace std;

class account {  //account Ŭ����  
public:
	account(int k) { //������ ���� -> �ʱ��ں��� �Է��� �� �ֵ�������.
		member = k; //account�� ���� ��ȣ�� �� �� �ִ� �Լ�
		Initial();  //�ʱ��ܾ��� �޾Ƶ��̴� �Լ� ����
	}
	void Initial() { //�ʱ��ܾ��� �޾Ƶ��̴� ����Լ�
		cout << "account" << member << " balance: $";
		int balance; //�ʱ��ܾ��� ������ ����
		cin >> balance; //����ڷκ��� �������� �޾Ƶ��δ�.
		if (balance < 0) { //�ʱ��ܾ��� 0���� ���� ���
			money = 0;  //������� ���� �ܰ� 0���� �Է��Ѵ�.
			cout << "Initialize to zero your initial balance less than 0\n" << endl; //���� ��ȿ���� ������ ����Ű�� ���� �޽��� ���
		}
		else money = balance; //0���� ū��쿡�� ������� ���� �ܰ� �Է¹��� �������� �����Ѵ�.
	}
	int credit(int additional) { //���� �ܰ� �Է¹��� ���� ���ϴ� ����Լ�
		cin >> additional;   //�������� ����ڷ� ���� �Է¹޴´�.
		money += additional; //���� �ܰ� �Է¹��� ���� �����ش�.
	}
	void debit() {  //�ܰ��� �������� ���ִ� ����Լ�
		cout << endl << "Enter withdrawa1 amount for account" << member << ": "; //��ŭ�� �������� �������� ����ڿ��� �ȳ��ϴ� ����
		int withdraw = 0; //�������� ���� ����
		cin >> withdraw; //�������� ����ڷκ��� �Է¹޴´�.
		cout << endl << "attempting to subtract " << withdraw << " from account" << member << " balance" << endl << endl; //����ڿ��� �������� �ٽ� �ȳ����ش�.
		if (withdraw > money)cout << "Debit amount exceeded account balance." << endl << endl; //�������� �ܾ׺��� ū��� ����ϴ� �޽���
		else money -= withdraw; //�ܾ׿��� �������� ���ش�.
	}
	int getBalance() { //���� �ܾ��� ��ȯ���ִ� ����Լ�
		cout << "account" << member << " balance: $"; //������� ���� �ܾ� ��� �޽���
		return money; //������� �ܾ��� ������ش�.
	}

private:
	int money = 0; //�����ܾ��� ������ ������ ���
	int member = 0; //��¸޽����� ���� account ��� ����
};
int main() {
	account mem1(1); //accountŬ������ mem1 ����
	account mem2(2); //mem2 ����
	mem1.debit(); //debit �Լ� ���त
	cout << mem1.getBalance() << endl; //�ܰ� ������ش�.
	cout << mem2.getBalance() << endl;
	mem2.debit();
	cout << mem1.getBalance() << endl;
	cout << mem2.getBalance() << endl;
}
