#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>

class character
{
public:
    character(std::string name, int health, int mana);
    std::string get_name();
    void set_name(std::string name);
    int get_health();
    void set_health(int health);
    int get_mana();
    void set_mana(int mana);
    virtual void attack() = 0;

private:
    std::string name_;
    int health_;
    int mana_;
};

#endif