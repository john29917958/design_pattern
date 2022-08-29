#include "jenkins_notifier.h"

jenkins_notifier::jenkins_notifier(levels level) : notifier(level)
{
}

void jenkins_notifier::send_notification(levels level, std::string message)
{
    printf(("Notify Jenkins service: " + message + '\n').c_str());
}