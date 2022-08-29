#include "notifier.h"

notifier::notifier(levels level)
{
    this->_notify_level = level;
}

void notifier::notify(levels level, std::string message)
{
    if (level >= this->_notify_level)
    {
        printf((this->to_str(level) + ": ").c_str());
        this->send_notification(level, message);
    }

    if (this->_next != nullptr)
    {
        this->_next->notify(level, message);
    }
}

notifier *notifier::next(notifier *next)
{
    notifier *n = this;

    while (n->_next != nullptr)
    {
        n = n->_next;
    }

    n->_next = next;

    return this;
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