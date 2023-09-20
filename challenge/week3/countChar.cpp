#include <iostream>
using namespace std;

int main() {
	int vowel = 0;
	int consonant = 0;
	cout << "영문자를 입력하고 ctrl+z를 치세요" << endl;

	char ch;

	while (cin >> ch) { //변수에 문자열값을 저장한다
		switch (ch){ // 문자열의 값을 확인하고 값에 해당하는 작업을 수행한다.
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			vowel += 1; // 변수가 자음이면 자음값을 +1
			break;
		default:
			consonant += 1; // 변수가 모음이면 모음값을 +1
			break;
		
		}
	}

	cout << "모음 : " << vowel << endl;
	cout << "자음 : " << consonant << endl;
}