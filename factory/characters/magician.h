#ifndef MAGICIAN_H
#define MAGICIAN_H

#include "character.h"

class magician : public character
{
public:
    magician(std::string name, int health, int mana);
    void attack() override;
};

#endif
