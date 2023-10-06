#include "Triangle.hpp"

Triangle::Triangle()
{

}

Triangle::Triangle(int newBase, int newHeight)
{
    base = newBase;
    height = newHeight;
}

void Triangle::display() const
{
    cout << "Ceci est un triangle" << endl;
}

float Triangle::perimeter()
{
    return base + (height * 2);
}

float Triangle::area()
{
    return (base * height) / 2;
}