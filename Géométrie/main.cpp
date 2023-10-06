#include <iostream>
#include <vector>

using namespace std;

#include "Figure.cpp"
#include "Triangle.cpp"
#include "Square.cpp"
#include "Rectangle.cpp"
#include "Circle.cpp"


void introduce(Figure const &f)
{

    f.display();

};



int main()
{

    vector<Figure *> figures;

    figures.push_back(new Triangle(2, 4));
    figures.push_back(new Square(4));
    figures.push_back(new Rectangle(2,4));
    figures.push_back(new Circle(4));

    for (int i = 0; i < figures.size(); i++)
    {
        figures[i]->display();
        cout << "de périmètre :" << "" << figures[i]->perimeter() << endl;
        cout << "et d'aire :" << "" << figures[i]->area() << endl;
        cout << endl;
    }



    return 0;
};
