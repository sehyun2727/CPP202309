#include <iostream>
#include<time.h>
using namespace std;

int main() {
	int i;
	int ans;
	cout << "산수 문제를 자동으로 출제합니다." << endl;

	while (true) {
		int firstNum = rand() % 100; //랜덤한 수 생성
		int secondNum = rand() % 100; //랜덤한 수 생성

		cout << firstNum << "+" << secondNum << "="; //랜덤한 두 수를 더하도록 콘솔창에 출력
		cin >> ans; //입력 값 변수에 저장
		

		if (firstNum + secondNum == ans) { //만약 두 랜덤한 수를 더한값이 입력값과 같다면 실행
			cout << "맞았습니다." << endl;
			break; //정답이므로 게임 종료
		}
		else {
			cout << "틀렸습니다." << endl; // 틀렸으므로 게임 다시 실행
		}
	}
	return 0;
}