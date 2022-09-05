#include "jump_state.h"

jump_state::jump_state(std::shared_ptr<state_machine> state_machine) : state(state_machine)
{
}

void jump_state::enter()
{
    printf("Enter jump state\n");
    this->machine_->get_character().set_is_jumping(true);
}

void jump_state::update()
{
    if (this->machine_->get_character().get_is_jumping())
    {
        printf("Perform jump behaviour\n");
    }
    else
    {
        char key = input::get();
        if (key == 'A' || key == 'D')
        {
            this->machine_->set_state(std::make_shared<walk_state>(this->machine_));
        }
        else
        {
            this->machine_->set_state(std::make_shared<stand_state>(this->machine_));
        }
    }
}

void jump_state::exit()
{
    printf("Exit jump state\n");
}
