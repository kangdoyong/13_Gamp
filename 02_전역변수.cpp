#include <iostream>
using namespace std;

// ������ �����ڸ� ����ϸ�
// ���� ������ ���� ������ �̸��� ���� ���
// ���� ������ ����� ���� ������ ���� ������ ������ �� ����

int variable = 10;

void main()
{
	int variable = 20;
	
	cout << variable << endl;
	cout << ::variable << endl;
}