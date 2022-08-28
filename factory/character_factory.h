#ifndef CHARACTER_FACTORY_H
#define CHARACTER_FACTORY_H

#include <string>
#include <stdexcept>
#include "characters/character.h"
#include "characters/knight.h"

class character_factory
{
public:
    character *make(int id, std::string name, int health, int mana);
};

#endif
