#include <stdio.h>
#include "character_factory.h"

int main(int argc, char *argv[])
{
    character_factory factory;
    
    character *c = factory.make(1, "John Doe", 100, 100);
    printf("Character name: %s\n", c->get_name().c_str());

    c->set_name("Allen");
    printf("Character name: %s\n", c->get_name().c_str());

    c->attack();

    c = factory.make(2, "Mary", 100, 100);
    printf("Character name: %s\n", c->get_name().c_str());

    c->set_name("Alice");
    printf("Character name: %s\n", c->get_name().c_str());

    c->attack();

    return 0;
}
