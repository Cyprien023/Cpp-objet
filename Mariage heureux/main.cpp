#include <iostream>
#include "Person.cpp"
#include "Woman.cpp"
#include "Man.cpp"

using namespace std;

int main()
{
    Woman Marie("Marie", " DeLavigne", 32);
    Man Jean("Jean", " Olivier", 34);

    Jean.getOld();
    Marie.getOld();
    Jean.isSingle();
    Marie.isSingle();
    Jean.setPartner(Marie);
    Marie.setPartner(Jean);
    


    Marie.display();
    Jean.display();
    return 0;
}