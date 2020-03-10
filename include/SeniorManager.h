#ifndef LAB6_SENIORMANAGER_H
#define LAB6_SENIORMANAGER_H

#include <utility>

#include "ProjectManager.h"

class SeniorManager: public ProjectManager
{
public:
    SeniorManager(unsigned int new_id, std::string new_name, unsigned int new_worktime, unsigned int new_bonus, unsigned int new_baselead) :
            ProjectManager(new_id, std::move(new_name), new_worktime, new_bonus, new_baselead){};
};

#endif //LAB6_SENIORMANAGER_H
