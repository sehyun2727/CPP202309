#include <iostream>
using namespace std;

int main() {
	int userInput;

	cout << "정수를 10번 입력하세요 (0을입력하면 종료): ";
	for (int i = 1; i < 11; i++) {
		cin >> userInput; //입력된 값을 변수에 저장
		if (userInput == 0) //0이 입력되면 반복문 탈출
			break;
		cout << "입력값: " << userInput << " 횟수 " << i-1 << endl; //횟수는 i값에 대해 하나 적은 값을 출력
	}

	cout << "종료되었습니다.";
	return 0;

}