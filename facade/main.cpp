#include <stdio.h>
#include <stdexcept>
#include "restaurant/restaurant.h"

int main(int argc, char *argv[])
{
    restaurant restaurant;
    restaurant.load_chefs("res\\chefs");
    restaurant.load_recipes("res\\recipes");

    std::shared_ptr<food> food = restaurant.order("Hamburger");
    if (food == nullptr)
    {
        printf("Failed to order food: %s\n");
    }
    else
    {
        printf("Got %s!\n", food->get_name().c_str());
    }

    return 0;
}