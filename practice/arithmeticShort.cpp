#include <iostream>
#include <string>
using namespace std;

int main() {
	int two = 2; //������ ���� ����
	int eight = 8;
	int sum1 = 2;
	int sum2 = 2;

	sum1 = sum1 + two; // ������ �� ����
	sum2 += eight; // sum2 = sum2 + eight
	cout << " sum1 = " << sum1 << endl; // �ش� ���ڿ��� ���� ���
	cout << " sum2 = " << sum2 << endl;
	return 0;
}