#include <iostream>
#include <string>
using namespace std;

int main() {
	const int numCell = 10;
	int numList[numCell][numCell];

	for (int i = 0; i < numCell; i++) {
		for (int j = 0; j < numCell; j++) {
			numList[i][j] = rand() % 1000; //이중 for문을 사용하여 이차배열 각 인덱스에 랜덤값을 저장
				cout << i << ", " << j << " : " << numList[i][j] << endl; // 각 인덱스에 저장된 값을 출력
		}
	}
	cout << endl;

	int max = 0;
	int maxI = 0;;
	int maxJ = 0;
	for (int i = 0; i < numCell; i++) {
		for (auto var : numList[i]) { //이중 for문으로 이차배열의 인덱스에 접근
			int j = 0; // j인덱스를 알기위해 선언
			if (numList[i][j] > max) {  // 이차배열 인덱스값이 max보다 크다면
				max = numList[i][j]; //max에 이차배열 값 저장
				maxI = i; //인덱스 저장
				maxJ = j; //인덱스 저장
			}
			j++; // j인덱스 1씩 증가
		}
	}

	cout << "가장 큰 값은 " << max << "이고,";
	cout << "i와 j는 각각 " << maxI << "," << maxJ << "입니다." << endl;
	cout << "검증결과 :" << numList[maxI][maxJ] << endl;

	return 0;
}