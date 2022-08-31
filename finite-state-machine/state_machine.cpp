#include "state_machine.h"

state_machine::state_machine()
{
    this->_state = nullptr;
}

state_machine::state_machine(state *state)
{
    if (state != nullptr)
    {
        this->_state = state;
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