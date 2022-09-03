#include "input.h"
#include <stdio.h>

input::input()
{
}

input &input::get_instance()
{
    static input input;

    return input;
}

char input::get_key_down()
{
    int code = rand() % (90 - 65) + 65;
    char key = code;

    return key;
}