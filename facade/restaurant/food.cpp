#include "food.h"
#include <math.h>
#include <iostream>

food::food(std::string name)
{
    this->_name = name;
}

std::string food::get_name()
{
    return this->_name;
}
