//
// Created by fiskirton on 19.02.2020.
//

#ifndef TASK1_EMPLOYEE_H
#define TASK1_EMPLOYEE_H

#include <string>
#include "Classes/Common/Project.h"
#include "iostream"

using namespace std;

class Employee{

protected:
    int id;
    string name;
    double worktime{};
    double payment{};
    string position;
    string project{};

protected:
    Employee() = default;
    Employee(int id, string name, string position);

public:
    virtual ~Employee() = default;

public:
    virtual void setWorktime(int worktime);

    virtual double getPayment() const;

    virtual double getWorktime() const;

    virtual const string &getName() const;

    virtual int getId() const;

    const string &getPosition() const;

    virtual void setPayment(double p);

    virtual double calcSalary() = 0;

    virtual void setProject(Project * project);

    virtual const string &getProjectName();
};


#endif //TASK1_EMPLOYEE_H
