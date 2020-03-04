//
// Created by Anton Korkunov on 18/02/2020.
//

#include "Employee.h"
#include <stdio.h>
#include <string.h>
#include <iostream>
#include "WorkTime.h"

using namespace std;

#ifndef LAB6_PERSONAL_H
#define LAB6_PERSONAL_H

class Personal : public Employee, public WorkTime{
public:
    Personal(float payrate,int _id, string _FIO, int _worktime,string _Prof);

};


class Driver : public Personal{
public:
    Driver(float payrate,int _id, string _FIO, int _worktime, string _Prof):Personal(payrate, _id,  _FIO,  _worktime, _Prof){};
    double Calculate() override ;
    void Payday() override;
    double WorkTime_Payment() override;
};


class Cleaner : public Personal{
public:
    Cleaner(float payrate,int _id, string _FIO, int _worktime,string _Prof):Personal(payrate, _id,  _FIO,  _worktime, _Prof){};
    void Payday() override;
    double WorkTime_Payment() override;
    double Calculate() override ;
};
#endif //LAB6_PERSONAL_H
