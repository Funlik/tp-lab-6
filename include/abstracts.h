//
// Created by Оксана on 01.03.2020.
//

#ifndef TASK1_ABSTRACTS_H
#define TASK1_ABSTRACTS_H
#include <math.h>
#include <string>
#include "interfaces.h"
using namespace std;

class Employee {
protected:
    int id;
    string fio;
    int worktime;
    float payment = 0;
public:
    Employee(int id, string fio);
    virtual void calcPayment() = 0;
    void setTime(int worktime);
    int getId();
    string getFio();
    int getPayment();
};


class Personal :public Employee, public WorkTime {
protected:
    int rate;
public:
    Personal(int id, string fio, int rate);
    int calcHourlyPay() override;
    void calcPayment()override;
};

class Engineer :public Employee, public WorkTime, public Project {
protected:
    int rate;
    float contribution;
    string project;
public:
    Engineer(int id, string fio, int rate, float contribution, string project);

    int calcHourlyPay() override;
    int calcProjPay() override;
    void calcPayment()override;
};
#endif //TASK1_ABSTRACTS_H
