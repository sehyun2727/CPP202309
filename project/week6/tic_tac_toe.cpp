#include <iostream>
using namespace std;

int main() {
	const int numCell = 3;
	char board[numCell][numCell]{};
	int x, y; //사용자에게 입력받는 x, y좌표를 저장할 변수
	

	//보드판 초기화
	for (x = 0; x < numCell; x++) {
		for (y = 0; y < numCell; y++) {
			board[x][y] = ' ';
		}
	}

	// 게임하는 코드
	int k = 0; //누구 차례인지 체크하기 위한 변수
	char currentUser = 'X'; // 현재 유저의 롤을 저장하기 위한 문자 변수
	while (true) {
		//누구 차례인지 출력
		switch (k % 2) {
		case 0:
			cout << k % 2 + 1 << "번 유저(X)의 차례입니다. -> ";
			currentUser = 'X';
			break;
		case 1:
			cout << k % 2 + 1 << "번 유저(0)의 차례입니다. -> ";
			currentUser = '0';
			break;
		}
		// 좌표 입력 받기
		cout << "(x,y) 좌표를 입력하세요: ";
		cin >> x >> y;
		
		

		// 입력받은 좌표의 유효성 체크
		if (x >= numCell || y >= numCell) {
			cout << x << ", " << y << ": ";
			cout << " x와 y들 중 하나가 칸을 벗어납니다." << endl;
			continue;
		}
		if (board[x][y] != ' ') {
			cout << x << ", " << y << ": 이미 돌이 차있습니다." << endl;
			continue;
		}
		// 입력받은 좌표에 현재 유저의 돌 놓기
		board[x][y] = currentUser;

		//현재 보드 판 출력
		for (int i = 0; i < numCell; i++) {
			cout << "---|---|---" << endl;
			for (int j = 0; j < numCell; j++) {
				cout << board[i][j];
				if (j == numCell - 1) { // | 출력되기 전에 줄바꿈
					break;
				}
				cout << "  |";
			}
			cout << endl;
		}
		cout << "---|---|---" << endl;
		k++;

		// 모든 칸 다 찼는지 체크하기
		int checked = 0;
		for (int i = 0; i < numCell; i++) {
			for (int j = 0; j < numCell; j++) {
				if (board[i][j] == ' ') { // 현재 보드판에 비어있는 칸 수 만큼 값을 가짐
					checked++;
				}
			}
		}
		if (checked == 0) { // 모든칸이 다 찼다면 종료
			cout << "모든 칸이 다 찼습니다. 종료합니다." << endl;
			break;
		}

		//승자 체크하기
		bool isWin = false;
		// 가로세로돌 체크하기
		for (int i = 0; i < numCell; i++) {
			if (board[i][0] == currentUser && board[i][1] == currentUser && board[i][2] == currentUser) {
				cout << "가로에 모두 돌이 놓였습니다!: ";
				isWin = true;
			}
			if (board[0][i] == currentUser && board[1][i] == currentUser && board[2][i] == currentUser) {
				cout << "가로에 모두 돌이 놓였습니다!: ";
				isWin = true;
			}
		}
		// 대각선 돌 체크하기
		if (board[0][0] == currentUser && board[1][1] == currentUser && board[2][2] == currentUser) {
			cout << "왼쪽 위에서 오른쪽 아래 대각선으로 모두 돌이 놓였습니다. ";
			isWin = true;
		}
		if (board[0][2] == currentUser && board[1][1] == currentUser && board[2][0] == currentUser) {
			cout << "오른쪽 위에서 왼쪽 아래 대각선으로 모두 돌이 놓였습니다. ";
			isWin = true;
		}
		if (isWin == true) {
			cout << k % 2 + 1 << "번 유저(" << currentUser << ")의 승리입니다!" << endl;
			cout << " 종료합니다." << endl;
			break;
		}
	}
	return 0;
}