#pragma once
#include <iostream>
#include <string>
using namespace std;

class Figure
{
protected:
    string nameFigure;

public:
    Figure();
    Figure(string newNameFigure);
    virtual float perimeter() = 0;
    virtual float area() = 0;
    virtual void display() const;
};