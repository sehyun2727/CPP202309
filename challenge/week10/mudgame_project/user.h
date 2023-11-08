#pragma once
#include <iostream>
#include <string>

using namespace std;

class User {
public:
	int hp;
public:
	void DecreaseHP(int dec_hp);
	void DecreaseHPhigh(int dec_hp);
	void inclreaseHPhigh(int dec_hp);
	int GetHP();
};