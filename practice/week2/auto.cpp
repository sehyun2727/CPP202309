#include <iostream>
#include <string>
using namespace std;

auto add(int x, int y) { //�ڵ�Ÿ���߷� add �Լ� ����
	return x + y;
}

int main()
{
	auto sum = add(5, 6); // �ڵ�Ÿ�� ���� sum�� add(5, 6) ����
	cout << sum; // sum �� ���
	return 0;
}