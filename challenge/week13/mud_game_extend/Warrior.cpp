#include "user.h"
using namespace std;

class Warrior : public User {
public:
	void doAttack() {
		cout << "베기사용" << endl;
	}
};