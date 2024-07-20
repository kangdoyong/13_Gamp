#include <iostream>
using namespace std;

// �޸� �����Ҵ� new, new[]��,
// ���� �� delete, delete[] �� ���

// malloc, calloc, realloc, free �� �ƴ�
// new, delete�� ����ϴ� ����?
// -> Ŭ������ ����ü�� �����ڿ� �Ҹ��ڰ� ȣ����� �ʱ� ������

// c++ ������ �޸� ���� ��, ��۸� �����Ͱ� ���� �ʵ���
// NULL ���� �ִ� ���� �ƴ�, nullptr �� ����ϴ� ���� ��õ

// ���� : ������ NULL�� �����Ͱ� �ƴ� ���� Ÿ���̹Ƿ�
// nullptr (null pointer) -> ������ ����

void main()
{
	// int Ÿ���� ũ�⸸ŭ ���� �޸� �Ҵ�
	int* p = new int;

	*p = 10;
	cout << *p << endl;

	// �Ҵ��Ų ���� �޸� ����
	delete p;
	p = nullptr;

	// �Ʒ��� ���� �Ҵ�� ���ÿ� ������ �ο�
	p = new int(100);
	cout << *p << endl;

	delete p;
	p = nullptr;
}