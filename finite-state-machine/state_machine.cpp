#include "state_machine.h"

state_machine::state_machine(character &character) : character_(character)
{
    this->state_ = nullptr;
}

state_machine::state_machine(std::shared_ptr<state> state, character &character) : character_(character)
{
    if (state != nullptr)
    {
        this->state_ = state;
    }
    else
    {
        this->state_ = nullptr;
    }
}

void state_machine::set_state(std::shared_ptr<state> state)
{
    if (this->state_ != nullptr)
    {
        this->state_->exit();
        this->state_ = nullptr;
    }

    this->state_ = state;

    if (this->state_ != nullptr)
    {
        this->state_->enter();
    }
}

void state_machine::update()
{
    if (this->state_ != nullptr)
    {
        this->state_->update();
    }
}

character &state_machine::get_character()
{
    return this->character_;
}
