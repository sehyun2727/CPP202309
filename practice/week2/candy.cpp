#include <iostream>
using namespace std;

int main() {
	int money;
	int candy_price;

	cout << "현재 가지고 있는 돈:";
	cin >> money;
	cout << "캔디의 가격";
	cin >> candy_price;

	int n_candies = money / candy_price; // 최대한 살 수 있는 캔디 개수
	cout << "최대한 살 수 잇는 사탕 수" << n_candies << endl; // 출력

	int change = money / candy_price; // 캔디 구입 후 남은 돈
	cout << "캔디 구입 후 남은 돈 =" << change << endl; // 출력
	return 0;

}