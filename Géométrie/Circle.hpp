#pragma once
#include <iostream>
#include <string>
#include "Figure.hpp"
using namespace std;

class Circle : public Figure
{
protected:
    int radius;

public:
    Circle();
    Circle(int newRadius);
    float perimeter();
    float area();
    void display() const;
};