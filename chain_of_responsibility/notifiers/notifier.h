#ifndef NOTIFIER_H
#define NOTIFIER_H

#include <stdio.h>
#include <memory>
#include <mutex>
#include <string>
#include <stdexcept>

enum class levels
{
    debug,
    info,
    error
};

class notifier : public std::enable_shared_from_this<notifier>
{
public:    
    std::shared_ptr<notifier> next(std::shared_ptr<notifier> notifier);
    void notify(levels level, std::string message);

protected:
    notifier(levels level);
    virtual void send_notification(levels level, std::string message) = 0;

private:
    levels _notify_level;
    std::shared_ptr<notifier> _next = nullptr;
    std::string to_str(levels level);
};

#endif
