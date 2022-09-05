#include "notifier.h"

notifier::notifier(levels level)
{
    this->notify_level_ = level;
}

void notifier::notify(levels level, std::string message)
{
    if (level >= this->notify_level_)
    {
        printf((this->to_str(level) + ": ").c_str());
        this->send_notification(level, message);
    }

    if (this->next_ != nullptr)
    {
        this->next_->notify(level, message);
    }
}

std::shared_ptr<notifier> notifier::next(std::shared_ptr<notifier> next)
{
    notifier *n = this;

    while (n->next_ != nullptr)
    {
        n = n->next_.get();
    }

    n->next_ = next;

    return shared_from_this();
}

std::string notifier::to_str(levels level)
{
    switch (level)
    {
    case levels::debug:
        return "DEBUG";
    case levels::info:
        return "INFO";
    case levels::error:
        return "ERROR";
    default:
        throw std::invalid_argument("Invalid level");
    }
}