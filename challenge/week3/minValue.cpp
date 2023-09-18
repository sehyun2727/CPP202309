#include <iostream>
using namespace std;

int main() {
	int a, b, c, largest;

	cout << "3개의 정수를 입력하시오 : ";
	cin >> a >> b >> c; // a, b, c 변수에 각각 정수 입력받아 저장

	if (a < b && a < c) // a가 b ,c보다 작다면 최소값은 a
		largest = a;
	else if (b < a && b < c) // b가 a,c 보다 작다면 최소값은 b
		largest = b;
	else				// 위 경우가 아니라면 c가 가장 작으로 최소값은 c
		largest = c;

	cout << "가장 작은 정수는 " << largest << endl;
	return 0;
}