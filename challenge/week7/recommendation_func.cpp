#include <iostream>
using namespace std;

const int NUM_USERS = 3;
const int NUM_ITEMS = 3;
int userPreferences[NUM_USERS][NUM_ITEMS];

//������� ��ȣ������ �޴� �Լ�
int initializePreferences(void) {
	// ������� ��ȣ���� �����迭�� ���� �Է��� �ޱ����� for��
	for (int i = 0; i < NUM_USERS; ++i) {
		cout << "����� " << (i + 1) << "�� ��ȣ���� �Է��ϼ��� (";
		cout << NUM_ITEMS << "���� �׸� ���� ):";
		for (int j = 0; j < NUM_ITEMS; ++j) {
			cin >> userPreferences[i][j];
		}
	}
	return 0;
}
//�� ������� ��ȣ���� ��ȯ�ϰ� ����ϴ� �Լ�
int findRecommendedItems(void) {
	// �� ����ڿ� ���� �� �� ���� ū ���� �ε������� ��ȯ�ϴ� for��
	for (int i = 0; i < NUM_USERS; ++i) {
		int maxPreferenceIndex = 0;
		for (int j = 0; j < NUM_ITEMS; ++j) {
			if (userPreferences[i][j] > userPreferences[i][maxPreferenceIndex]) {
				maxPreferenceIndex = j; // ������ ���� �ε����� ����
			}
		}
		cout << "�����" << (i + 1) << "���� ��õ�ϴ� �׸�: ";
		cout << (maxPreferenceIndex + 1) << endl;
	}
	return 0;
}

int main() {
	
	//�Լ� ȣ��
	initializePreferences();
	findRecommendedItems();

	return 0;
}