#include <iostream>
using namespace std;

int main() {
	int money;
	int candy_price;

	cout << "���� ������ �ִ� ��:";
	cin >> money;
	cout << "ĵ���� ����";
	cin >> candy_price;

	int n_candies = money / candy_price; // �ִ��� �� �� �ִ� ĵ�� ����
	cout << "�ִ��� �� �� �մ� ���� ��" << n_candies << endl; // ���

	int change = money / candy_price; // ĵ�� ���� �� ���� ��
	cout << "ĵ�� ���� �� ���� �� =" << change << endl; // ���
	return 0;

}