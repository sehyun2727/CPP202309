#include <iostream>
#include <string>
using namespace std;

//���ڿ��� ��� �빮�ڸ� �ҹ��ڷ� ��ȯ
string toLowerStr(string str) {
	for (char& c : str) {
		c = tolower(c);
	}
	return str;
}
//���ڿ��� ��� �ҹ��ڸ� �빮�ڷ� ��ȯ
string toUpperStr(string str) {
	for (char& c : str) {
		c = toupper(c);
	}
	return str;
}

int calcHammingDist(string s1, string s2) {
	int count = 0;
		// �� �迭�� ���̰� �ٸ� �� �����ڵ� ���
		if (s1.length() != s2.length())
			cout << "���� : ���̰� �ٸ�" << endl;
		// �� �迭�� ���ڰ� ���ٸ� ���� �ε����� �ٸ� ���� �ִ��� Ȯ��
		else {
			for (int i = 0; i < s1.length(); i++) {
				if (s1[i] != s2[i]) {
					count++;
				}
			}
			cout << "�ع� �Ÿ��� " << count << endl;
		}
	
	return 0;
}


	int main() {
		string s1, s2;

		// s1�� s2�� ������ �Է°� ����
		cout << "DNA1 : ";
		cin >> s1;
		cout << "DNA2 : ";
		cin >> s2;

		//�� ���ڿ��� �빮�ڸ� �ҹ��ڷ� ��ȯ
		s1 = toLowerStr(s1);
		s2 = toLowerStr(s2);

		//�ع� �Լ� ����
		calcHammingDist(s1, s2);
		return 0;
	}
