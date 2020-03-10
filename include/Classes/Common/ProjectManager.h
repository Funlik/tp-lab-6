//
// Created by fiskirton on 19.02.2020.
//

#ifndef TASK1_PROJECTMANAGER_H
#define TASK1_PROJECTMANAGER_H

#include "Classes/Common/Manager.h"
#include "Interfaces/Heading.h"
#include "Classes/Abstract/Employee.h"
#include <vector>

class ProjectManager: public Manager, public Heading{
private:
    vector <Employee *> employees;

public:
    ProjectManager() = default;
    ProjectManager(int id, const string &name, const string &position);

    ~ProjectManager() override;

public:
    double calcSalaryHeaders() override;
    void add_employee(Employee *employee) override;
    double calcSalary() override;

public:
    virtual const vector<Employee *> & getEmployees() const;

};


#endif //TASK1_PROJECTMANAGER_H
