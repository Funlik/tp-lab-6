//
// Created by Anton Korkunov on 19/02/2020.
//

#ifndef LAB6_MANAGER_H
#define LAB6_MANAGER_H

#include "Employee.h"
#include "Heading.h"
#include "Project_Payment.h"
//#include "Project.h"

class Project;

class Manager : public Project_Payment, public Employee{
    float BudgetProportion=0;
    Project* curProject=nullptr;
public:
    void Add_to_Project(Project* tmp);
    Manager(float _BudgetProportion,int _id, string _FIO, int _worktime,string _Prof);
    void Payday() override;
    double Calculate() override ;
    double ProjectPayment() override;
};

class ProjectManager : public Heading, public Manager{
protected:
    int Subordinates;
    float Manager_rate;
public:
    ProjectManager(float _BudgetProportion,int _id, string _FIO, int _worktime,string _Prof,int _Sub,float MRate);
    double Heading_Payment() override;
    void Payday() override;
    double Calculate() override ;
    void SetSub(int _Subordinates);
};

class SeniorManager : public ProjectManager{

public:
    SeniorManager(float _BudgetProportion,int _id, string _FIO, int _worktime,string _Prof,int _Sub,float MRate);
    void Payday() override;
};

#endif //LAB6_MANAGER_H
