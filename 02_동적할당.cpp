#include <iostream>
using namespace std;

void main()
{
	// 길이가 5인 int형 배열을 동적 할당
	int* p = new int[5];

	for (int i = 0; i < 5; ++i)
	{
		p[i] = i + 1;
		cout << p[i] << endl;
	}

	// 동적할당된 배열 메모리 해제
	delete[] p;
	p = nullptr;

	// 2차원 배열 동적할당
	// 2 * 3 크기의 2차원 배열 할당
	// ㅁ ㅁ ㅁ
	// ㅁ ㅁ ㅁ

	int** p2 = new int* [2];
	for (int i = 0; i < 2; ++i)
	{
		p2[i] = new int[3];
	} 

	int count = 1;
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			p2[i][j] = count++;
			cout << p2[i][j] << " ";
		}
		cout << endl;
	}

	// 1차원 해제
	for (int i = 0; i < 2; ++i)
	{
		delete[] p2[i];
		p2[i] = nullptr;
	}
	// 2차원 해제
	delete[] p2;
	p2 = nullptr;
}