//
// Created by Илья Соловьёв on 19.02.2020.
//

#ifndef TASK1_ENGINEER_H
#define TASK1_ENGINEER_H

#include "General.h"
#include "Interfaces.h"


////////////
//ENGINEER//
////////////

class Engineer : public Employee, public WorkTime, public Project {
protected:
    int paymentPerDay;
    std::string projectName;
    int budget;
    double percentageOfWork;
public:
    Engineer();

    Engineer(int id, std::string name, int workDays, int paymentPerDay, std::string projectName, int budget,
             double percentageOfWork);

    double projectPayment() override;

    double workDaysPayment() override;

    void setPayment() override;
};

//////////////
//PROGRAMMER//
//////////////

class Programmer : public Engineer {
public:
    Programmer(int id, std::string name, int workDays, int paymentPerDay, std::string projectName, int budget,
               double percentageOfWork);

    void setPayment() override;
};

//////////
//TESTER//
//////////

class Tester : public Engineer {
public:
    Tester(int id, std::string name, int workDays, int paymentPerDay, std::string projectName, int budget,
           double percentageOfWork);

    void setPayment() override;
};

////////////////
//TEAM  LEADER//
////////////////

class TeamLeader : public Programmer, public Heading {
protected:
    int people;
    double paymentPerPerson;
public:
    TeamLeader(int id, std::string name, int workDays, int paymentPerDay, std::string projectName, int budget,
               double percentageOfWork,
               int people, int paymentPerPerson);

    double workDaysPayment();

    double headingPayment() override;

    double projectPayment() override;

    void setPayment() override;
};


#endif //TASK1_ENGINEER_H
