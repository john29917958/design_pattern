#ifndef RECIPE_H
#define RECIPE_H

#include <string>

class recipe
{
public:
    recipe(std::string food_name);
    std::string get_food_name();

private:
    std::string food_name_;
};

#endif
