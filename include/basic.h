//
// Created by Оксана on 01.03.2020.
//

#ifndef TASK1_BASIC_H
#define TASK1_BASIC_H
#include <string>
#include "abstracts.h"
#include "interfaces.h"

using namespace std;

class Cleaner :public Personal {
public:
    Cleaner(int id, string fio, int rate);

};

class Driver :public Personal {
protected:
    int surcharges;
public:
    Driver(int id, string fio, int rate, int surcharges);
    void calcPayment()override;
};

class Tester :public Engineer {
public:
    Tester(int id, string fio, int rate, float contribution, string project);
};

class Programmer :public Engineer {
public:
    Programmer(int id, string fio, int rate, float contribution, string project);
};

class TeamLeader :public Programmer, public Heading {
protected:
    int headpay;
    int subordinates;
public:
    TeamLeader(int id, string fio, int rate, float contribution, string project, int subordinates, int headpay);
    int calcHeadPay()override ;
    void calcPayment()override ;
};

class Manager :public Employee, public Project {
protected:
    float contribution;
    string project;
public:
    Manager(int id, string fio, float contribution, string project);
    int calcProjPay() override ;
    void calcPayment()override ;
};

class ProjectManager :public Manager, public Heading {
protected:
    int subordinates;
    int headpay;
public:
    ProjectManager(int id, string fio, float contribution, string project, int subordinates, int headpay);
    int calcHeadPay()override;
    void calcPayment()override;
};

class SeniorManager : public ProjectManager {
public:
    SeniorManager(int id, string fio, float contribution, int subordinates, int headpay)
    :ProjectManager(id, fio, contribution, "",  subordinates , headpay) {}
    int calcProjPay() override ;
};
#endif //TASK1_BASIC_H
