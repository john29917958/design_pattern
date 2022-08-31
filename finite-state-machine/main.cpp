#include <stdio.h>
#include "input/input.h"
#include "character/character.h"
#include "state_machine.h"
#include "states/stand_state.h"
#include "states/walk_state.h"
#include "states/jump_state.h"

int main(int argc, char *argv[])
{
    character character;
    state_machine *machine = new state_machine(character);
    machine->update();

    machine->set_state(new stand_state(machine));
    machine->update();
    machine->update();

    input::set('D');
    machine->update();
    machine->update();

    input::set('J');
    machine->update();
    machine->update();

    input::set('D');
    machine->update();

    character.set_is_jumping(false);
    machine->update();
    machine->update();

    input::set(' ');
    machine->update();
    machine->update();

    return 0;
}
