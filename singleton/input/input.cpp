#include "input.h"
#include <stdio.h>

input *input::input_ = nullptr;

input::input()
{
}

input *input::get_instance()
{
    if (input::input_ == nullptr)
    {
        input::input_ = new input();
    }

    return input::input_;
}

char input::get()
{
    int code = rand() % (90 - 65) + 65;
    char key = code;

    return key;
}