#include "meal.h"

meal::meal(std::string name)
{
    this->_name = name;
}

std::string meal::get_name()
{
    return this->_name;
}
