#include <iostream>
#include <string>
using namespace std;

int main() {
	int two = 2; //정수형 변수 선언
	int eight = 8;
	int sum1 = 2;
	int sum2 = 2;

	sum1 = sum1 + two; // 변수에 값 저장
	sum2 += eight; // sum2 = sum2 + eight
	cout << " sum1 = " << sum1 << endl; // 해당 문자열과 변수 출력
	cout << " sum2 = " << sum2 << endl;
	return 0;
}