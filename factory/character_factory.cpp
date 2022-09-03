#include "character_factory.h"

std::shared_ptr<character> character_factory::create(character_types type, std::string name, int health, int mana)
{
    switch (type)
    {
    case character_types::knight:
        return std::make_shared<knight>(name, health, mana);
    case character_types::magician:
        return std::make_shared<magician>(name, health, mana);
    default:
        throw std::invalid_argument("Invalid character type");
    }
}
