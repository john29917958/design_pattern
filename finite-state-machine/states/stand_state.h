#ifndef STAND_STATE_H
#define STAND_STATE_H

#include <stdio.h>
#include "state.h"
#include "walk_state.h"
#include "jump_state.h"
#include "../input/input.h"

class stand_state : public state
{
public:
    stand_state(state_machine *state_machine);
    void enter() override;
    void update() override;
    void exit() override;
};

#endif
