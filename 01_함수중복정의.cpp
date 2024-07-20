#include <iostream>
using namespace std;

// 함수의 "이름"과 "매개변수 목록"을 이용하여 호출 대상을 찾습니다.
// 같은 이름의 함수를 여러개 작성하려면
// 매개변수를 다르게 해야함
// -> 함수 오버로딩
// 오버 로딩 : 동일한 이름의 함수를 중복 정의하는 것

// 오버로딩 조건
// 이름은 같아야 하며, 선언된 다른 함수들과 매개변수가 달라야 함
// 매개변수는 같은데, 반환 타입이 다른 함수는 오버로딩 불가

// 동일한 기능(연산)을 하는데, 데이터 타입만 다른 경우
//  -> 유용하게 사용
void Print(int num);
void Print(double num);

void main()
{
	Print(10);
	Print(3.14);
}

void Print(int num)
{
	cout << "Print(int) Called! " << num << endl;
}

void Print(double num)
{
	cout << "Print(double) Called! " << num << endl;
}
