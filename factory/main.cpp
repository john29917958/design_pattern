#include <stdio.h>
#include "characters/knight.h"

int main(int argc, char *argv[])
{
    knight *k = new knight("John Doe", 100, 100);
    printf("Character name: %s\n", k->get_name().c_str());

    k->set_name("Marry");
    printf("Character name: %s\n", k->get_name().c_str());

    k->attack();

    return 0;
}
