#ifndef INPUT_H
#define INPUT_H

#include <stdlib.h>

class input
{
public:
    static char get();
    static void set(char key);
private:
    static char _key;
};

#endif