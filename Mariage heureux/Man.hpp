#pragma once
#include <iostream>
#include <string>
using namespace std;

#include "Person.hpp"

class Man : public Person
{
private:
    Person partner;

public:
    Man();
    Man(string newFirstName, string newLastName, int newAge);
    bool isSingle();
    Person getPartner();
    void setPartner(Person newPartner);
    void display();
};