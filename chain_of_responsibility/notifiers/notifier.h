#ifndef NOTIFIER_H
#define NOTIFIER_H

#include <stdio.h>
#include <string>
#include <stdexcept>

enum class levels
{
    debug,
    info,
    error
};

class notifier
{
public:
    notifier(levels level);
    notifier *next(notifier *notifier);
    void notify(levels level, std::string message);

protected:
    virtual void send_notification(levels level, std::string message) = 0;

private:
    levels _notify_level;
    notifier *_next = nullptr;
    std::string to_str(levels level);
};

#endif
