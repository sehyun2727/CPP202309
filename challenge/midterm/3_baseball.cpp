#include <iostream>
#include <string>
using namespace std;


//�� �ڸ����� ������ Ȯ���ϴ� �Լ�
int numCheck(int Num) {
	int rand100 = Num / 100;
	int rand10 = (Num / 10) % 10;
	int rand1 = Num % 10;
	
	//�� �ڸ��� Ȯ�� �ڵ�
	//cout << Num << rand100 << rand10 << rand1 << endl;

	if (rand100 != rand10 && rand100 != rand1 && rand10 != rand1)
		return true;
	else
		return false;
}

int main() {
	int randomNum; // ����� �ϴ� 3�ڸ����� ���� ���� ����
	int firstNum; // ������ ù��° �ڸ���
	int secondNum; // ������ �ι�° �ڸ���
	int thirdNum; // ������ ����° �ڸ���

	while (1) {
		randomNum = rand() % 900 + 100; // ������ 3�ڸ��� ����

		bool same = false; // ��� ���� �ٸ� ��� true�� ���� ����

		// TODO 1: 3�ڸ� ������ �ڸ����� �����ϰ�, ��� ���� �ٸ��� üũ�ϴ� �ڵ��� �ۼ�

		same = numCheck(randomNum);

		if (same == true) {
			break;
		}
	}

	int turn = 0;
	while (1) {
		cout << turn + 1 << "��° �õ��Դϴ�. " << endl;

		int userNumber; // ����ڰ� �Է��� ���ڸ��� ���� ����
		int guessFirst; // ������ ������ ù��° �ڸ���
		int guessSecond; // ������ ������ �ι�° �ڸ���
		int guessThird; // ������ ������ ����° �ڸ���


		// ����ڿ��� ���ڸ� ���� �Է¹޴� �ڵ� ���
		while (1) {
			cout << "���ڸ� ���� �Է����ּ���: ";
			cin >> userNumber;

			if (to_string(userNumber).length() != 3) {
				cout << "�Էµ� ���ڰ� 3�ڸ� ���� �ƴմϴ�. �ٽ� �Է��ϼ���" << endl;
				continue;
			}

			bool same = false; // ��� ���� �ٸ� ��� true�� ���� ����
			// TODO 1: 3�ڸ� ������ �ڸ����� �����ϰ�, ��� ���� �ٸ��� üũ�ϴ� �ڵ��� �ۼ�
			
			same = numCheck(userNumber);

			if (same == false) {
				cout << "�Է��� ���ڿ� �ߺ��� ���ڰ� �ֽ��ϴ�. �ٽ� �Է��ϼ���" << endl;
				continue;
			}

			if (same == true) {
				break;
			}
		}


		int strike = 0; // ��Ʈ����ũ ������ �����ϴ� ����
		int ball = 0; // �� ������ �����ϴ� ����

		// TODO 2: ����� ������ ������ �ڸ����� ���ڸ� ���ϸ� ��Ʈ�� �ֱ� ���� �ڵ��� �ۼ�
		int rand100 = randomNum / 100;
		int rand10 = (randomNum / 10) % 10;
		int rand1 = randomNum % 10;
		int user100 = userNumber / 100;
		int user10 = (userNumber / 10) % 10;
		int user1 = userNumber % 10;

		if (rand100 == user100) {
			strike++;
		}
		else if (rand100 == user10 || rand100 == user1) {
			ball++;
		}
		if (rand10 == user10) {
			strike++;
		}
		else if (rand10 == user100 || rand10 == user1) {
			ball++;
		}
		if (rand1 == user1) {
			strike++;
		}
		else if (rand1 == user10 || rand1 == user100) {
			ball++;
		}

		cout << userNumber << "�� ��� : " << strike << " ��Ʈ����ũ, " << ball << "�� �Դϴ�." << endl;

		if (strike == 3) {
			cout << "������ ������ϴ�. �����մϴ�.";
			break;
		}

		turn += 1;
	}

	return 0;
}
