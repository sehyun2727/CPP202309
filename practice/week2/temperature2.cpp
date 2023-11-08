#include <iostream>
using namespace std;

int main() {
	double f_temp;
	double c_temp;

	cout << "¼·¾¾¿Âµµ :";
	cin >> c_temp; // ¼·¾¾¿Âµµ ÀÔ·Â

	f_temp = c_temp * 1.8 + 32; // ¼·¾¾¿Âµµ¸¦ È­¾¾¿Âµµ·Î º¯È¯
	cout << "¼·¾¾¿Âµµ = " << f_temp << endl;
	return 0;
}