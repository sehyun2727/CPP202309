#pragma once
#include <iostream>
#include <string>

using namespace std;

class User {
private:
	int hp;
private:
	void DecreaseHP(int dec_hp);
	void DecreaseHPhigh(int dec_hp);
	void InclreaseHP(int dec_hp);
	int GetHP();
};