#include <stdio.h>
#include <memory>
#include "character_factory.h"

int main(int argc, char *argv[])
{
    character_factory factory;

    std::shared_ptr<character> c = factory.create(character_types::knight, "John Doe", 100, 100);
    printf("Character name: %s\n", c->get_name().c_str());

    c->set_name("Allen");
    printf("Character name: %s\n", c->get_name().c_str());

    c->attack();

    c = factory.create(character_types::magician, "Mary", 100, 100);
    printf("Character name: %s\n", c->get_name().c_str());

    c->set_name("Alice");
    printf("Character name: %s\n", c->get_name().c_str());

    c->attack();

    return 0;
}
