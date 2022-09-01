#include <stdio.h>
#include "restaurant/restaurant.h"

int main(int argc, char *argv[])
{
    restaurant restaurant;
    restaurant.load_chefs();
    restaurant.load_recipes();
    meal *meal = restaurant.order("Hamburger");

    printf(meal->get_name().c_str());

    return 0;
}