#ifndef JENKINS_NOTIFIER_H
#define JENKINS_NOTIFIER_H

#include <stdio.h>
#include "notifier.h"

class jenkins_notifier : public notifier
{
public:
    jenkins_notifier(levels level);

protected:
    void send_notification(levels level, std::string message) override;
};

#endif
