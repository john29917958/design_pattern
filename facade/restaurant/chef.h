#ifndef CHEF_H
#define CHEF_H

#include "recipe.h"
#include "meal.h"

enum class sexes
{
    male,
    female
};

class chef
{
public:
    chef(std::string name, sexes sex, std::string phone);
    meal *cook(recipe *recipe);
    bool get_is_cooking();

private:
    std::string _name;
    sexes _sex;
    std::string phone;
    bool _is_cooking;
};

#endif
