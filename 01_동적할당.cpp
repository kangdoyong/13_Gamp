#include <iostream>
using namespace std;

// 메모리 동적할당 new, new[]를,
// 해제 시 delete, delete[] 를 사용

// malloc, calloc, realloc, free 이 아닌
// new, delete를 사용하는 이유?
// -> 클래스나 구조체의 생성자와 소멸자가 호출되지 않기 때문에

// c++ 에서는 메모리 해제 후, 댕글링 포인터가 되지 않도록
// NULL 값을 넣는 것이 아닌, nullptr 를 사용하는 것을 추천

// 이유 : 기존의 NULL은 포인터가 아닌 정수 타입이므로
// nullptr (null pointer) -> 포인터 형식

void main()
{
	// int 타입의 크기만큼 동적 메모리 할당
	int* p = new int;

	*p = 10;
	cout << *p << endl;

	// 할당시킨 동적 메모리 해제
	delete p;
	p = nullptr;

	// 아래와 같이 할당과 동시에 실제값 부여
	p = new int(100);
	cout << *p << endl;

	delete p;
	p = nullptr;
}