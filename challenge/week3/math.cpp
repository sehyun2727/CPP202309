#include <iostream>
#include<time.h>
using namespace std;

int main() {
	int i;
	int ans;
	cout << "��� ������ �ڵ����� �����մϴ�." << endl;

	while (true) {
		int firstNum = rand() % 100; //������ �� ����
		int secondNum = rand() % 100; //������ �� ����

		cout << firstNum << "+" << secondNum << "="; //������ �� ���� ���ϵ��� �ܼ�â�� ���
		cin >> ans; //�Է� �� ������ ����
		

		if (firstNum + secondNum == ans) { //���� �� ������ ���� ���Ѱ��� �Է°��� ���ٸ� ����
			cout << "�¾ҽ��ϴ�." << endl;
			break; //�����̹Ƿ� ���� ����
		}
		else {
			cout << "Ʋ�Ƚ��ϴ�." << endl; // Ʋ�����Ƿ� ���� �ٽ� ����
		}
	}
	return 0;
}