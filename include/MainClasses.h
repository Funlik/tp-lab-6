//
// Created by Mikhail on 26.02.2020.
//

#ifndef TASK1_MAINCLASSES_H
#define TASK1_MAINCLASSES_H

#include <AbstractClasses.h>

class Cleaner: public Personal {
public:
    Cleaner(int, string, int);
};

class Driver: public Personal {
public:
    Driver(int, string, int, int);
    void calcPayment() override;
private:
    int extraCharge;
};

class Tester: public Engineer {
public:
    Tester(int, string, int, double, string);
};

class Programmer: public Engineer {
public:
    Programmer(int, string, int, double, string);
};

class TeamLeader: public Programmer, public Heading {
public:
    TeamLeader(int, string, int, double, string, int, int);
    int calcHeading() override;
    void calcPayment() override;

private:
    int headpay, subs;
};

class Manager: public Employee, public Project {
public:
    Manager(int, string, double, string);
    virtual double calcProject() override;
    virtual void calcPayment() override;

protected:
    double contribution;
    string projectName;
};

class ProjectManager: public Manager, public Heading {
public:
    ProjectManager(int, string, double, string, int, int);
    int calcHeading() override;
    void calcPayment() override;

protected:
    int headpay, subs;
};

class SeniorManager: public ProjectManager {
    SeniorManager(int, string, double, int, int);
    double calcProject() override;
};
#endif //TASK1_MAINCLASSES_H
