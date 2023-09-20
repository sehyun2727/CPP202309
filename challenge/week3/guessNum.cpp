#include <iostream>
#include<time.h>
using namespace std;

int main() {
	srand(time(NULL));

	int answer = rand() % 100;
	int tries = 0;
	int guess;

	do { // 한번 먼저 실행
		cout << "정답을 추측하여 보시오 :";
		cin >> guess; // 입력값을 변수에 저장
		tries++; // 시도횟수 +1

		if (guess > answer) // 입력값이 난수보다 높으면 실행
			cout << "제시한 정수가 높습니다." << endl;
		if (guess < answer) // 입력값이 난수보다 낮으면 실행
			cout << "제시한 정수가 낮습니다." << endl;


	} while (guess != answer); // 입력값이 난수와 같아질때 까지 실행

	cout << "축하합니다. 시도횟수 = " << tries << endl;
	return 0;
	
}