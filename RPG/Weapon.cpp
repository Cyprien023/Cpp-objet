#include "Weapon.hpp"
#pragma once


Weapon::Weapon()
{
    name = "Épée en bois";
    dammages = 10;

}

Weapon::Weapon(string newName, int newDammages)
{
    name = newName;
    dammages = newDammages;
}



void Weapon::change(string newName, int newDammages)
{
    name = newName;
    dammages = newDammages;
}

void Weapon::display() const
{
    cout << name << " " << dammages << "  " << endl;
}

int Weapon::getDammages() const 
{
    return dammages; 
}

void Weapon::changeWeapon(string newName, int newDammages)
{
    
}

void Weapon::attack(Weapon &target, int dammages)
{
    target.dammages = target.dammages -25;
}
