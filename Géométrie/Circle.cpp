#include "Circle.hpp"

Circle::Circle()
{

}

Circle::Circle(int newRadius)
{
    radius = newRadius; 
}

void Circle::display() const
{
    cout << "Ceci est un Circle" << endl;
}

float Circle::perimeter()
{
    return 2 * 3,14 * radius;
}

float Circle::area()
{
    return radius * radius;
}