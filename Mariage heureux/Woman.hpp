#pragma once
#include <iostream>
#include <string>
using namespace std;

#include "Person.hpp"

class Woman : public Person
{
private:
    Person partner;
    
public:
    Woman();
    Woman(string newFirstName, string newLastName, int newAge);
    bool isSingle();
    Person getPartner();
    void setPartner(Person newPartner);
    void display();
};