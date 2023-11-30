#pragma once
#include <iostream>
#include <string>

class User {
public:
    User(); // 생성자 선언
    void DecreaseHP(); // 체력 감소
    void DecreaseHPhigh(); // 체력 크게 감소
    void IncreaseHP(); // 체력 증가
    int GetHP() const; // 현재 체력 조회

private:
    int hp; // 체력을 나타내는 멤버 변수
};
