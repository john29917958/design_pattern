#include "character_factory.h"

character *character_factory::create(character_types type, std::string name, int health, int mana)
{
    switch (type)
    {
    case character_types::knight:
        return new knight(name, health, mana);
    case character_types::magician:
        return new magician(name, health, mana);
    default:
        throw std::invalid_argument("Invalid character type");
    }
}
