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
     * Defines the copy constructor explicitly
     * and deletes it from this singleton class, so the input object is
     * not cloneable. For example this line of code is invalid:
     * @code {.cpp}
     * input i = *input::instance(); // <= Compile error since copy constructor is deleted.
     * @endcode
     *
     * @param other Reference to the object to be copied.
     */
    input(const input &other) = delete;

    /*
     * Deletes the assignment operator since singleton object should not
     * be assignable.
     */
    void operator=(const input &) = delete;

    /**
     * @brief Gets the singleton input instance.
     *
     * @return input* Returns a input pointer.
     */
    static input &get_instance();

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