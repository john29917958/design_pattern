#ifndef TEAMS_NOTIFIER_H
#define TEAMS_NOTIFIER_H

#include <stdio.h>
#include "notifier.h"

class teams_notifier : public notifier
{
public:
    teams_notifier(levels level);

protected:
    void send_notification(levels level, std::string message) override;
};

#endif
