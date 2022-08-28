#include <stdio.h>
#include "character_factory.h"

int main(int argc, char *argv[])
{
    character_factory factory;
    
    character *k = factory.make(1, "John Doe", 100, 100);
    printf("Character name: %s\n", k->get_name().c_str());

    k->set_name("Marry");
    printf("Character name: %s\n", k->get_name().c_str());

    k->attack();

    return 0;
}
