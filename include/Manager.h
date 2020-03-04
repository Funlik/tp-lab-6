//
// Created by Илья Соловьёв on 19.02.2020.
//

#ifndef TASK1_MANAGER_H
#define TASK1_MANAGER_H

#include "General.h"
#include "Interfaces.h"

///////////
//MANAGER//
///////////

class Manager : public Employee, public Project, public WorkTime {
protected:
    int paymentPerDay;
    double percentageOfWork;
    std::string projectName;
    int budget;
public:
    Manager(int id, std::string name, int workDays, int paymentPerDay, std::string projectName, int budget,
            double percentageOfWork);

    double projectPayment() override;

    double wordDaysPayment();

    void setPayment() override;
};

///////////////////
//PROJECT MANAGER//
///////////////////

class ProjectManager : public Manager, public Heading {
protected:
    int people;
    double paymentPerPerson;
public:
    ProjectManager(int id, std::string name, int workDays, int paymentPerDay, std::string projectName, int budget,
                   double percentageOfWork, int people, double paymentPerPerson);

    double headingPayment() override;

    void setPayment() override;

};

//////////////////
//SENIOR MANAGER//
//////////////////

class SeniorManager : public ProjectManager {
public:
    SeniorManager(int id, std::string name, int workDays, int paymentPerDay, int people, double paymentPerPerson);

    void setPayment() override;
};


#endif //TASK1_MANAGER_H
