//
// Created by aklen on 05.03.2020.
//
#ifndef MANAGER_H
#define MANAGER_H
#include "Employee.h"
#include "Interfaces.h"
using namespace std;


class Manager: public Employee, public Project, public WorkTime{
protected:
    string projectName;
    int dayPayment;
    double partOfWork;
    int budget;

public:
    Manager(int, string, int, int, string, int, double);//id,name,workTime,dayPayment,projectName,budget,partOfWork
    double calcProject() override ;
    double calcWorkTime() override ;
    void setPayment() override ;

};


class ProjectManager: public Manager, public Heading{
protected:
    int AmountOfPeople;
    double PaymentPerOne;

public:
    ProjectManager(int, string, int, int, string, int, double, int, double);
                    //id,name,workTime,dayPayment,projectName,budget,partOfWork,AmountOfPeople,PaymentPerOne
    double calcHeading() override;
    void setPayment() override;
};


class SeniorManager: public ProjectManager{
public:
    SeniorManager(int, string, int, int, int, double);//id,name,workTime,dayPayment,AmountOfPeople,paymentPerOne
    void setPayment() override;
};
#endif
