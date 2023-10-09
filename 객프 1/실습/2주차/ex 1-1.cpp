#include <iostream>
using namespace std; // ct+k+c 주석처리
int main(void)
{	// 1Byte = 8bits
	short year = 0; // year변수를 short(2byte) 타입선언
	int sale = 0; //slae변수를 int(4byte) 선언 & 초기화
	long total_sale = 0; // long 변수(4byte) 선언 & 초기화
	
	year = 10; //k year 변수에 10 대입
	sale = 200000000; 
	total_sale = year * sale; 

	cout << "total_sale = " << total_sale << endl; // 입력문 endl;
	cout << "size of short type " << sizeof(short)<<  "byte \n" ;
	cout << "size of int type " << sizeof(int) << "byte \n";
	cout << "size of long type " << sizeof(long) << "byte \n";
	return 0;
}
