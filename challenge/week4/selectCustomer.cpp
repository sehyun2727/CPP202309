#include <iostream>
#include <string>
using namespace std;

int main() {
	int maxPeople;
	cout << "총 고객의 수를 입력하라: ";
	cin >> maxPeople;
	string names[3]; // 사람들의 이름을 담을 배열 선언
	int ages[3]; // 사람들의 나이를 담을 배열 선언

	for (int i = 0; i < maxPeople; i++) { // 사람들의 정보를 받는 for문 작성
		cout << "사람 " << i + 1 << "의 이름: ";
		cin >> names[i];
		cout << "사람 " << i + 1 << "의 나이: ";
		cin >> ages[i];
	}

	int ageThreshold; 
	cout << "특정 나이 이상인 사람을 찾으려면 나이를 입력하세요: ";
	cin >> ageThreshold; 

	cout << ageThreshold << "세 이상인 고객들: \n";
	int detectedPeople = 0;
	for (int i = 0; i < maxPeople; i++) { // 조건에 맞는 사람들을 찾기 위한 for문
		if (ages[i] >= ageThreshold) { // ages 배열을 하나씩 탐색하고 ageThreshold 이상의 사람들만 출력 
			cout << names[i] << " (" << ages[i] << "세)\n";
			detectedPeople++; // 찾았으면 detectdPeople을 1씩 올려줌 
		}
	}
	if (detectedPeople == 0) { // 못 찾은경우 위의 for문에서 if문이 실행되지 않기 때문에 detectedPeople = 0 임
		cout << ageThreshold << "이상의 나이를 가진 고객이 없습니다";

	}
	return 0;
}