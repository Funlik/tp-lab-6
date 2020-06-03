#ifndef LAB6_PROJECTMANAGER_H
#define LAB6_PROJECTMANAGER_H

#include "Manager.h"
#include "Heading.h"
#include <vector>

class ProjectManager: public Manager, protected Heading
{
protected:
    unsigned int baselead;
    std::vector <Manager*> managers;
    unsigned int calculateHeadingPayment();

public:
    ProjectManager(unsigned int new_id, std::string new_name, unsigned int new_worktime, unsigned int new_bonus, unsigned int new_baselead);

    unsigned int getBaseLeader();
    void setBaseLeader(unsigned int new_baselead);
    void addManagers(Manager* new_manager);
    void removeManagers();
    std::vector<Manager*> getManagers();

    void calcPayment();
};

#endif //LAB6_PROJECTMANAGER_H
