#ifndef RESTAURANT_H
#define RESTAURANT_H

#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include "recipe.h"
#include "meal.h"
#include "chef.h"

class restaurant
{
public:
    restaurant();
    void load_chefs();
    void load_recipes();
    meal *order(std::string name);

private:
    recipe *find_recipe(std::string name);
    chef *find_chef();
    std::vector<chef *> _chefs;
    std::vector<recipe *> _recipes;
};

#endif
