#ifndef WALK_STATE_H
#define WALK_STATE_H

#include <stdio.h>
#include "state.h"
#include "jump_state.h"
#include "../input/input.h"

class walk_state : public state
{
public:
    walk_state(state_machine *state_machine);
    void enter() override;
    void update() override;
    void exit() override;
};

#endif
