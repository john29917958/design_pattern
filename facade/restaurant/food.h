#ifndef FOOD_H
#define FOOD_H

#include <string>

class food
{
public:
    food(std::string name);
    std::string get_name();

private:
    std::string _name;
};

#endif
