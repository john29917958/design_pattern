#include "restaurant.h"

restaurant::restaurant()
{
}

void restaurant::load_chefs(std::string path)
{
    std::ifstream file_stream(path);
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

        this->chefs_.push_back(std::make_shared<chef>(tokens.at(0),
            sexes_table.find(tokens.at(1))->second,
            tokens.at(2)));
    }
}

void restaurant::load_recipes(std::string path)
{
    std::ifstream file_stream(path);
    std::string line;
    while (std::getline(file_stream, line))
    {        
        this->recipes_.push_back(std::make_shared<recipe>(line));
    }
}

std::shared_ptr<food> restaurant::order(std::string name)
{
    std::shared_ptr<recipe> recipe = this->find_recipe(name);
    if (recipe == nullptr)
    {
        return nullptr;
    }

    std::shared_ptr<chef> chef = this->find_chef();
    if (chef == nullptr)
    {
        return nullptr;
    }

    std::shared_ptr<food> meal = chef->cook(recipe);

    return meal;
}

std::shared_ptr<chef> restaurant::find_chef()
{
    for (int i = 0; i < this->chefs_.size(); i++)
    {
        if (!this->chefs_[i]->get_is_cooking())
        {
            return this->chefs_[i];
        }
    }

    return nullptr;
}

std::shared_ptr<recipe> restaurant::find_recipe(std::string name)
{
    for (int i = 0; i < this->recipes_.size(); i++)
    {
        if (this->recipes_[i]->get_food_name() == name)
        {
            return this->recipes_[i];
        }
    }

    return nullptr;
}

restaurant::~restaurant()
{
    this->chefs_.empty();
    this->recipes_.empty();
}