#ifndef STATES_H
#define STATES_H

#include <memory>
#include "../state_machine.h"

class state_machine;

/**
 * @brief A character state.
 */
class state
{
public:
    /**
     * @brief Transits to the state.
     */
    virtual void enter() = 0;

    /**
     * @brief Updates the state.
     */
    virtual void update() = 0;

    /**
     * @brief Transits out from the state.
     * 
     */
    virtual void exit() = 0;

protected:
    state(std::shared_ptr<state_machine> state_machine);
    std::shared_ptr<state_machine> _machine;
};

#endif
