#ifndef SENIORMANAGER_H
#define SENIORMANAGER_H

#include "ProjectManager.h"

class SeniorManager : public ProjectManager
{
public:
    SeniorManager(int32_t id, std::string name, int32_t worktime, int32_t budget, float share, int32_t subordinates, int32_t subordinateBase)
        : ProjectManager(id, name, worktime, budget, share, subordinates, subordinateBase) { }
};

#endif // SENIORMANAGER_H
