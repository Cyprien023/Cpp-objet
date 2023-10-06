#include "Rectangle.hpp"

Rectangle::Rectangle()
{

}

Rectangle::Rectangle(int newLenght, int newWidth)
{
    lenght = newLenght;
    width = newWidth; 
}

void Rectangle::display() const
{
    cout << "Ceci est un Rectangle" << endl;
}

float Rectangle::perimeter()
{
    return (lenght + width) * 2;
}

float Rectangle::area()
{
    return lenght * width;
}