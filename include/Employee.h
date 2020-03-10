//
// Created by Anton Korkunov on 13/02/2020.
//

#ifndef LAB6_EMPLOYEE_H
#define LAB6_EMPLOYEE_H

#include "iostream"
#include <stdio.h>
#include <string>


using namespace std;

class Project;

class Employee{
    protected:
    int id;
    string FIO;
    int worktime;
    double payment;
    string Prof;
public:
    Employee(int _id, string _FIO, int _worktime, string _Prof);
    string Tell_me_your_profession();
    virtual void Payday();
    double getMoney();
    void setWorktime(int time);
    virtual double Calculate()=0;

};
#endif //LAB6_EMPLOYEE_H
