

#pragma once


#include "Employee.h"
#include "ProjectPayment.h"
#include "Project.h"

class Manager : public Employee, public ProjectPayment {
protected:
    double partOfProject;
    Project* project;
public:

    Manager(int id, std::string name, int worktime, int payment, double partOfProject);

    ~Manager();

    void setProject(Project *project);

    Project *getProject();

    void setPartOfProject(double partOfProject);

    double getPartOfProject();

    int getSalary() override;

private:
    double getSalaryByProject() override;
};
