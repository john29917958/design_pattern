#include "slack_notifier.h"

slack_notifier::slack_notifier(levels level) : notifier(level)
{
}

void slack_notifier::send_notification(levels level, std::string message)
{
    printf(("Notify Slack service: " + message + '\n').c_str());
}
