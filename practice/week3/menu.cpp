#include <iostream>
using namespace std;

int main() {
	int choice;

	cout << "1. 파일 저장" << endl;
	cout << "2. 저장 없이 닫기" << endl;
	cout << "3. 종료" << endl;
	cin >> choice; // 콘솔창에 입력된 값을 choice값에 저장

	switch (choice) //저장된 choice값에 해당하는 경우를 수행한다.
	{
		case 1:
			cout << "파일 저장을 선택했습니다." << endl;
			break;
		case 2: 
			cout << "파일 닫기를 선택했씁니다." << endl;
			break;
		case 3:
			cout << "프로그램을 종료합니다." << endl;
			break;
		default: // choice값이 1,2,3 내에 없으면 수행된다.
			cout << "잘못된 선택입니다." << endl;
			break;
	}
	return 0;
}