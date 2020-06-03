//
// Created by fiskirton on 19.02.2020.
//

#ifndef TASK1_ENGINEER_H
#define TASK1_ENGINEER_H

#include <Classes/Common/Project.h>
#include "Classes/Abstract/Employee.h"
#include "Interfaces/WorkTime.h"
#include "Interfaces/Projects.h"

class Engineer: public Employee, public WorkTime, public Projects{
protected:
    Project * project{};
    double contrib{};
    double base_salary_coef = 0.1;
    int base_rate = 0;

protected:
    Engineer() = default;
    Engineer(int id, const string &name, const string &position);

public:
    ~Engineer() override;

public:
    double calcSalaryProject() override;

public:
    virtual double getBaseSalaryCoef() const;
    virtual Project getProject() const;
    virtual double getContrib() const;
    virtual int getBaseRate() const;
    const string & getProjectName() override;

public:
    void setProject(Project * project) override;
    virtual void setContrib(double contrib);
    virtual void setBaseRate(int baseRate);
    virtual void setBaseSalaryCoef(double baseSalaryCoef);



};

#endif //TASK1_ENGINEER_H
