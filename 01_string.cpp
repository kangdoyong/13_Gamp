#include <iostream>
#include <string>
using namespace std;

// string
// ���ڿ��� �ٷ�� Ŭ����
// -> ���ڿ��� ���õ� ������ �� ����� ���� �༮

void main()
{
	// string Ÿ���� ������ ����
	string myString;

	myString = "Hello!";
	cout << myString << endl;
	myString = "Hello World";
	cout << myString << endl;

	// length()�� �̿��Ͽ� ���ڿ��� ���̸� ���� �� ����
	for (int i = 0; i < myString.length(); ++i)
	{
		// string�� [] �����ڸ� �����ϱ� ������
		// �Ϲ� �迭ó�� �ε��� �����ڸ� �̿��Ͽ�
		// ������ ����(����)�� ������ �� ����
		cout << myString[i] << " ";
	}

	// front() �� back()�� �̿��Ͽ� ù���ڿ� ������ ���ڸ� ���� �� ����
	cout << "front = " << myString.front() << endl;
	cout << "back = " << myString.back() << endl;

	// �Ʒ��� ���� �ʱ�ȭ�� �� ����
	string myString2("Test");

	// string�� + �����ڸ� �̿��Ͽ�, ���ڿ��� ���� ���� ������
	// �׿� ���� �Ҵ� �����ڵ� ����
	myString += myString2;
	cout << "myString = " << myString << endl;

	// ���ڿ� �� ��, ����� �� �ִ� == �����ڸ� ����
	cout << "myString == myString2 = " << (myString == myString2) << endl;
	cout << "myString2 == Test = " << (myString2 == "Test") << endl;

	// string�� char ���� �迭�� �ٲٴ� ��
	char myCStyleString[256];
	strcpy(myCStyleString, myString.c_str());

	cout << "myCStyleString = " << myCStyleString << endl;

	// ���ڹ迭���� string���� ����
	string myString3 = myCStyleString;
	cout << myString3 << endl;

	// string to int, long long, float, double
	// stoi(), stoll(), stof(), stod()

	string myIntStr = "1000";
	int myInt = stoi(myIntStr);

	cout << "myInt = " << myInt << endl;

	// int, long long, float, double to string
	// to_string(value)
	myIntStr = to_string(myInt * 2);
	cout << "myIntStr = " << myIntStr << endl;
}