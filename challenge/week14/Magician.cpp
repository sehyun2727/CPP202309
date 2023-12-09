#include "user.h"
using namespace std;

class Maginain : public User {
public:
	void doAttack() {
		cout << "마법사용" << endl;
	}
};