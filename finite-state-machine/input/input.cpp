#include "input.h"

char input::_key = ' ';

char input::get()
{
    return input::_key;
}

void input::set(char key)
{
    input::_key = key;
}
