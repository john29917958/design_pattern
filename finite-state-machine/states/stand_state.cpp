#include "stand_state.h"

stand_state::stand_state(std::shared_ptr<state_machine> state_machine) : state(state_machine)
{
}

void stand_state::enter()
{
    printf("Enter stand state\n");
}

void stand_state::update()
{
    char key = input::get();
    if (key == 'A' || key == 'D')
    {
        this->_machine->set_state(std::make_shared<walk_state>(this->_machine));
    }
    else if (key == 'J')
    {
        this->_machine->set_state(std::make_shared<jump_state>(this->_machine));
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
