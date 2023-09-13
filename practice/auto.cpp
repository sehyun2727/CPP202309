#include <iostream>
#include <string>
using namespace std;

auto add(int x, int y) { //자동타입추론 add 함수 선언
	return x + y;
}

int main()
{
	auto sum = add(5, 6); // 자동타입 변수 sum에 add(5, 6) 저장
	cout << sum; // sum 값 출력
	return 0;
}