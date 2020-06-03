#ifndef LAB6_MANAGER_H
#define LAB6_MANAGER_H

#include "Employee.h"
#include "Project.h"
#include "Projects.h"

class Manager: public Employee, protected Project
{
protected:
    Projects* project = nullptr;
    unsigned int bonus;
    unsigned int calculateProjectPayment();

public:
    Manager(unsigned int new_id, std::string new_name, unsigned int new_worktime, unsigned int new_bonus);

    void setBonus(unsigned int new_bonus);
    unsigned int getBonus();
    void setProject(Projects* project);
    Projects* getProject();

    void calculatePayment();
};


#endif //LAB6_MANAGER_H
