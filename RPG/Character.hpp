#include <iostream>
#include <string>
#include "Weapon.hpp"
#pragma once

using namespace std;

class Character
{
private:
    string name;
    int life;
    int mana;
    Weapon equipedWeapon;

public:
    Character();

    Character(string newname, int newLife, int newMana, string weaponName, int weaponDammages);

    ~Character();

    void receiveDammages(int dammages);
    void attack(Character &target);
    void takeLifePotion(int lifePoints);
    void switchWeapon(string weaponName, int weaponDammages);
    bool isAlive();
    void display() const;
};

