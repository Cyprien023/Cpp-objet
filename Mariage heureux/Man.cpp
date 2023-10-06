#include "Man.hpp"
#include "Person.hpp"

Man::Man()
{
}

Man::Man(string newFirstName, string newLastName, int newAge) : Person(newFirstName, newLastName, newAge)
{
}

bool Man::isSingle()
{
    return (partner.getFirstName() == "" && partner.getLastName() == "");
}

Person Man::getPartner()
{
    return partner;
}

void Man::setPartner(Person newPartner)
{
    partner = newPartner;
}

void Man::display()
{
    Person::display();
    if (!isSingle())
    {
        cout << "il est marié a " << partner.getFirstName() << partner.getLastName() << endl;
    }
}