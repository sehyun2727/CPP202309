#include <iostream>
using namespace std;

int main() {
	int a, b, c, largest;

	cout << "3���� ������ �Է��Ͻÿ� : ";
	cin >> a >> b >> c; // a, b, c ������ ���� ���� �Է¹޾� ����

	if (a < b && a < c) // a�� b ,c���� �۴ٸ� �ּҰ��� a
		largest = a;
	else if (b < a && b < c) // b�� a,c ���� �۴ٸ� �ּҰ��� b
		largest = b;
	else				// �� ��찡 �ƴ϶�� c�� ���� ������ �ּҰ��� c
		largest = c;

	cout << "���� ���� ������ " << largest << endl;
	return 0;
}