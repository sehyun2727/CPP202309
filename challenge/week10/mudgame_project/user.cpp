#include <iostream>
#include <string>
#include "user.h"
using namespace std;



void User::DecreaseHP(int dec_hp) {
	hp = dec_hp;
	hp--;
}

void User::DecreaseHPhigh(int dec_hp) {
	hp = dec_hp;
	hp = hp - 2;
}

void User::inclreaseHPhigh(int dec_hp) {
	hp = dec_hp;
	hp = hp + 2;
}

int User::GetHP()
{
	return hp;
}
