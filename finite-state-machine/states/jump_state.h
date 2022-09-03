#ifndef JUMP_STATE_H
#define JUMP_STATE_H

#include <stdio.h>
#include <memory>
#include <mutex>
#include "state.h"
#include "stand_state.h"
#include "walk_state.h"

class jump_state : public state
{
public:
    jump_state(std::shared_ptr<state_machine> state_machine);
    void enter() override;
    void update() override;
    void exit() override;
};

#endif