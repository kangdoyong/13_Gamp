#include <iostream>
using namespace std;

// 참조자
// 자신이 참조하는 변수를 대신할 수 있는 또 하나의 이름
// 참조자는 포인터와 동일하게 다른 객체를 간접적으로 참조할 수 있지만,
// 포인터와 다르게 nullptr 값을 가질 수 없으며,
// 선언 시에 꼭 참조자가 참조할 객체를 지정해주어야 합니다.
// 한 번 참조시킨 후, 다른 객체를 참조할 수 없습니다.

// 정리
// 공통점 
// 다른 객체를 간접적으로 참조

// 차이점
// 포인터 : nullptr 가능, 가리키는 대상 변경 가능
// 참조자 : nullptr 불가, 가리키는 대상 변경 불가

void main()
{
	int myNumber1 = 100;
	int myNumber2 = 200;

	// myNumber1에 대한 참조자 ref 선언
	// 참조할 대상의 데이터 타입 뒤에 &를 붙여 선언
	// 포인터와 다르게, 주소를 대입할 필요 없이
	// 가르킬 대상의 식별자를 바로 대입
	int& ref = myNumber1;

	cout << "ref는 " << ref << endl;
	cout << "myNumber1은 " << myNumber1 << endl;

	int* p = &myNumber1;
	 
	cout << "p의 주소는 " << &p << endl;
	cout << "ref의 주소는 " << &ref << endl;
	cout << "myNumber1의 주소는 " << &myNumber1 << endl;

	// 포인터 변수는 별도의 공간을 차지하고, 값으로써
	// 가르키는 대상의 주소를 갖는다면,
	// 참조자는 가리키는 대상에 추가적인 별칭(식별자)를
	// 갖는 것과 동일하다.

	// 이미 대상을 갖는 참조자에 다른 변수의 식별자를 대입해도
	// 대입한 변수를 참조하는 것이 아닌,
	// 단순히 오른쪽 피연산자의 값을 복사
	ref = myNumber2;
	ref += 50;

	cout << "ref = " << ref << endl;
	cout << "myNumber1은 " << myNumber1 << endl;
	cout << "myNumber2는 " << myNumber2 << endl;

	// 참조자를 대상으로 참조자를 선언할 수 있습니다.
	int& ref2 = ref;
	ref2 += 50;

	cout << "ref = " << ref << endl;
	cout << "ref2 = " << ref2 << endl;
	cout << "myNumber1은 " << myNumber1 << endl;

	// 포인터 변수도 하나의 변수이므로,
	// 포인터 변수에 대한 참조자를 선언할 수 있음
	int* p2 = &myNumber2;

	// 포인터 변수 p2를 참조하는 참조자 ref3 선언
	int*& ref3 = p2;
	// *p2 = 300; 와 동일한 작업
	*ref3 = 300;

	cout << "*p2 = " << *p2 << endl;
	cout << "*ref3 = " << *ref3 << endl;
	cout << "myNumber2 = " << myNumber2 << endl;

	// 포인터 변수가 가르키는 대상에 대한 참조자도 선언
	int myNumber4 = 1000;
	p2 = &myNumber4;
	// int& ref4 = myNumber4; 와 동일한 작업
	int& ref4 = *p2;

}