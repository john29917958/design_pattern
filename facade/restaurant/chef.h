#ifndef CHEF_H
#define CHEF_H

#include <string>
#include <memory>
#include <mutex>
#include <unordered_map>
#include "recipe.h"
#include "food.h"

enum class sexes
{
    male,
    female
};

static std::unordered_map<std::string, sexes> const sexes_table =
    {
        {"male", sexes::male},
        {"female", sexes::female}};

class chef
{
public:
    chef(std::string name, sexes sex, std::string phone);
    std::shared_ptr<food> cook(std::shared_ptr<recipe> recipe);
    bool get_is_cooking();

private:
    std::string _name;
    sexes _sex;
    std::string phone;
    bool _is_cooking;
};

#endif
