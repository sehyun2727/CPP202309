#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int maxPeople;
	cout << "�� ���� ���� �Է��϶�: ";
	cin >> maxPeople;
	vector<string> names; // ������� �̸��� ���� �����迭 ����
	vector<int> ages; // ������� ���̸� ���� �����迭 ����
	string name;
	int age;

	for (int i = 0; i < maxPeople; i++) { // ������� ������ �޴� for�� �ۼ�
		cout << "��� " << i + 1 << "�� �̸�: ";
		cin >> name;
		names.push_back(name); //������ �޾� �迭 �ڿ� �߰�

		cout << "��� " << i + 1 << "�� ����: ";
		cin >> age;
		ages.push_back(age); // ������ �޾� �迭 �ڿ� �߰�
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