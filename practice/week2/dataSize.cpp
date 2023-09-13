#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "char 크기 =" << sizeof('p') << endl; //문자형의 크기를 출력
	cout << "int 크기 =" << sizeof('10') << endl; //정수형의 크기를 출력
	cout << "double 크기 =" << sizeof('10.0') << endl; // 실수형의 크기를 출력

	return 0;
}
