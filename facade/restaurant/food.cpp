#include "food.h"
#include <math.h>
#include <iostream>

food::food(std::string name)
{
    this->name_ = name;
}

std::string food::get_name()
{
    return this->name_;
}
