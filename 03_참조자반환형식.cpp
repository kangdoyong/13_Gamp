#include <iostream>
using namespace std;

// �����ڸ� �̿��Ͽ�, ���� ��ȯ�� ����
// -> ��ȯ���� ����� ������ �ٷ� �� ����

// ��ȯ ����� ������ ���� ��, ���� ���·� ���
// ��ȯ ����� ������ ���� ��, �� ���簡 �Ͼ

int& MyRefFunction(int& ref)
{
	ref += 10;
	return ref;
}

void main()
{
	int num1 = 10;

	// ��ȯ ���� ������ num2�� �޾����Ƿ�,
	// num2�� num1�� ����
	int& num2 = MyRefFunction(num1);
	
	num2 += 10;

	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	// ������ ������ ������ ��ȯ ���� ���� �ʾұ�
	// ������ �� ���縸 �Ͼ��, num1�� �������� ����
	int num3 = MyRefFunction(num1);

	num3 += 10;

	cout << "num1 = " << num1 << endl;
	cout << "num3 = " << num3 << endl;
}