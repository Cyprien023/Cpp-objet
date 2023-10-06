#include "Figure.hpp"


Figure::Figure()
{

}

Figure::Figure(string newNameFigure)
{
    nameFigure = newNameFigure;
}

void Figure::display() const
{
    cout << "je suis un" << "" << nameFigure << endl; 
}