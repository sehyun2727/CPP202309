#include <iostream>
using namespace std;

// 게임을 진행하는 데 필요한 변수 선언
const int numCell = 10; // 보드판의 가로 세로 길이
int k = 0; // 누구 차례인지 체크하기 위한 변수
char currentUser = 'X'; // 현재 유저의 돌을 저장하기 위한 변수
char board[numCell][numCell]{}; // 보드판을 나타내는 2차원 배열
int x, y = 0; // 사용자에게 xy좌표값을 입력받기 위한 변수

int isVaild(int a, int b) {
	// 3. 입력받은 좌표의 유효성 체크
	// TODO FUNC 1: isValid 함수 생성 후 호출
	if (a >= numCell || b >= numCell) {// 좌표 범위를 벗어날때
		cout << a << "," << b << ": x와 y둘중 하나가 칸을 벗어납니다. " << endl;
		return 1;
	}
	if (board[a][b] != ' ') {// 좌표범위의 입력값이 중복될때
		cout << a << "," << b << ": 이미 돌이 차있습니다. " << endl;
		return 2;
	}
	return 0;
}


bool checkWin() {

	bool isWin = false; // 승리 여부
	// TODO FUNC2: 6.1부터 6.2까지 checkWin 함수 생성 후 호출
	// 6.1. 가로/세로 돌 체크하기
	for (int i = 0; i < numCell; i++) {
		if (board[i][0] == currentUser && board[i][1] == currentUser && board[i][2] == currentUser
			&& board[i][3] == currentUser && board[i][4] == currentUser && board[i][5] == currentUser
			&& board[i][6] == currentUser && board[i][7] == currentUser && board[i][8] == currentUser && board[i][9] == currentUser) {
			cout << "가로에 모두 돌이 놓였습니다!!";
			isWin = true;
			break;
		}
		if (board[0][i] == currentUser && board[1][i] == currentUser && board[2][i] == currentUser
			&& board[3][i] == currentUser && board[4][i] == currentUser && board[5][i] == currentUser
			&& board[6][i] == currentUser && board[7][i] == currentUser && board[8][i] == currentUser && board[9][i] == currentUser) {
			cout << "세로에 모두 돌이 놓였습니다!!";
			isWin = true;
			break;
		}
	}
	// 6.2. 대각선을 체크하기 (수정완료)
	// TODO 1.3: numCell에 맞춘 대각선 빙고 체크 코드로 확장
	// HINT: for 문
	int checkline1 = 0;
	int checkline2 = 0;
	for (int i = 0; i < numCell; i++) {
		if (board[i][i] == board[i + 1][i + 1] && board[i][i] != ' ') {
			checkline1++;
		}
		// 역 대각선 for문 작성에 어려움을 느껴 완성하지 못했습니다. 
		if (board[0][9] == currentUser && board[1][8] == currentUser && board[2][7] == currentUser
			&& board[3][6] == currentUser && board[4][5] == currentUser && board[5][4] == currentUser
			&& board[6][3] == currentUser && board[7][2] == currentUser && board[8][1] == currentUser && board[9][0] == currentUser) {
			cout << "오른쪽 위에서 왼쪽 아래 대각선으로 모두 돌이 놓였습니다!" << endl;
			isWin = true;
		}
	}
	if (checkline1 == 9) {
		isWin = true;
	}
	return isWin;
}

int main() {


	// 보드판 초기화
	for (int i = 0; i < numCell; i++) {
		for (int j = 0; j < numCell; j++) {
			board[i][j] = ' ';
		}
	}

	// 게임을 무한 반복
	while (true) {
		// 1. 누구 차례인지 출력
		// TODO 1.1: 3인용 게임으로 변경
		switch (k % 3) {
		case 0:
			currentUser = 'X';
			break;
		case 1:
			currentUser = 'O';
			break;
		case 2:
			currentUser = 'H';
			break;
		}
		cout << k % 3 + 1 << "번 유저(" << currentUser << ")의 차례입니다. -> ";

		// 2. 좌표 입력 받기
		cout << "(x, y) 좌표를 입력하세요: ";
		int x, y;
		cin >> x >> y;

		// 3. 입력받은 좌표의 유효성 체크
		int vaild = isVaild(x, y);
		if (vaild == 1 || vaild == 2) {
			continue;
		}


		// 4. 입력받은 좌표에 현재 유저의 돌 놓기
		board[x][y] = currentUser;

		// 5. 현재 보드 판 출력 (수정완료)
		// TODO 1.2: numCell 숫자에 맞춘 보드판 출력
		for (int i = 0; i < numCell; i++) {
			for (int z = 0; z < numCell - 1; z++) {
				cout << "---|";
			}
			cout << "---" << endl;
			for (int j = 0; j < numCell; j++)
			{
				cout << board[i][j];
				if (j == numCell - 1) {
					break;
				}
				cout << "  |";
			}
			cout << endl;
		}
		for (int z = 0; z < numCell - 1; z++) {
			cout << "---|";
		}
		cout << "---" << endl;

		//승리 여부 확인
		bool isWin = false;
		isWin = checkWin();


		// 승리자가 결정되었으면 해당 플레이어를 출력하고 게임을 종료한다.
		if (isWin == true) {
			cout << k % 3 + 1 << "번 유저(" << currentUser << ")의 승리입니다!" << endl;
			break;
		}

		// 7. 모든 칸 다 찼는지 체크하기
		int checked = 0;
		for (int i = 0; i < numCell; i++) {
			for (int j = 0; j < numCell; j++) {
				if (board[i][j] == ' ') {
					checked++;
				}
			}
		}
		if (checked == 0) {
			cout << "모든 칸이 다 찼습니다.  종료합니다. " << endl;
			break;
		}

		k++;
	}

	return 0;
}