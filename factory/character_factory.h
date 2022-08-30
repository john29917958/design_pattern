#ifndef CHARACTER_FACTORY_H
#define CHARACTER_FACTORY_H

#include <string>
#include <stdexcept>
#include "characters/character.h"
#include "characters/knight.h"
#include "characters/magician.h"

enum class character_types
{
    knight,
    magician
};

class character_factory
{
public:
    /**
     * @brief Creates a character instance.
     *
     * @param type The character type.
     * @param name The name of the character
     * @param health The health value of the character.
     * @param mana The mana value of the character
     * @return character* Returns a character instance.
     */
    character *create(character_types type, std::string name, int health, int mana);
};

#endif
