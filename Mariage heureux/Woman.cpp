#include "Woman.hpp"
#include "Person.hpp"

Woman::Woman()
{
}

Woman::Woman(string newFirstName, string newLastName, int newAge) : Person(newFirstName, newLastName, newAge)
{
}

bool Woman::isSingle()
{
    return (partner.getFirstName() == "" && partner.getLastName() == "");
}

Person Woman::getPartner()
{
    return partner;
}

void Woman::setPartner(Person newPartner)
{
    partner = newPartner;
}

void Woman::display()
{
    Person::display();
    if (!isSingle())
    {
        cout << "elle est marié a " << partner.getFirstName() << partner.getLastName() << endl;
    }
   
}