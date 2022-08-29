#include <memory>
#include <mutex>
#include "notifiers/notifier.h"
#include "notifiers/slack_notifier.h"
#include "notifiers/jenkins_notifier.h"
#include "notifiers/teams_notifier.h"

int main(int argc, char *argv[])
{
    std::shared_ptr<notifier> notifier = (std::make_shared<slack_notifier>(levels::debug))
                                             ->next(std::make_shared<jenkins_notifier>(levels::info))
                                             ->next(std::make_shared<teams_notifier>(levels::error));

    notifier->notify(levels::debug, "Service start");
    notifier->notify(levels::info, "Accept pushed ref");
    notifier->notify(levels::error, "Certification failed");

    return 0;
}
