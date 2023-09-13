#include <iostream>
#include <string>
using namespace std;

int main() {
	int x = 1;

	cout << "x = " << x++ << endl; //x 출력 후 증감연산자 수행
	cout << "x = " << x++ << endl; 
	cout << "x = " << ++x << endl; //x 출력 전 증감연산자 수행
	cout << "x = " << x-- << endl;
	cout << "x = " << x-- << endl;
	cout << "x = " << --x << endl;

	return 0;
}