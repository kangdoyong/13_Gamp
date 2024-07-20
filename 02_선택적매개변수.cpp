#include <iostream>
using namespace std;

// 선택적 매개변수란?
// 기본값을 가지는 매개변수를 말하며,
// 필요에 따라 데이터를 할당할 수 있는 매개변수를 의미
// 함수를 호출할 때, 데이터 할당을 생략할 수 있음
// 할당이 필요한 경우, 특정 데이터를 할당할 수도 있음
// 꼭 필수 매개변수 뒤에 선언되어야 합니다.

// ex
// 사칙 연산 후, 결과를 반환하는 함수를 선언

typedef enum CalulateType
{
	Add,
	Sub,
	Mul,
	Div,
}CalType;

double Calculate(double a, double b, CalType type = Add);
// 필수 매개변수 : a, b <- 함수의 호출을 위해 꼭 필요한 데이터

void main()
{
	cout << "a 입력 : ";
	double a;
	cin >> a;
	cout << "b 입력 : ";
	double b;
	cin >> b;

	// 3번째 파라미터의 기본값이 덧셈이므로,
	// 덧셈을 할거라면 호출 시, 생략 가능
	Calculate(a, b);
	Calculate(a, b, Mul);
}

double Calculate(double a, double b, CalType type)
{
	// 어떤 연산을 했는지 연산 타입 출력에 사용할 문자열
	char calType[128];

	// 연산 결과를 저장할 변수
	double result = 0;

	switch (type)
	{
	case Add:
		strcpy(calType, "덧셈");
		result = a + b;
		break;
	case Sub:
		strcpy(calType, "뺄셈");
		result = a - b;
		break;
	case Mul:
		strcpy(calType, "곱셈");
		result = a * b;
		break;
	case Div:
		strcpy(calType, "나눗셈");
		result = a / b;
		break;
	}

	cout << calType << "연산 결과 : " << result << endl;

	return result;
}
