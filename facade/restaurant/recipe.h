#ifndef RECIPE_H
#define RECIPE_H

#include <string>

class recipe
{
public:
    recipe(std::string meal_name);
    std::string get_meal_name();

private:
    std::string _meal_name;
};

#endif
