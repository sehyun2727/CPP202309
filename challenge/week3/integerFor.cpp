#include <iostream>
using namespace std;

int main() {
	int userInput;

	cout << "������ 10�� �Է��ϼ��� (0���Է��ϸ� ����): ";
	for (int i = 1; i < 11; i++) {
		cin >> userInput; //�Էµ� ���� ������ ����
		if (userInput == 0) //0�� �ԷµǸ� �ݺ��� Ż��
			break;
		cout << "�Է°�: " << userInput << " Ƚ�� " << i-1 << endl; //Ƚ���� i���� ���� �ϳ� ���� ���� ���
	}

	cout << "����Ǿ����ϴ�.";
	return 0;

}