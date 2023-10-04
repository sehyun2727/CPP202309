#include <iostream>
#include <string>
using namespace std;

int main() {
	const int numCell = 10;
	int numList[numCell][numCell];

	for (int i = 0; i < numCell; i++) {
		for (int j = 0; j < numCell; j++) {
			numList[i][j] = rand() % 1000; //���� for���� ����Ͽ� �����迭 �� �ε����� �������� ����
				cout << i << ", " << j << " : " << numList[i][j] << endl; // �� �ε����� ����� ���� ���
		}
	}
	cout << endl;

	int max = 0;
	int maxI = 0;;
	int maxJ = 0;
	for (int i = 0; i < numCell; i++) {
		for (auto var : numList[i]) { //���� for������ �����迭�� �ε����� ����
			int j = 0; // j�ε����� �˱����� ����
			if (numList[i][j] > max) {  // �����迭 �ε������� max���� ũ�ٸ�
				max = numList[i][j]; //max�� �����迭 �� ����
				maxI = i; //�ε��� ����
				maxJ = j; //�ε��� ����
			}
			j++; // j�ε��� 1�� ����
		}
	}

	cout << "���� ū ���� " << max << "�̰�,";
	cout << "i�� j�� ���� " << maxI << "," << maxJ << "�Դϴ�." << endl;
	cout << "������� :" << numList[maxI][maxJ] << endl;

	return 0;
}