#include <iostream>
using namespace std;

int main() {
	int vowel = 0;
	int consonant = 0;
	cout << "�����ڸ� �Է��ϰ� ctrl+z�� ġ����" << endl;

	char ch;

	while (cin >> ch) { //������ ���ڿ����� �����Ѵ�
		switch (ch){ // ���ڿ��� ���� Ȯ���ϰ� ���� �ش��ϴ� �۾��� �����Ѵ�.
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			vowel += 1; // ������ �����̸� �������� +1
			break;
		default:
			consonant += 1; // ������ �����̸� �������� +1
			break;
		
		}
	}

	cout << "���� : " << vowel << endl;
	cout << "���� : " << consonant << endl;
}