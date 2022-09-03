#include "jump_state.h"

jump_state::jump_state(std::shared_ptr<state_machine> state_machine) : state(state_machine)
{
}

void jump_state::enter()
{
    printf("Enter jump state\n");
    this->_machine->get_character().set_is_jumping(true);
}

void jump_state::update()
{
    if (this->_machine->get_character().get_is_jumping())
    {
        printf("Perform jump behaviour\n");
    }
    else
    {
        char key = input::get();
        if (key == 'A' || key == 'D')
        {
            this->_machine->set_state(std::make_shared<walk_state>(this->_machine));
        }
        else
        {
            this->_machine->set_state(std::make_shared<stand_state>(this->_machine));
        }
    }
}

void jump_state::exit()
{
    printf("Exit jump state\n");
}
