#include <stdio.h>
#include "restaurant/restaurant.h"

int main(int argc, char *argv[])
{
    restaurant restaurant;
    restaurant.load_chefs("res\\chefs");
    restaurant.load_recipes("res\\recipes");
    meal meal = restaurant.order("Hamburger");

    printf("Got %s!\n", meal.get_name().c_str());

    return 0;
}