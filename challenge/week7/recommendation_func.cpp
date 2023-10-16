#include <iostream>
using namespace std;

const int NUM_USERS = 3;
const int NUM_ITEMS = 3;
int userPreferences[NUM_USERS][NUM_ITEMS];

//사용자의 선호도값을 받는 함수
int initializePreferences(void) {
	// 사용자의 선호도값 이차배열에 대한 입력을 받기위한 for문
	for (int i = 0; i < NUM_USERS; ++i) {
		cout << "사용자 " << (i + 1) << "의 선호도를 입력하세요 (";
		cout << NUM_ITEMS << "개의 항목에 대해 ):";
		for (int j = 0; j < NUM_ITEMS; ++j) {
			cin >> userPreferences[i][j];
		}
	}
	return 0;
}
//각 사용자의 선호도를 반환하고 출력하는 함수
int findRecommendedItems(void) {
	// 각 사용자에 대한 값 중 가장 큰 값의 인덱스값을 반환하는 for문
	for (int i = 0; i < NUM_USERS; ++i) {
		int maxPreferenceIndex = 0;
		for (int j = 0; j < NUM_ITEMS; ++j) {
			if (userPreferences[i][j] > userPreferences[i][maxPreferenceIndex]) {
				maxPreferenceIndex = j; // 변수에 현재 인덱스값 저장
			}
		}
		cout << "사용자" << (i + 1) << "에게 추천하는 항목: ";
		cout << (maxPreferenceIndex + 1) << endl;
	}
	return 0;
}

int main() {
	
	//함수 호출
	initializePreferences();
	findRecommendedItems();

	return 0;
}