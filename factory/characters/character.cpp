#include "character.h"

character::character(std::string name, int health, int mana)
{
    this->_name = name;
    this->_health = health;
    this->_mana = mana;
}

std::string character::get_name()
{
    return this->_name;
}

void character::set_name(std::string name)
{
    this->_name = name;
}

int character::get_health()
{
    return this->_health;
}

void character::set_health(int health)
{
    this->_health = health;
}

int character::get_mana()
{
    return this->_mana;
}

void character::set_mana(int mana)
{
    this->_mana = mana;
}
