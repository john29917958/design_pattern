#include "input.h"

char input::key_ = ' ';

char input::get()
{
    return input::key_;
}

void input::set(char key)
{
    input::key_ = key;
}
