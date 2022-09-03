#include <stdio.h>
#include "magician.h"

magician::magician(std::string name, int health, int mana) : character(name, health, mana)
{
}

void magician::attack()
{
    printf("Magician attacks!\n");
}
