#ifndef STATE_MACHINE_H
#define STATE_MACHINE_H

#include <memory>
#include "states/state.h"
#include "character/character.h"

class state;

class state_machine
{
public:
    /**
     * @brief Creates a new state machine instance.
     *
     * @param character The character whose state the state machine controls.
     */
    state_machine(character &character);

    /**
     * @brief Creates a new state machine instance with an initial state.
     *
     * @param state The initial state.
     * @param character The character whose state the state machine controls.
     */
    state_machine(std::shared_ptr<state> state, character &character);

    /**
     * @brief Sets and transits to next state.
     *
     * @param state The next state to transits to.
     */
    void set_state(std::shared_ptr<state> state);

    /**
     * @brief Updates the state.
     */
    void update();

    character &get_character();

private:
    std::shared_ptr<state> state_ = nullptr;
    character &character_;
};

#endif
