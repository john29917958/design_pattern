#include "chef.h"

chef::chef(std::string name, sexes sex, std::string phone)
{
    this->_name = name;
    this->_sex = sex;
    this->phone = phone;
}

meal chef::cook(recipe *recipe)
{    
    meal m(recipe->get_meal_name());
    return m;
}

bool chef::get_is_cooking()
{
    return this->_is_cooking;
}
