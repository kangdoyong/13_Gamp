#include <iostream>
using namespace std;

// c언어에서는 2가지 방식의 함수 호출을 사용

// 값에 의한 호출(call by value) /전달 (pass by value) 
// -> 파라미터에 값을 전달하는 방식
void CallByValue(int value) { }

// 주소에 의한 호출(call by address) / 전달 (pass by address)
// -> 파라미터에 주소를 전달하는 방식
void CallByAddress(int* ptr) { }

// 참조자를 이용하여
// call / pass by reference (참조에 의한 호출/전달) 가능
void CallByReference(int& ref) { }

void Swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

// 참조자 앞에 const를 붙일 시,
// 참조하는 변수의 값을 함수 내부에서 변경하지 않겠다 라는 것을 명시
//  -> 데이터 읽기만 하겠다
void Print(const int& a, const int& b)
{
	cout << a << ", " << b << endl;
}

void main()
{
	int a = 10;
	int b = 20;

	Swap(a, b);
	Print(a, b);
}