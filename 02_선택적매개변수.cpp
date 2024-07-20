#include <iostream>
using namespace std;

// ������ �Ű�������?
// �⺻���� ������ �Ű������� ���ϸ�,
// �ʿ信 ���� �����͸� �Ҵ��� �� �ִ� �Ű������� �ǹ�
// �Լ��� ȣ���� ��, ������ �Ҵ��� ������ �� ����
// �Ҵ��� �ʿ��� ���, Ư�� �����͸� �Ҵ��� ���� ����
// �� �ʼ� �Ű����� �ڿ� ����Ǿ�� �մϴ�.

// ex
// ��Ģ ���� ��, ����� ��ȯ�ϴ� �Լ��� ����

typedef enum CalulateType
{
	Add,
	Sub,
	Mul,
	Div,
}CalType;

double Calculate(double a, double b, CalType type = Add);
// �ʼ� �Ű����� : a, b <- �Լ��� ȣ���� ���� �� �ʿ��� ������

void main()
{
	cout << "a �Է� : ";
	double a;
	cin >> a;
	cout << "b �Է� : ";
	double b;
	cin >> b;

	// 3��° �Ķ������ �⺻���� �����̹Ƿ�,
	// ������ �ҰŶ�� ȣ�� ��, ���� ����
	Calculate(a, b);
	Calculate(a, b, Mul);
}

double Calculate(double a, double b, CalType type)
{
	// � ������ �ߴ��� ���� Ÿ�� ��¿� ����� ���ڿ�
	char calType[128];

	// ���� ����� ������ ����
	double result = 0;

	switch (type)
	{
	case Add:
		strcpy(calType, "����");
		result = a + b;
		break;
	case Sub:
		strcpy(calType, "����");
		result = a - b;
		break;
	case Mul:
		strcpy(calType, "����");
		result = a * b;
		break;
	case Div:
		strcpy(calType, "������");
		result = a / b;
		break;
	}

	cout << calType << "���� ��� : " << result << endl;

	return result;
}
