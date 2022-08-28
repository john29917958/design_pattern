#pragma once
#ifndef KNIGHT_H
#define KNIGHT_H

#include <string>
#include "character.h"

class knight : public character
{
public:
    knight(std::string name, int health, int mana);
    void attack() override;
};

#endif
