#ifndef MEAL_H
#define MEAL_H

#include <string>

class meal
{
public:
    meal(std::string name);
    std::string get_name();

private:
    std::string _name;
};

#endif
