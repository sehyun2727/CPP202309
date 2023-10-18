#include <iostream>
#include <string>
using namespace std;

//문자열의 모든 대문자를 소문자로 변환
string toLowerStr(string str) {
	for (char& c : str) {
		c = tolower(c);
	}
	return str;
}
//문자열의 모든 소문자를 대문자로 변환
string toUpperStr(string str) {
	for (char& c : str) {
		c = toupper(c);
	}
	return str;
}

int calcHammingDist(string s1, string s2) {
	int count = 0;
		// 두 배열의 길이가 다를 시 오류코드 출력
		if (s1.length() != s2.length())
			cout << "오류 : 길이가 다름" << endl;
		// 두 배열의 문자가 같다면 같은 인덱스에 다른 값이 있는지 확인
		else {
			for (int i = 0; i < s1.length(); i++) {
				if (s1[i] != s2[i]) {
					count++;
				}
			}
			cout << "해밍 거리는 " << count << endl;
		}
	
	return 0;
}


	int main() {
		string s1, s2;

		// s1과 s2에 각각의 입력값 저장
		cout << "DNA1 : ";
		cin >> s1;
		cout << "DNA2 : ";
		cin >> s2;

		//두 문자열의 대문자를 소문자로 변환
		s1 = toLowerStr(s1);
		s2 = toLowerStr(s2);

		//해밍 함수 적용
		calcHammingDist(s1, s2);
		return 0;
	}
