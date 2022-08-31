#include "walk_state.h"

walk_state::walk_state(state_machine *state_machine) : state(state_machine)
{
}

void walk_state::enter()
{
    printf("Enter walk state\n");
}

void walk_state::update()
{
    char key = input::get();
    if (key == 'A' || key == 'D')
    {
        printf("Perform walk behaviour\n");
    }
    else if (key == 'J')
    {
        this->_machine->set_state(new jump_state(this->_machine));
    }
    else
    {
        this->_machine->set_state(new stand_state(this->_machine));
    }
}

void walk_state::exit()
{
    printf("Exit walk state\n");
}
