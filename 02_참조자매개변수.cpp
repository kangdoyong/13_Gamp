#include <iostream>
using namespace std;

// c������ 2���� ����� �Լ� ȣ���� ���

// ���� ���� ȣ��(call by value) /���� (pass by value) 
// -> �Ķ���Ϳ� ���� �����ϴ� ���
void CallByValue(int value) { }

// �ּҿ� ���� ȣ��(call by address) / ���� (pass by address)
// -> �Ķ���Ϳ� �ּҸ� �����ϴ� ���
void CallByAddress(int* ptr) { }

// �����ڸ� �̿��Ͽ�
// call / pass by reference (������ ���� ȣ��/����) ����
void CallByReference(int& ref) { }

void Swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

// ������ �տ� const�� ���� ��,
// �����ϴ� ������ ���� �Լ� ���ο��� �������� �ʰڴ� ��� ���� ���
//  -> ������ �б⸸ �ϰڴ�
void Print(const int& a, const int& b)
{
	cout << a << ", " << b << endl;
}

void main()
{
	int a = 10;
	int b = 20;

	Swap(a, b);
	Print(a, b);
}