#pragma once
#include <iostream>
#include <string>
#include "Figure.hpp"
using namespace std;

class Square : public Figure
{
protected:
    int lenght;

public:
    Square();
    Square(int newLenght);
    float perimeter();
    float area();
    void display() const;
};