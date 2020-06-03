//
// Created by aklen on 05.03.2020.
//
#ifndef ENGINEER_H
#define ENGINEER_H
#include "Employee.h"
#include "Interfaces.h"
using namespace std;


class Engineer: public Employee, public Project, public WorkTime{
protected:
    string projectName;
    int dayPayment;
    double partOfWork;
    int budget;
public:
    Engineer(int, string, int, int, string, int, double);//id,name,workTime,dayPayment,projectName,budget,partOfWork
    double calcProject() override ;
    double calcWorkTime() override ;
    void setPayment() override ;
};


class Programmer: public Engineer{
public:
    Programmer(int, string, int, int, string, int, double);//id,name,workTime,dayPayment,projectName,budget,partOfWork
    void setPayment() override ;
};


class Tester: public Engineer{
public:
    Tester(int, string, int, int, string, int, double);//id,name,workTime,dayPayment,projectName,budget,partOfWork
    void setPayment() override ;
};


class TeamLeader:public Programmer, public Heading{
protected:
    int AmountOfPeople;
    double PaymentPerOne;

public:
    TeamLeader(int, string, int, int, string, int, double, int, double);
                //id,name,workTime,dayPayment,projectName,budget,partOfWork,AmountOfPeople,PaymentPerOne
    double calcHeading() override ;
    double calcProject() override ;
    double calcWorkTime() override ;
    void setPayment() override ;
};
#endif

