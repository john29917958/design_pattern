#include "teams_notifier.h"

teams_notifier::teams_notifier(levels level) : notifier(level)
{
}

void teams_notifier::send_notification(levels level, std::string message)
{
    printf(("Notify Teams service: " + message + '\n').c_str());
}
