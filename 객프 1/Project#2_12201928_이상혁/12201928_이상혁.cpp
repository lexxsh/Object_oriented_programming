#include<iostream>
#include<string>
using namespace std;

struct book {
	int id;
	char name[30];
};
book books[10];
struct member {
	int id;
	char name[30];
};
member members[5];

int main() {
	int index, mid, bid;
	int book_size = 10;
	int member_size = 5;
	FILE* bo_ok = NULL;
	FILE* man_age = NULL;
	FILE* mem_ber = NULL;
	fopen_s(&bo_ok, "book.txt", "w");
	if (bo_ok == NULL) {
		cout << "에러";
		exit(1);
	}
	fopen_s(&man_age, "manage.txt", "w");
	if (man_age == NULL) {
		cout << "에러";
		exit(1);
	}
	fopen_s(&mem_ber, "member.txt", "w");
	if (mem_ber == NULL) {
		cout << "에러";
		exit(1);
	}
	cout << "Enter 10 books, id, name" << endl;
	for (int i = 0; i < 10; i++) {
		cin >> books[i].id >> books[i].name;
	}
	cout << "\nEnter 5 members, id, name" << endl;
	for (int i = 0; i < 5; i++) {
		cin >> members[i].id >> members[i].name;
	}
	for (int i = 0; i < 10; i++) {
		fprintf(bo_ok, "%d %s\n", books[i].id, books[i].name);
	}
	for (int i = 0; i < 5; i++) {
		fprintf(mem_ber, "%d %s\n", members[i].id, members[i].name);
	}
	fprintf(man_age, "member book type\n");
	fclose(bo_ok);
	fclose(mem_ber);

	while (1) {
		cin.ignore();
		string menu;
		cout << "\nMenu\n1. quit\n2. book show\n3. book modify\n4. book remove\n5. add a book\n"
			<< "6. member show\n7. member modify\n8. member remove\n9. add a member\n10. borrow\n11. return\n******메뉴 글자를 똑같이 입력해주세요******\n";
		cout << "메뉴를 입력해주세요 : ";
		getline(cin, menu);
		if (menu == "quit") break;
		else if (menu == "book show") {
			fopen_s(&bo_ok, "book.txt", "r");
			if (bo_ok == NULL) {
				cout << "에러";
				exit(1);
			}
			for (int i = 0; i < book_size; i++) {
				fscanf(bo_ok, "%d %s", &books[i].id, books[i].name);
				cout << books[i].id << " " << books[i].name << endl;
			}
			fclose(bo_ok);
		}
		else if (menu == "book modify") {
			fopen_s(&bo_ok, "book.txt", "w");
			if (bo_ok == NULL) {
				cout << "에러";
				exit(1);
			}
			cout << "Enter book's index." << endl;
			cin >> index;
			cout << "Enter book's id, name" << endl;
			cin >> books[index].id >> books[index].name;
			for (int i = 0; i < 10; i++) {
				fprintf(bo_ok, "%d %s\n", books[i].id, books[i].name);
			}
			fclose(bo_ok);
		}
		else if (menu == "book remove") {
			fopen_s(&bo_ok, "book.txt", "w");
			if (bo_ok == NULL) {
				cout << "에러";
				exit(1);
			}
			cout << "Enter book's index." << endl;
			cin >> index;
			for (int i = 0; i < 10; i++) {
				if (i != index) {
					fprintf(bo_ok, "%d %s\n", books[i].id, books[i].name);
				}
			}
			fclose(bo_ok);
			fopen_s(&bo_ok, "book.txt", "r");
			if (bo_ok == NULL) {
				cout << "에러";
				exit(1);
			}
			for (int i = 0; i < 10; i++) {
				fscanf(bo_ok, "%d %s", &books[i].id, books[i].name);
			}
			fclose(bo_ok);
			book_size--;
		}
		else if (menu == "add a book") {
			fopen_s(&bo_ok, "book.txt", "w");
			if (bo_ok == NULL) {
				cout << "에러";
				exit(1);
			}
			cout << "Enter book's id, name" << endl;
			cin >> books[9].id >> books[9].name;
			for (int i = 0; i < 10; i++) {
				fprintf(bo_ok, "%d %s\n", books[i].id, books[i].name);
			}
			fclose(bo_ok);
			book_size++;
		}
		else if (menu == "member show") {
			fopen_s(&mem_ber, "member.txt", "r");
			if (mem_ber == NULL) {
				cout << "에러";
				exit(1);
			}
			for (int i = 0; i < member_size; i++) {
				fscanf(mem_ber, "%d %s", &members[i].id, members[i].name);
				cout << members[i].id << " " << members[i].name << endl;
			}
			fclose(mem_ber);
		}
		else if (menu == "member modify") {
			fopen_s(&mem_ber, "member.txt", "w");
			if (mem_ber == NULL) {
				cout << "에러";
				exit(1);
			}
			cout << "Enter member's index." << endl;
			cin >> index;
			cout << "Enter member's id, name" << endl;
			cin >> members[index].id >> members[index].name;
			for (int i = 0; i < 5; i++) {
				fprintf(mem_ber, "%d %s\n", members[i].id, members[i].name);
			}
			fclose(mem_ber);
		}
		else if (menu == "member remove") {
			fopen_s(&mem_ber, "member.txt", "w");
			if (mem_ber == NULL) {
				cout << "에러";
				exit(1);
			}
			cout << "Enter member's index." << endl;
			cin >> index;
			for (int i = 0; i < 5; i++) {
				if (i != index) {
					fprintf(mem_ber, "%d %s\n", members[i].id, members[i].name);
				}
			}
			fclose(mem_ber);
			fopen_s(&mem_ber, "member.txt", "r");
			if (mem_ber == NULL) {
				cout << "에러";
				exit(1);
			}
			for (int i = 0; i < 5; i++) {
				fscanf(mem_ber, "%d %s", &members[i].id, members[i].name);
			}
			fclose(mem_ber);
			member_size--;
		}
		else if (menu == "add a member") {
			fopen_s(&mem_ber, "member.txt", "w");
			if (mem_ber == NULL) {
				cout << "에러";  			
				exit(1);
			}
			cout << "Enter book's id, name" << endl;
			cin >> members[4].id >> members[4].name;
			for (int i = 0; i < 5; i++) {
				fprintf(mem_ber, "%d %s\n", members[i].id, members[i].name);
			}
			fclose(mem_ber);
			member_size++;
		}
		else if (menu == "borrow") {
			cout << "Enter member's id, book's id." << endl;
			cin >> mid >> bid;
			fprintf(man_age, "%d    %d  borrow\n", mid, bid);
		}
		else if (menu == "return") {
			cout << "Enter member's id, book's id." << endl;
			cin >> mid >> bid;
			fprintf(man_age, "%d    %d  return\n", mid, bid);
		}
		else {
			cout << "메뉴를 다시 입력해 주세요!\n";
		}
	}
	fclose(man_age);
	return 0;
}