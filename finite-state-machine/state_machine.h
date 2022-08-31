#ifndef STATE_MACHINE_H
#define STATE_MACHINE_H

#include "states/state.h"

class state;

class state_machine
{
public:
    /**
     * @brief Creates a new state machine instance.
     */
    state_machine();

    /**
     * @brief Creates a new state machine instance with an initial state.
     *
     * @param state The initial state.
     */
    state_machine(state *state);

    /**
     * @brief Sets and transits to next state.
     *
     * @param state The next state to transits to.
     */
    void set_state(state *state);

    /**
     * @brief Executes update logic.
     */
    void update();

private:
    state *_state = nullptr;
};

#endif
