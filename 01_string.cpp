#include <iostream>
#include <string>
using namespace std;

// string
// 문자열을 다루는 클래스
// -> 문자열과 관련된 데이터 및 기능을 갖는 녀석

void main()
{
	// string 타입의 변수를 선언
	string myString;

	myString = "Hello!";
	cout << myString << endl;
	myString = "Hello World";
	cout << myString << endl;

	// length()를 이용하여 문자열의 길이를 얻을 수 있음
	for (int i = 0; i < myString.length(); ++i)
	{
		// string은 [] 연산자를 제공하기 때문에
		// 일반 배열처럼 인덱스 연산자를 이용하여
		// 각각의 원소(문자)에 접근할 수 있음
		cout << myString[i] << " ";
	}

	// front() 와 back()을 이용하여 첫글자와 마지막 글자를 얻을 수 있음
	cout << "front = " << myString.front() << endl;
	cout << "back = " << myString.back() << endl;

	// 아래와 같이 초기화할 수 있음
	string myString2("Test");

	// string은 + 연산자를 이용하여, 문자열을 이을 수도 있으며
	// 그에 대한 할당 연산자도 제공
	myString += myString2;
	cout << "myString = " << myString << endl;

	// 문자열 비교 시, 사용할 수 있는 == 연산자를 제공
	cout << "myString == myString2 = " << (myString == myString2) << endl;
	cout << "myString2 == Test = " << (myString2 == "Test") << endl;

	// string을 char 문자 배열로 바꾸는 법
	char myCStyleString[256];
	strcpy(myCStyleString, myString.c_str());

	cout << "myCStyleString = " << myCStyleString << endl;

	// 문자배열에서 string으로 변경
	string myString3 = myCStyleString;
	cout << myString3 << endl;

	// string to int, long long, float, double
	// stoi(), stoll(), stof(), stod()

	string myIntStr = "1000";
	int myInt = stoi(myIntStr);

	cout << "myInt = " << myInt << endl;

	// int, long long, float, double to string
	// to_string(value)
	myIntStr = to_string(myInt * 2);
	cout << "myIntStr = " << myIntStr << endl;
}