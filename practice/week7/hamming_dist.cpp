#include <iostream>
#include <string>
using namespace std;

int main() {
	string s1, s2;
	int count = 0;

	// s1�� s2�� ������ �Է°� ����
	cout << "DNA1 : ";
	cin >> s1;
	cout << "DNA2 : ";
	cin >> s2;

	// �� �迭�� ���̰� �ٸ� �� �����޼��� ���
	if (s1.length() != s2.length())
		cout << "���� : ���̰� �ٸ�" << endl;

	// �� �迭�� ���ڰ� ���ٸ� ���� �ε����� �ٸ� ���� �ִ��� Ȯ��
	else {
		for (int i = 0; i < s1.length(); i++) {
			if (s1[i] != s2[i])
				count++;
		}
		cout << "�ع� �Ÿ��� " << count << endl;
	}
}