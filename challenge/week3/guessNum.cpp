#include <iostream>
#include<time.h>
using namespace std;

int main() {
	srand(time(NULL));

	int answer = rand() % 100;
	int tries = 0;
	int guess;

	do { // �ѹ� ���� ����
		cout << "������ �����Ͽ� ���ÿ� :";
		cin >> guess; // �Է°��� ������ ����
		tries++; // �õ�Ƚ�� +1

		if (guess > answer) // �Է°��� �������� ������ ����
			cout << "������ ������ �����ϴ�." << endl;
		if (guess < answer) // �Է°��� �������� ������ ����
			cout << "������ ������ �����ϴ�." << endl;


	} while (guess != answer); // �Է°��� ������ �������� ���� ����

	cout << "�����մϴ�. �õ�Ƚ�� = " << tries << endl;
	return 0;
	
}