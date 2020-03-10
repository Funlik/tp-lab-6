#ifndef UNTITLED1_PROJECTMANAGER_H
#define UNTITLED1_PROJECTMANAGER_H


#include "Heading.h"
#include "Manager.h"

class ProjectManager: public Heading, public Manager {
private:
    std::string position = "ProjectManager";

public:
    explicit ProjectManager(int _id = 0, std::string _name = "Name", int _worktime = 0);
    virtual double payroll(int projectBudget, int people);
    double payroll2(int projectBudget);
    virtual int payroll3(int people);
    std::string getPosition();
};


#endif //UNTITLED1_PROJECTMANAGER_H
