#include <iostream>
using namespace std;

// 참조 반환의 잘못된 사용
int& GetRef()
{
	int a = 10;
	return a;
}

void main()
{
	int& ref = GetRef();
	cout << ref << endl;

	// 위 코드가 잘못된 이유?
	// GetRef() 함수의 지역변수 a는 함수 호출이
	// 끝났을 경우 소멸됩니다.
	// 소멸되는 a를 참조 반환하고 있으며, main 함수에
	// ref 참조자가 참조합니다.

	// 위와 같은 경우
	// 소멸될 데이터를 참조해서
	// 메모리 상황에 따라 원하던 결과가 나올 수도 있으나
	// 정상적인 작동을 안할 확률이 높음
	// 그러므로, 이러한 지역 변수를 참조 반환하는 일을
	// 없게끔 해야 함
}