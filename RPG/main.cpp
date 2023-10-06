#include <iostream>
#include <string>
#include "Character.cpp"
#include "Weapon.cpp"

using namespace std;

int main()
{
    Character geralt("Geralt", 30, 100, "bois", 20);
    Character yennefer("Yennefer", 100, 100, "fer", 30);
    


    geralt.attack(yennefer);
    geralt.takeLifePotion(50);
    geralt.attack(yennefer);
    geralt.attack(yennefer);
    yennefer.attack(geralt);
    geralt.attack(yennefer);
    geralt.attack(yennefer);


    geralt.display();
    yennefer.display();

    return 0; 
}