//
// Created by fiskirton on 19.02.2020.
//

#ifndef TASK1_MANAGER_H
#define TASK1_MANAGER_H

#include "Classes/Abstract/Employee.h"
#include "Interfaces/Projects.h"
#include "Project.h"

class Manager: public Employee, public Projects{
private:
    Project * project{};
    double contrib{};

public:
    Manager() = default;
    Manager(int id, const string &name, const string &position);

    ~Manager() override;

public:
    double calcSalaryProject() override;
    double calcSalary() override;

public:
    virtual Project &getProject() const;

    virtual double getContrib() const;

    virtual void setContrib(double contrib);

    void setProject(Project *project) override;

    const string & getProjectName() override;


};


#endif //TASK1_MANAGER_H
