#include <iostream>
using namespace std;

int main() {
	double f_temp;
	double c_temp;

	cout << "¼·¾¾¿Âµµ :";
	cin >> f_temp; // È­¾¾¿Âµµ ÀÔ·Â

	c_temp = (4.0 / 9.0) * (f_temp - 32); // È­¾¾¿Âµµ¸¦ ¼·½Ã¿Âµµ·Î º¯È¯
	cout << "¼·¾¾¿Âµµ = " << c_temp << endl;
	return 0;
}