#include <iostream>
#include <string>
using namespace std;

int main() {
	int maxPeople;
	cout << "�� ���� ���� �Է��϶�: ";
	cin >> maxPeople;
	string names[3]; // ������� �̸��� ���� �迭 ����
	int ages[3]; // ������� ���̸� ���� �迭 ����

	for (int i = 0; i < maxPeople; i++) { // ������� ������ �޴� for�� �ۼ�
		cout << "��� " << i + 1 << "�� �̸�: ";
		cin >> names[i];
		cout << "��� " << i + 1 << "�� ����: ";
		cin >> ages[i];
	}

	int ageThreshold; 
	cout << "Ư�� ���� �̻��� ����� ã������ ���̸� �Է��ϼ���: ";
	cin >> ageThreshold; 

	cout << ageThreshold << "�� �̻��� ����: \n";
	int detectedPeople = 0;
	for (int i = 0; i < maxPeople; i++) { // ���ǿ� �´� ������� ã�� ���� for��
		if (ages[i] >= ageThreshold) { // ages �迭�� �ϳ��� Ž���ϰ� ageThreshold �̻��� ����鸸 ��� 
			cout << names[i] << " (" << ages[i] << "��)\n";
			detectedPeople++; // ã������ detectdPeople�� 1�� �÷��� 
		}
	}
	if (detectedPeople == 0) { // �� ã����� ���� for������ if���� ������� �ʱ� ������ detectedPeople = 0 ��
		cout << ageThreshold << "�̻��� ���̸� ���� ���� �����ϴ�";

	}
	return 0;
}