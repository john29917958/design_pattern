#include "character_factory.h"

character *character_factory::make(int id, std::string name, int health, int mana)
{
    switch (id)
    {
    case 1:
        return new knight(name, health, mana);
    case 2:
        return new magician(name, health, mana);
    default:
        throw std::invalid_argument("Unsupported character ID: " + id);
    }
}
