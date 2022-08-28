#include <stdio.h>
#include "knight.h"

knight::knight(std::string name, int health, int mana) : character(name, health, mana)
{
}

void knight::attack()
{
    printf("Knight attacks!\n");
}