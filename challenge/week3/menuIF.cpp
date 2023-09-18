#include <iostream>
using namespace std;

int main() {
	int choice;

	cout << "1. 파일 저장" << endl;
	cout << "2. 저장 없이 닫기" << endl;
	cout << "3. 종료" << endl;
	cin >> choice; // 콘솔창에 입력된 값을 choice값에 저장

	if(choice == 1) //변수가 1일 시 아래 문장 실행 후 탈출
		cout << "파일 저장을 선택했습니다." << endl;
	else if(choice == 2) //변수가 2일 시 아래 문장 실행 후 탈출
		cout << "파일 닫기를 선택했씁니다." << endl;
	else if(choice == 3) //변수가 3일 시 아래 문장 실행 후 탈출
		cout << "프로그램을 종료합니다." << endl;
	else // 변수가 아무 값에도 해당하지 않을 시 아래 문장 실행 후 탈출
		cout << "잘못된 선택입니다." << endl;

	return 0;

}