#include <iostream>
using namespace std;

// c 언어에서는 auto 키워드는 자동 변수(지역 변수)임을 명시하는 키워드
// 불편하므로 굳이 사용하지 않음
// c++ 11에서는 auto 예약어의 기능이 "타입 추론" 으로 변경
// c++ 14에서는 함수의 반환 형식을 auto로 추론할 수 있도록 기능이 확장

// auto
// auto를 사용한다면 초기값의 타입에 맞춰, 선언하는 인스턴스의 타입이 자동으로 결정
// 이러한 auto는 런타임 중이 아닌, 컴파일 시점에 타입이 정해지기 때문에
// 성능 저하가 없음
// 하지만 초기값으로 타입을 결정하기 때문에, 선언 시 무조건 초기화를 해야 함

auto GetNumber(int a, int b)
{
	return a + b;
}

void main()
{
	auto a = 10;

	cout << "a의 값은 " << a << endl;
	cout << "GetNumber = " << GetNumber(1, 3) << endl;
}
