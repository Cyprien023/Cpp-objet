#pragma once
#include <iostream>
#include <string>
#include "Figure.hpp"
using namespace std;

class Rectangle : public Figure
{
protected:
    int lenght;
    int width;

public:
    Rectangle();
    Rectangle(int newLenght, int newWidth);
    float perimeter();
    float area();
    void display() const;
};