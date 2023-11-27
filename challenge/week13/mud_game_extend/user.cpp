#include <iostream>
#include <string>
#include "user.h"
using namespace std;



void User::HpConstructor(int inc_hp) {
	hp = inc_hp;
}

void User::DecreaseHP(int inc_hp) {
	hp = inc_hp;
	hp--;
}

void User::DecreaseHPhigh(int inc_hp) {
	hp = inc_hp;
	hp = hp - 2;
}

void User::InclreaseHP(int inc_hp) {
	hp = inc_hp;
	hp = hp + 2;
}

int User::GetHP()
{
	return hp;
}
