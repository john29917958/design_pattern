#include "restaurant.h"

restaurant::restaurant()
{
}

void restaurant::load_chefs()
{
    std::ifstream file_stream("res\\chefs");
    std::string line;
    while (std::getline(file_stream, line))
    {
        std::stringstream str_stream(line);
        std::string token;
        std::vector<std::string> tokens;

        while (std::getline(str_stream, token, '\t'))
        {
            tokens.push_back(token);
        }

        this->_chefs.push_back(new chef(
            tokens.at(0),
            sexes_table.find(tokens.at(1))->second,
            tokens.at(2)));
    }
}

void restaurant::load_recipes()
{
    std::ifstream file_stream("res\\recipes");
    std::string line;
    while (std::getline(file_stream, line))
    {
        this->_recipes.push_back(new recipe(line));
    }    
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
