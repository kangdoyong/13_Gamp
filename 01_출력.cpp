
// C언어와 C++의 차이
// c++은 c의 절차지향적 프로그래밍과 객체지향적 프로그래밍이 모두 가능한 언어
// c++은 c의 확장판이라고 생각해도 되지만
// 엄밀히 따지만 둘은 서로 다른 언어
// c++에서 c언어으로 코드를 작성하는 것이 가능하지만
// c++ 개발되었을 때, c언어 개발자들을 끌어모으기 위해서
// c언어의 api를 지원하기 때문에
// 실제로 c언어에서 사용하던 이름과 같은 이름의 c++ 코드를 사용

// 객체지향
// 컴퓨터 프로그램을 명령어 목록으로 보는 시각에서 벗어나
// 여러개의 독립된 단위인 객체들의 모임으로 파악하고자 하는
// 프로그래밍 패러다임 중 하나입니다.

// 객체지향에서는 "변수" 보다 "인스턴스"라는 표현 주로 사용
// 인스턴스란 객체의 형식을 갖는 변수를 의미
// (클래스에서 좀 더 자세히..)

// c++ 부터는 사용자 정의 헤더 파일이 아닌
// 표준 헤더 파일 포함 선언은 .h 제거하고 사용
#include <iostream>

void main()
{
	// 출력
	std::cout << "Hello World!" << std::endl;
	// c++ cout 을 이용하여 출력

	// std : namespace를 의미하여, 이는 소속된 위치를 의미
	// :: : 스코프 연산자, 어떠한 범위에 속해있는 요소에 접근할 때 사용
	// << : 입출력 연산자 (원래 <<는 비트연산자 중에 시프트 연산, 입출력 시에만 다르게 기능하게끔 정의)
	// endl : 현재 위치에서 개행을 의미

	
	// 입력
	int value;
	std::cout << "정수를 입력해주세요.\n";

	// c++ 에서 입력은 cin 사용
	// scanf 와 동일하게 공백이나 개행문자를 만난다면 입력을 중단
	std::cin >> value;

	std::cout << "입력받은 변수는 " << value << " 입니다." << std::endl;
}
