#include "input.h"
#include <stdio.h>

input *input::_input = nullptr;

input::input()
{
}

input *input::instance()
{
    if (input::_input == nullptr)
    {
        srand(time(NULL));
        input::_input = new input();
    }

    return input::_input;
}

char input::get()
{
    int code = rand() % (90 - 65) + 65;
    char key = code;

    return key;
}