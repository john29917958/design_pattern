#include "character.h"

character::character(std::string name, int health, int mana)
{
    this->name_ = name;
    this->health_ = health;
    this->mana_ = mana;
}

std::string character::get_name()
{
    return this->name_;
}

void character::set_name(std::string name)
{
    this->name_ = name;
}

int character::get_health()
{
    return this->health_;
}

void character::set_health(int health)
{
    this->health_ = health;
}

int character::get_mana()
{
    return this->mana_;
}

void character::set_mana(int mana)
{
    this->mana_ = mana;
}
