#include "jump_state.h"

jump_state::jump_state(state_machine* state_machine) : state(state_machine)
{

}

void jump_state::enter()
{
    printf("Enter jump state\n");
}

void jump_state::update()
{
    printf("Perform jump behaviour\n");
}

void jump_state::exit()
{
    printf("Exit jump state\n");
}
