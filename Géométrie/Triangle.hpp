#pragma once
#include <iostream>
#include <string>
#include "Figure.hpp"
using namespace std;

class Triangle : public Figure
{
protected:
    int base;
    int height;

public:
    Triangle();
    Triangle(int newBase, int newHeight);
    float perimeter();
    float area();
    void display() const;
};