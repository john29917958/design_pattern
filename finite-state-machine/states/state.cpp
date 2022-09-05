#include "state.h"

state::state(std::shared_ptr<state_machine> state_machine)
{
    this->machine_ = state_machine;
}
