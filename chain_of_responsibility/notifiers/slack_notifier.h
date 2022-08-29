#ifndef SLACK_NOTIFIER_H
#define SLACK_NOTIFIER_H

#include <stdio.h>
#include "notifier.h"

class slack_notifier : public notifier
{
public:
    slack_notifier(levels level);

protected:
    void send_notification(levels level, std::string message) override;
};

#endif
