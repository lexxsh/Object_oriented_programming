#pragma once
#ifndef DATE_H
#define DATE_H

class Date {
public:
	Date(); // 매개변수가 없는 생성자, 시스템의 현재시간을 불러와 각 month, day, year에 저장.
	Date(int, int); // int형 매개변수가 2개인 생성자, ddd,yyyy 형태로 받는다.
	Date(int, int, int); // int형 매개변수가 3개인 생성자, dd,mm,yyyy 형태로 받는다.
	Date(string, int, int); // string형 매개변수 1개와 int형 매개변수 2개를 갖는 생성자. Month,dd,yyyy형태로 받는다.

	void print() const; // month / day / year 형태로 출력하는 함수.
	void printDDDYYYY() const; // DDD / year형태로 출력하는 함수.
	void printMMDDYY() const; // MM / DD / YY 형태로 출력하는 함수.
	void printMonthDDYYYY() const; // Month(string) / DD / YYYY 형태로 출력하는 함수.

private:
	int month; // 이 클래스에서 '월'을 담당하는 int자료형 선언.
	int day; // 이 클래스에서 '일'을 담당하는 int자료형 선언.
	int year; // 이 클래스에서 '년도'을 담당하는 int자료형 선언.

	int checkDay(int) const; // 날짜가 월/년도를 고려했을 때, 올바르게 입력된것인지 판단하는 함수.
	int daysInMonth(int) const; // 위 checkDay에서 쓰인다. '월'을 입력했을 때 이에 해당하는 일자를 return 해주는 함수이다.
	bool isLeapYear() const; // 위 daysInMonth에서 쓰인다. 이 클래스에 입력되어있는 년도가 윤년인지 판단하는 함수이다. return 자료형은 bool이다.
	int convertDDToDDD() const; // DD형태를 DDD형태로 바꿔주어 int자료형으로 return 하는 함수이다. 이는 printDDDYYYY에서 쓰인다.
	void setMMDDFromDDD(int); // DDD형태를 MMDD형태로 바꾸어 저장하는 함수이다. 생성자를 Date(ddd,yyyy)로 받았을 때에 쓰인다.
	string convertMMToMonth(int) const; // MM형태를 Month(string) 로 바꾸어 string 자료형으로 return 해주는 함수이다. 이는 printMonthDDYYYY에서 쓰인다. 
	void setMMFromMonth(string); // Month형태를 MM형태로 바꾸어 저장하는 함수이다. 생성자를 Date(Month,dd,yyyy)로 받았을 때에 쓰인다.
	int convertYYYYToYY() const; // YYYY형태를 YY로 바꾸어 int자료형으로 return 하는 함수이다. 이는 printMMDDYY에서 쓰인다. 
	void setYYYYFromYY(int); // YY형태를 YYYY형태로 바꾸어 저장할 때에 쓰인다. 아무곳에서도 쓰이지 않는다. (고찰에 추가적으로 적겠다.)
};

#endif
