#pragma once
#include <iostream>
#include <string>

class User {
public:
    User(); // ������ ����
    virtual void doAttack();
    void DecreaseHP(); // ü�� ����
    void DecreaseHPhigh(); // ü�� ũ�� ����
    void IncreaseHP(); // ü�� ����
    int GetHP() const; // ���� ü�� ��ȸ

private:
    int hp; // ü���� ��Ÿ���� ��� ����
};
