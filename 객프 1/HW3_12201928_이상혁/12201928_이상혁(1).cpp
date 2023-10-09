#include<iostream>	  //출력하는데 필요한 객체를 가지는 헤더파일 선언
using namespace std;  // 네임스페이스를 활용해 std 클래스를 선언하지 않아도 된다.

int main() {
	int n(101);  //while문을 사용해 해결하기 위한 변수 n선언
	int n1(100); //do-while문을 사용해 해결하기 위한 변수 n1선언
	int sum1(0); //while문을 사용한 결과인 sum1변수 선언
	int sum2(0); //do-while문을 사용한 결과인 sum2변수 선언 
	int sum3(0); //for문을 사용한 결과인 sum3변수 선언
	while (n--) {  //n이 조건식부분에서 변수값을 1씩 줄어드게 만든다.
		sum1 += n; //1씩 줄어든 값을 sum1변수에 더해줌으로써 100부터 1을 더한값이 sum1에 최종 대입된다.
	}

	do {
		sum2 += n1;  //n1의 값을 sum2변수에 더해준다. 
	} while (n1--);  //조건문이 참이면 계속 15줄을 실행한다. 100부터 점점 감소해 1까지 더하게 된다.

	for (int i = 1; i <= 100; i++) { //초기화식에 1을 가지는 i를 선언하고 i가 100까지 증가되는 for문을 구성하였다.
		sum3 += i;					//1~100까지 증가하는 i를 sum3변수에 더해줌으로써 1~100 더한값이 sum3에 최종 대입된다.
	}

	cout <<"while 문 사용 : "<< sum1 << "\n";  //while문을 사용한 결과인 sum1 출력
	cout <<"do-while 문 사용 : "<< sum2 << "\n";  //do-while문을 사용한 결과인 sum2 출력
	cout <<"for문 사용 : "<< sum3 << "\n";  //for문을 사용한 결과인 sum3 출력

	return 0; //0을 반환해 종료를 말한다.
}


