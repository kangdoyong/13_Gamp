#include <iostream>

// 네임스페이스란?
// 특정한 영역에 이름을 붙여주기 위한 문법적 요소
// 어떠한 이름이 소속된 공간을 의미
// 네임 스페이스를 사용하면
// 변수, 함수, 구조체 등을 똑같은 이름이지만
// 다른 공간으로 분리하여 선언할 수 있음
// 경우에 따라, 네임 스페이스 내에 또 다른 네임스페이스를
// 중첩시킬 수 있음

// 네임스페이스를 사용하는 가장 큰 이유
// -> 협업을 위해

// 여러명이서 작업할 경우
// 각 기능 또는 파트별로 나눠서 작업을 하게 됨
// 작업자 a -> aaa 이름의 함수(전투 기능) (a 작업자의 로컬에만 존재)
// 작업자 b -> aaa 이름의 함수(ui 기능)   (b 작업자의 로컬에만 존재)
// 어느 정도 작업을 마친 후, 두 사람의 코드를 병합
// -> 네임스페이스를 사용하지 않았다면 코드 병합과정에서 오류 발생

// 외부의 기능을 불러와서 사용할 경우
// 외부 라이브러리 사용
// 외부 라이브러리에 aaa 라는 이름의 함수
// 내부 작업자 a라는 사람이 자사 프로젝트에 aaa라는 이름의 함수를 만들었다면?
// -> 네임스페이스를 사용하지 않았다면 문제가 발생

namespace Add
{
	int Calculate(int a, int b)
	{
		return a + b;
	}
}

namespace Sub
{
	int Calculate(int a, int b)
	{
		return a - b;
	}
}

namespace MyNamespace
{
	namespace Variable
	{
		namespace Global
		{
			int num1;
			int num2;
		}
	}
}

// 코드 파일 내에 자주 사용되는 네임스페이스가 있을 경우
// using 키워드를 이용하여, 네임스페이스를 매번 명시하지 않고
// 사용할 수 있음
using namespace std;

void main()
{
	cout << "숫자1을 입력해주세요." << endl;

	// 원한다면 네임스페이스 별칭을 지정
	namespace g = MyNamespace::Variable::Global;
	cin >> g::num1;

	cout << "숫자2를 입력해주세요." << endl;
	cin >> g::num2;

	cout << "1. 덧셈 / 2. 뺄셈" << endl;
	int calType;
	cin >> calType;

	if (calType == 1)
		cout << Add::Calculate(g::num1, g::num2) << endl;
	else if (calType == 2)
		cout << Sub::Calculate(g::num1, g::num2) << endl;
}