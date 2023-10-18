#include <iostream>
#include <string>
using namespace std;

int main() {
	string s1, s2;
	int count = 0;

	// s1과 s2에 각각의 입력값 저장
	cout << "DNA1 : ";
	cin >> s1;
	cout << "DNA2 : ";
	cin >> s2;

	// 두 배열의 길이가 다를 시 에러메세지 출력
	if (s1.length() != s2.length())
		cout << "오류 : 길이가 다름" << endl;

	// 두 배열의 문자가 같다면 같은 인덱스에 다른 값이 있는지 확인
	else {
		for (int i = 0; i < s1.length(); i++) {
			if (s1[i] != s2[i])
				count++;
		}
		cout << "해밍 거리는 " << count << endl;
	}
}