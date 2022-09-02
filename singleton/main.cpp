#include <stdio.h>
#include "input/input.h"

int main(int argc, char *argv[])
{
    for (int i = 0; i < 100; i++)
    {
        printf("%c\n", input::get_instance()->get());
        printf("Input address is: %p\n", input::get_instance());
    }

    return 0;
}