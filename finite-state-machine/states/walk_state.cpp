#include "walk_state.h"

walk_state::walk_state(std::shared_ptr<state_machine> state_machine) : state(state_machine)
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
        this->machine_->set_state(std::make_shared<jump_state>(this->machine_));
    }
    else
    {
        this->machine_->set_state(std::make_shared<stand_state>(this->machine_));
    }
}

void walk_state::exit()
{
    printf("Exit walk state\n");
}
