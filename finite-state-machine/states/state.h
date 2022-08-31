#ifndef STATES_H
#define STATES_H

#include "../state_machine.h"

class state_machine;

class state
{
public:
    virtual void enter() = 0;
    virtual void update() = 0;
    virtual void exit() = 0;

protected:
    state(state_machine *state_machine);
    state_machine *_machine;
};

#endif
