#include <iostream> // 입출력을 하기위한 헤더파일을 선언한다.
using namespace std; // 네임스페이스를 활용해 std 클래스를 선언하지 않아도 된다.
int main() { // 메인함수다.

	char Grade = 65; // 'A'인 글자를 아스키코드를 활용해 출력하기 위해 char 자료형인 Grade 변수를 만들었다.
	short Weight = 78; // 78을 대입하기에 적절한 short 자료형인 Weight 변수를 만들었다,
	int Salary = 2000000; // 2000000을 대입하기에 적절한 int 자료형인 Salary 변수를 만들었다.
	long Distance1 = 149600000; // 149600000의 크기를 가지는 숫자를 대입하기 위해 long 자료형을 가진 Distance1 변수를 만들었다.
	long long Price_of_apt = 2200000000; // 2200000000의 크기를 가지는 숫자를 대입하기 위해 Price_of_apt 변수를 만들었다.
	float Height = 178.9; // 실수인 178.9 숫자를 대입하기 위해 float 자료형인 Height 변수를 만들었다.
	float Distance2 = 2e19; // 실수인 2e19 숫자를 대입하기 위해 float 자료형인 Distance2 변수를 만들었다.
	double Distance3 = 3e123; // 실수인 3e123을 대입하기엔 float자료형은 작으므로 double 자료형인 Distance3 변수를 만들었다.

	cout <<"Grade : " << "'" << Grade << "'\n" ; // 아스키 코드를 활용해 대입한 문자와 ' '를 출력하고 줄바꿈한다.
	cout <<"Weight : " << Weight << "kg\n"; // Weight 변수에 저장된 값과 "kg"을 출력하고 줄바꿈한다.
	cout << "Salary : " << Salary << "원\n"; // Salary 변수에 저장된 값과 "원"을 출력하고 줄바꿈한다.
	cout << "Distance1 : " << Distance1 << "km\n"; // Distance1 변수에 저장된 값과 "km"을 출력하고 줄바꿈한다.
	cout << "Price_of_apt : " << Price_of_apt << "원\n"; // Price_of_apt 변수에 저장된 값과 "원"을 출력하고 줄바꿈한다.
	cout << "Height : " << Height << "cm\n"; // Height 변수에 저장된 값과 "cm"을 출력하고 줄바꿈한다.
	cout << "Distance2 : " << Distance2 << "km\n"; // Distance2 변수에 저장된 값과 "km"을 출력하고 줄바꿈한다.
	cout << "Distance3 : " << Distance3 << "km\n"; // Distance3 변수에 저장된 값과 "km"을 출력하고 줄바꿈한다.

	return 0; // int로 메인함수가 선언되었으므로 0을 반환해 종료를 말한다.
}