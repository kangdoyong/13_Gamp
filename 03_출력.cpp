#include <iostream>

void main()
{
	// cin 을 이용한 문자열 입력 시, 공백을 만나는 경우 입력 종료
	// 공백을 포함한 문자열을 입력받으려면 cin.getline() 을 사용

	std::cout << "좋아하는 프로그래밍 언어는 무엇인가요?\n";

	char str[256];
	std::cin.getline(str, sizeof(str), '\n');
	// 첫번째 파라미터 : 입력받은 문자열을 저장할 문자열
	// 두번째 파라미터 : 세번째 인자를 포함한 입력받을 최대 문자 수
	// 세번째 파라미터 : 입력의 끝을 구분할 문자

	std::cout << "당신이 좋아하는 언어는 " << str;
}