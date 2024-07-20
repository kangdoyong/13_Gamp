#include <iostream>
using namespace std;

// 참조자를 이용하여, 참조 반환도 가능
// -> 반환받은 결과를 참조로 다룰 수 있음

// 반환 결과를 참조로 받을 시, 참조 형태로 사용
// 반환 결과를 값으로 받을 시, 값 복사가 일어남

int& MyRefFunction(int& ref)
{
	ref += 10;
	return ref;
}

void main()
{
	int num1 = 10;

	// 반환 값을 참조자 num2에 받았으므로,
	// num2는 num1을 참조
	int& num2 = MyRefFunction(num1);
	
	num2 += 10;

	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	// 참조자 형식의 변수로 반환 값을 받지 않았기
	// 때문에 값 복사만 일어나며, num1을 참조하지 않음
	int num3 = MyRefFunction(num1);

	num3 += 10;

	cout << "num1 = " << num1 << endl;
	cout << "num3 = " << num3 << endl;
}