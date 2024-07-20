#include <iostream>

// c++에서는 bool 이라는 자료형을 지원
// 진리값(0과 1)을 담는 데이터 타입
// 1바이트

void main()
{
	bool myBoolean = true;
	std::cout << "myBoolean의 값은 " << myBoolean << std::endl;

	myBoolean = false;
	std::cout << "myBoolean의 값은 " << myBoolean << std::endl;

	// 정확히는 true는 1 이 아니며, false는 0 이 아닙니다.
	// 이 둘은 참과 거짓을 나타내기 위한 1바이트 크기의 데이터일 뿐이며,
	// 출력 또는 정수 타입으로 변환하는 경우, 1과 0으로 변환되도록 정의되어 있음
}