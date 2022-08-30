#ifndef INPUT_H
#define INPUT_H

#include <cstdlib>
#include <time.h>

class input
{
public:
    static input *instance();
    char get();

private:
    input();
    static input *_input;
};

#endif