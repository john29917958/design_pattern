#include <stdio.h>
#include <stdexcept>
#include "restaurant/restaurant.h"

int main(int argc, char *argv[])
{
    restaurant restaurant;
    restaurant.load_chefs("res\\chefs");
    restaurant.load_recipes("res\\recipes");

    std::shared_ptr<food> meal = restaurant.order("Hamburger");
    if (meal == nullptr)
    {
        printf("Failed to order a meal: %s\n");
    }
    else
    {
        printf("Got %s!\n", meal->get_name().c_str());
    }

    return 0;
}