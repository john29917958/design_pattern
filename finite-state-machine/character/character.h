#ifndef CHARACTER_H
#define CHARACTER_H

class character
{
public:
    character();
    void set_health(int value);
    int get_health();
    void set_mana(int mana);
    int get_mana();
    void set_is_jumping(bool is_jumping);
    bool get_is_jumping();
protected:
    int health;
    int mana;
    bool is_jumping;
};

#endif
