#include <iostream> // 문자출력, 입력등을 위한 헤더파일인 iostream을 포함시킨다.
using namespace std; // 네임스페이스 std로 클래스명을 안쓰게 해준다.

int N = 1000; // 전역변수인 N을 선언, 1000으로 초기화 대입해준다.
int cal_sum(); // 함수의 프로토타입으로 main 함수에서 사용할 수 있게 해준다.
void main() { // 실행, 컴파일 되는 main 함수이다.
	int sum; // main 함수내에서 사용가능한 sum 변수를 선언한다.
	sum = cal_sum(); // cal_sum 함수에서 리턴값인 s를 sum 변수에 대입한다.
	{// 중괄호를 사용해 main 함수내에 지역을 만든다.
		int k; // 지역내에서 사용할 수 있는 지역변수인 k를 선언한다.
		k = 9; // 선언한 k에 9를 대입한다.
		cout << "k = " << k << endl; // 문자열과 k의 값을 출력한다.
	}
	cout << "sum of first " << N << " naural numbers is " << sum << endl;
	// 문자열과 N의 값 문자열과 sum값을 출력한다.
}
int cal_sum() { // int값을 반환하는 cal_sum 함수다.
	int i, s = 0; // 함수내에서만 사용가능한 int형 i,s를 선언하고 0을 대입한다.
	for (i = 0; i <= N; i++) { // i가 0부터 N번까지 증가하면서 n번반복 하는 for문이다.
		s = s + i; // i가 증가하는 값을 s와 더해서 s에 누적해 대입한다.
	}
	return(s); // s값을 반환한다.
}