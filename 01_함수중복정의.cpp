#include <iostream>
using namespace std;

// �Լ��� "�̸�"�� "�Ű����� ���"�� �̿��Ͽ� ȣ�� ����� ã���ϴ�.
// ���� �̸��� �Լ��� ������ �ۼ��Ϸ���
// �Ű������� �ٸ��� �ؾ���
// -> �Լ� �����ε�
// ���� �ε� : ������ �̸��� �Լ��� �ߺ� �����ϴ� ��

// �����ε� ����
// �̸��� ���ƾ� �ϸ�, ����� �ٸ� �Լ���� �Ű������� �޶�� ��
// �Ű������� ������, ��ȯ Ÿ���� �ٸ� �Լ��� �����ε� �Ұ�

// ������ ���(����)�� �ϴµ�, ������ Ÿ�Ը� �ٸ� ���
//  -> �����ϰ� ���
void Print(int num);
void Print(double num);

void main()
{
	Print(10);
	Print(3.14);
}

void Print(int num)
{
	cout << "Print(int) Called! " << num << endl;
}

void Print(double num)
{
	cout << "Print(double) Called! " << num << endl;
}
