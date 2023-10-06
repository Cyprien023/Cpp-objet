#include "Character.hpp"
#pragma once


Character::Character()
{
    name = " ";
    life = 100;
    mana = 100;
}

Character::Character(string newName, int newLife, int newMana, string weaponName, int weaponDammages)
{
    name = newName;
    life = newLife;
    mana = newMana;
    Weapon newWeapon(weaponName, weaponDammages);
    equipedWeapon = newWeapon;
}

void Character::receiveDammages(int dammages)
{
    life -= dammages;
    if (life < 0)
    {
        life = 0;
    }
}

void Character::attack(Character &target)
{
    target.receiveDammages(equipedWeapon.getDammages());
}

void Character::takeLifePotion(int lifePoint)
{
    life += lifePoint;
    if (life > 100)
    {
        life = 100;
    }
}

void Character::switchWeapon(string weaponName, int weaponDammages)
{

}

bool Character::isAlive()
{
    if (life > 0)
    {
        return true; 
    }
    else
        return false;
}

void Character::display() const
{
    cout << name << " a " << life << " pv et  " << mana << " pm." << endl;
    equipedWeapon.display();
}

Character::~Character()
{

}

