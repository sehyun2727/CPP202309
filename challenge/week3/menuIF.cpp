#include <iostream>
using namespace std;

int main() {
	int choice;

	cout << "1. ���� ����" << endl;
	cout << "2. ���� ���� �ݱ�" << endl;
	cout << "3. ����" << endl;
	cin >> choice; // �ܼ�â�� �Էµ� ���� choice���� ����

	if(choice == 1) //������ 1�� �� �Ʒ� ���� ���� �� Ż��
		cout << "���� ������ �����߽��ϴ�." << endl;
	else if(choice == 2) //������ 2�� �� �Ʒ� ���� ���� �� Ż��
		cout << "���� �ݱ⸦ �����߾��ϴ�." << endl;
	else if(choice == 3) //������ 3�� �� �Ʒ� ���� ���� �� Ż��
		cout << "���α׷��� �����մϴ�." << endl;
	else // ������ �ƹ� ������ �ش����� ���� �� �Ʒ� ���� ���� �� Ż��
		cout << "�߸��� �����Դϴ�." << endl;

	return 0;

}