#include <iostream>
using namespace std;

// ������ �����ϴ� �� �ʿ��� ���� ����
const int numCell = 10; // �������� ���� ���� ����
int k = 0; // ���� �������� üũ�ϱ� ���� ����
char currentUser = 'X'; // ���� ������ ���� �����ϱ� ���� ����
char board[numCell][numCell]{}; // �������� ��Ÿ���� 2���� �迭
int x, y = 0; // ����ڿ��� xy��ǥ���� �Է¹ޱ� ���� ����

int isVaild(int a, int b) {
	// 3. �Է¹��� ��ǥ�� ��ȿ�� üũ
	// TODO FUNC 1: isValid �Լ� ���� �� ȣ��
	if (a >= numCell || b >= numCell) {// ��ǥ ������ �����
		cout << a << "," << b << ": x�� y���� �ϳ��� ĭ�� ����ϴ�. " << endl;
		return 1;
	}
	if (board[a][b] != ' ') {// ��ǥ������ �Է°��� �ߺ��ɶ�
		cout << a << "," << b << ": �̹� ���� ���ֽ��ϴ�. " << endl;
		return 2;
	}
	return 0;
}


bool checkWin() {

	bool isWin = false; // �¸� ����
	// TODO FUNC2: 6.1���� 6.2���� checkWin �Լ� ���� �� ȣ��
	// 6.1. ����/���� �� üũ�ϱ�
	for (int i = 0; i < numCell; i++) {
		if (board[i][0] == currentUser && board[i][1] == currentUser && board[i][2] == currentUser
			&& board[i][3] == currentUser && board[i][4] == currentUser && board[i][5] == currentUser
			&& board[i][6] == currentUser && board[i][7] == currentUser && board[i][8] == currentUser && board[i][9] == currentUser) {
			cout << "���ο� ��� ���� �������ϴ�!!";
			isWin = true;
			break;
		}
		if (board[0][i] == currentUser && board[1][i] == currentUser && board[2][i] == currentUser
			&& board[3][i] == currentUser && board[4][i] == currentUser && board[5][i] == currentUser
			&& board[6][i] == currentUser && board[7][i] == currentUser && board[8][i] == currentUser && board[9][i] == currentUser) {
			cout << "���ο� ��� ���� �������ϴ�!!";
			isWin = true;
			break;
		}
	}
	// 6.2. �밢���� üũ�ϱ�
	// TODO 1.3: numCell�� ���� �밢�� ���� üũ �ڵ�� Ȯ��
	// HINT: for ��
	if (board[0][0] == currentUser && board[1][1] == currentUser && board[2][2] == currentUser
		&& board[3][3] == currentUser && board[4][4] == currentUser && board[5][5] == currentUser
		&& board[6][6] == currentUser && board[7][7] == currentUser && board[8][8] == currentUser && board[9][9] == currentUser) {
		cout << "���� ������ ������ �Ʒ� �밢������ ��� ���� �������ϴ�!" << endl;
		isWin = true;
	}
	if (board[0][9] == currentUser && board[1][8] == currentUser && board[2][7] == currentUser
		&& board[3][6] == currentUser && board[4][5] == currentUser && board[5][4] == currentUser
		&& board[6][3] == currentUser && board[7][2] == currentUser && board[8][1] == currentUser && board[9][0] == currentUser) {
		cout << "������ ������ ���� �Ʒ� �밢������ ��� ���� �������ϴ�!" << endl;
		isWin = true;
	}

	return isWin;
}

int main() {


	// ������ �ʱ�ȭ
	for (int i = 0; i < numCell; i++) {
		for (int j = 0; j < numCell; j++) {
			board[i][j] = ' ';
		}
	}

	// ������ ���� �ݺ�
	while (true) {
		// 1. ���� �������� ���
		// TODO 1.1: 3�ο� �������� ����
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
		cout << k % 3 + 1 << "�� ����(" << currentUser << ")�� �����Դϴ�. -> ";

		// 2. ��ǥ �Է� �ޱ�
		cout << "(x, y) ��ǥ�� �Է��ϼ���: ";
		int x, y;
		cin >> x >> y;

		// 3. �Է¹��� ��ǥ�� ��ȿ�� üũ
		int vaild = isVaild(x, y);
		if (vaild == 1 || vaild == 2) {
			continue;
		}


		// 4. �Է¹��� ��ǥ�� ���� ������ �� ����
		board[x][y] = currentUser;

		// 5. ���� ���� �� ���
		// TODO 1.2: numCell ���ڿ� ���� ������ ���
		for (int i = 0; i < numCell; i++) {
			cout << "---|---|---|---|---|---|---|---|---|---" << endl;
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
		cout << "---|---|---|---|---|---|---|---|---|---" << endl;

		//�¸� ���� Ȯ��
		bool isWin = false;
		isWin = checkWin();
	

		// �¸��ڰ� �����Ǿ����� �ش� �÷��̾ ����ϰ� ������ �����Ѵ�.
		if (isWin == true) {
			cout << k % 3 + 1 << "�� ����(" << currentUser << ")�� �¸��Դϴ�!" << endl;
			break;
		}

		// 7. ��� ĭ �� á���� üũ�ϱ�
		int checked = 0;
		for (int i = 0; i < numCell; i++) {
			for (int j = 0; j < numCell; j++) {
				if (board[i][j] == ' ') {
					checked++;
				}
			}
		}
		if (checked == 0) {
			cout << "��� ĭ�� �� á���ϴ�.  �����մϴ�. " << endl;
			break;
		}

		k++;
	}

	return 0;
}