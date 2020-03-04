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
    Employee(int _id, string _FIO, int _worktime, string _Prof){
        id=_id;
        FIO = _FIO;
        worktime=_worktime;
        payment=0;
        Prof=_Prof;
    };
    string Tell_me_your_profession(){
        return Prof;
    }
    virtual void Payday(){
        cout<<id<<". "<<FIO<<" worked time - "<<worktime<<"| salary - "<<payment<<" ";
    };
    virtual double getMoney(){
        return payment;
    };
    void setWorktime(int time){
        this->worktime=time;
    }
    //virtual void Add_to_Project(Project* tmp)=0;
  //  virtual void SetSub(int _Subordinates)=0;
    virtual double Calculate()=0;

};
#endif //LAB6_EMPLOYEE_H
