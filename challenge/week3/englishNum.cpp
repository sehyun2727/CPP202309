#include <iostream>
using namespace std;

int main() {
	int number;
	cout << "���ڸ� �Է��Ͻÿ�";
	cin >> number; //�Է¹��� ���ڸ� ������ ����

	if (number == 0) // ������ 0�� �� �Ʒ� ���� ����
		cout << "zero\n";
	else if (number == 1) // ������ 1�� �� �Ʒ� ���� ����
		cout << "one\n";
	else // ������ 0,1�� �ش����� ���� �� �Ʒ� ���� ����
		cout << "many\n";

}