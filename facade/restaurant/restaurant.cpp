#include "restaurant.h"

restaurant::restaurant()
{
}

void restaurant::load_chefs()
{
    this->_chefs.push_back(new chef("John Doe", sexes::male, "0912-345-678"));
    this->_chefs.push_back(new chef("Alice", sexes::female, "0923-456-789"));
    this->_chefs.push_back(new chef("Jack", sexes::male, "0934-567-890"));
}

void restaurant::load_recipes()
{
    this->_recipes.push_back(new recipe("Hamburger"));
    this->_recipes.push_back(new recipe("French Fries"));
    this->_recipes.push_back(new recipe("Fried Chicken"));
}

meal *restaurant::order(std::string name)
{
    recipe *recipe = this->find_recipe(name);
    chef *chef = this->find_chef();
    meal *meal = chef->cook(recipe);

    return meal;
}

chef *restaurant::find_chef()
{
    for (int i = 0; i < this->_chefs.size(); i++)
    {
        if (!this->_chefs.at(i)->get_is_cooking())
        {
            return this->_chefs.at(i);
        }
    }

    return nullptr;
}

recipe *restaurant::find_recipe(std::string name)
{
    for (int i = 0; i < this->_recipes.size(); i++)
    {
        if (this->_recipes.at(i)->get_meal_name() == name)
        {
            return this->_recipes.at(i);
        }
    }

    return nullptr;
}
