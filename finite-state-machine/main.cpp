#include <stdio.h>
#include "input/input.h"
#include "state_machine.h"
#include "states/stand_state.h"
#include "states/walk_state.h"
#include "states/jump_state.h"

int main(int argc, char *argv[])
{
    state_machine *machine = new state_machine();
    machine->update();

    machine->set_state(new stand_state(machine));
    machine->update();
    machine->update();
    
    input::set('W');
    machine->update();
    machine->update();
    
    input::set('J');
    machine->update();
    machine->update();

    input::set('W');
    machine->update();

    return 0;
}
