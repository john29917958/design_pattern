#include "character.h"

character::character()
{
    this->health = 100;
    this->mana = 100;
    this->is_jumping = false;
}

int character::get_health()
{
    return this->health;
}

void character::set_health(int value)
{
    this->health = value;
}

int character::get_mana()
{
    return this->mana;
}

void character::set_mana(int value)
{
    this->mana = value;
}

bool character::get_is_jumping()
{
    return this->is_jumping;
}

void character::set_is_jumping(bool value)
{
    this->is_jumping = value;
}
