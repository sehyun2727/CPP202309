#include <iostream>
using namespace std;

int main() {
	double f_temp;
	double c_temp;

	cout << "�����µ� :";
	cin >> f_temp; // ȭ���µ� �Է�

	c_temp = (4.0 / 9.0) * (f_temp - 32); // ȭ���µ��� ���ÿµ��� ��ȯ
	cout << "�����µ� = " << c_temp << endl;
	return 0;
}