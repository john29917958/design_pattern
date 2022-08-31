#include "stand_state.h"

stand_state::stand_state(state_machine *state_machine) : state(state_machine)
{
}

void stand_state::enter()
{
    printf("Enter stand state\n");
}

void stand_state::update()
{
    char key = input::get();
    if (key == 'W' || key == 'A' || key == 'S' || key == 'D')
    {
        this->_machine->set_state(new walk_state(this->_machine));
    }
    else if (key == 'J')
    {
        this->_machine->set_state(new jump_state(this->_machine));
    }
    else
    {
        printf("Perform stand behaviour\n");
    }
}

void stand_state::exit()
{
    printf("Exit stand state\n");
}
