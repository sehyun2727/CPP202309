#include <iostream>
using namespace std;

int main() {
	int number;
	cout << "숫자를 입력하시오";
	cin >> number; //입력받은 숫자를 변수에 저장

	if (number == 0) // 변수가 0일 시 아래 문장 수행
		cout << "zero\n";
	else if (number == 1) // 변수가 1일 시 아래 문장 수행
		cout << "one\n";
	else // 변수가 0,1에 해당하지 않을 시 아래 문장 수행
		cout << "many\n";

}