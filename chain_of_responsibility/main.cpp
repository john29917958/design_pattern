#include "notifiers/notifier.h"
#include "notifiers/slack_notifier.h"
#include "notifiers/jenkins_notifier.h"
#include "notifiers/teams_notifier.h"

int main(int argc, char *argv[])
{
    notifier *notifier = (new slack_notifier(levels::debug))
                             ->next(new jenkins_notifier(levels::info))
                             ->next(new teams_notifier(levels::error));

    notifier->notify(levels::debug, "Service start");
    notifier->notify(levels::info, "Accept pushed ref");
    notifier->notify(levels::error, "Certification failed");

    return 0;
}
