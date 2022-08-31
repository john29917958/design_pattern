#include "state_machine.h"

state_machine::state_machine(character &character) : _character(character)
{
    this->_state = nullptr;
}

state_machine::state_machine(state *state, character &character) : _character(character)
{
    if (state != nullptr)
    {
        this->_state = state;
    }
    else
    {
        this->_state = nullptr;
    }
}

void state_machine::set_state(state *state)
{
    if (this->_state != nullptr)
    {
        this->_state->exit();
        delete this->_state;
        this->_state = nullptr;
    }

    this->_state = state;

    if (this->_state != nullptr)
    {
        this->_state->enter();
    }
}

void state_machine::update()
{
    if (this->_state != nullptr)
    {
        this->_state->update();
    }
}

character &state_machine::get_character()
{
    return this->_character;
}
