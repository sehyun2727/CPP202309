#include <iostream>
using namespace std;

int main() {
	double f_temp;
	double c_temp;

	cout << "�����µ� :";
	cin >> c_temp; // �����µ� �Է�

	f_temp = c_temp * 1.8 + 32; // �����µ��� ȭ���µ��� ��ȯ
	cout << "�����µ� = " << f_temp << endl;
	return 0;
}