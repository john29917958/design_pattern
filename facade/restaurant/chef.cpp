#include "chef.h"

chef::chef(std::string name, sexes sex, std::string phone)
{
    this->_name = name;
    this->_sex = sex;
    this->phone = phone;
}

std::shared_ptr<food> chef::cook(std::shared_ptr<recipe> recipe)
{
    std::shared_ptr<food> m = std::make_shared<food>(recipe->get_meal_name());
    return m;
}

bool chef::get_is_cooking()
{
    return this->_is_cooking;
}
