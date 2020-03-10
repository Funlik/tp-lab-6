#ifndef LAB6_ENGINEER_H
#define LAB6_ENGINEER_H

#include "Employee.h"
#include "Project.h"
#include "WorkTime.h"
#include "Projects.h"

class Engineer : public Employee, protected WorkTime, protected Project
{
protected:
    unsigned int base;
    unsigned int bonus;
    Projects* project = nullptr;
    unsigned int calculateWorkTimePayment();
    unsigned int calculateProjectPayment();

public:
    Engineer(unsigned int new_id, std::string new_name, unsigned int new_worktime, unsigned int new_base, unsigned int new_bonus);

    void setBase(unsigned int new_base);
    unsigned int getBase();
    void setBonus(unsigned int new_bonus);
    unsigned int getBonus();
    void setProject(Projects* new_project);
    Projects* getProject();
    void calculatePayment();
};

#endif //LAB6_ENGINEER_H
