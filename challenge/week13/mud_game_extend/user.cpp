#include "user.h"

User::User() : hp(20) {} // 생성자 구현

void User::DecreaseHP() {
    hp--;
}

void User::DecreaseHPhigh() {
    hp -= 2;
}

void User::IncreaseHP() {
    hp += 2;
}

int User::GetHP() const {
    return hp;
}

void User::doAttack() {
    std::cout << "공격합니다." << std::endl;
}