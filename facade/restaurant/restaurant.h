#ifndef RESTAURANT_H
#define RESTAURANT_H

#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <memory>
#include <mutex>
#include "recipe.h"
#include "food.h"
#include "chef.h"

/**
 * @brief A restaurant that provides meals.
 * @remark This class acts as a facade to all objects in a restaurant.
 */
class restaurant
{
public:
    /**
     * @brief Construct a new restaurant object
     */
    restaurant();

    /**
     * @brief Loads all chefs.
     *
     * @param path The path to the resource file containing information of all chefs.
     */
    void load_chefs(std::string path);

    /**
     * @brief Loads all recipes.
     *
     * @param path The path to the resource file containing information of all recipes.
     */
    void load_recipes(std::string path);

    /**
     * @brief Orders and gets a meal.
     *
     * @param name The name of the meal to order.
     * @return meal* Returns cooked meal.
     */
    std::shared_ptr<food> order(std::string name);

    ~restaurant();

private:
    std::shared_ptr<recipe> find_recipe(std::string name);
    std::shared_ptr<chef> find_chef();
    std::vector<std::shared_ptr<chef>> _chefs;
    std::vector<std::shared_ptr<recipe>> _recipes;
};

#endif
