#include <iostream>
#include <string>
#pragma once

using namespace std;


class Weapon
{
private:
    string name;
    int dammages;

public:
    Weapon();

    Weapon(string newName, int newDammages);
    
    void change(string newName, int newDammages);
    void display() const;
    int getDammages() const;
    void changeWeapon(string newName, int newDammages);
    void attack(Weapon &target, int dammages);
};