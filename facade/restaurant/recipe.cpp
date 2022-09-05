#include "recipe.h"

recipe::recipe(std::string meal_name)
{
    this->food_name_ = meal_name;
}

std::string recipe::get_food_name()
{
    return this->food_name_;
}
