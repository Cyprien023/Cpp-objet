#include "Square.hpp"

Square::Square()
{

}

Square::Square(int newLenght)
{
    lenght = newLenght;
}

void Square::display() const
{
    cout << "Ceci est un square" << endl;
}

float Square::perimeter()
{
    return lenght * 4;
}

float Square::area()
{
    return lenght * lenght;
}