#include <iostream>
using namespace std;

int main() {
	int choice;

	cout << "1. ���� ����" << endl;
	cout << "2. ���� ���� �ݱ�" << endl;
	cout << "3. ����" << endl;
	cin >> choice; // �ܼ�â�� �Էµ� ���� choice���� ����

	switch (choice) //����� choice���� �ش��ϴ� ��츦 �����Ѵ�.
	{
		case 1:
			cout << "���� ������ �����߽��ϴ�." << endl;
			break;
		case 2: 
			cout << "���� �ݱ⸦ �����߾��ϴ�." << endl;
			break;
		case 3:
			cout << "���α׷��� �����մϴ�." << endl;
			break;
		default: // choice���� 1,2,3 ���� ������ ����ȴ�.
			cout << "�߸��� �����Դϴ�." << endl;
			break;
	}
	return 0;
}