#ifndef INPUT_H
#define INPUT_H

#include <cstdlib>
#include <time.h>

/**
 * @brief Accessing pressed key.
 */
class input
{
public:
    /**
     * @brief Gets the singleton input instance.
     * 
     * @return input* Returns a input pointer.
     */
    static input *instance();

    /**
     * @brief Gets the pressed input key.
     * 
     * @return char Returns the pressed input key.
     */
    char get();

private:
    input();
    static input *input_;
};

#endif