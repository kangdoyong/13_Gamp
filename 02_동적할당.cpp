#include <iostream>
using namespace std;

void main()
{
	// ���̰� 5�� int�� �迭�� ���� �Ҵ�
	int* p = new int[5];

	for (int i = 0; i < 5; ++i)
	{
		p[i] = i + 1;
		cout << p[i] << endl;
	}

	// �����Ҵ�� �迭 �޸� ����
	delete[] p;
	p = nullptr;

	// 2���� �迭 �����Ҵ�
	// 2 * 3 ũ���� 2���� �迭 �Ҵ�
	// �� �� ��
	// �� �� ��

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

	// 1���� ����
	for (int i = 0; i < 2; ++i)
	{
		delete[] p2[i];
		p2[i] = nullptr;
	}
	// 2���� ����
	delete[] p2;
	p2 = nullptr;
}