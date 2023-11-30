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
