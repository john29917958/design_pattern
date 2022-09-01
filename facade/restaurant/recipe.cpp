#include "recipe.h"

recipe::recipe(std::string meal_name)
{
    this->_meal_name = meal_name;
}

std::string recipe::get_meal_name()
{
    return this->_meal_name;
}
