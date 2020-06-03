//
// Created by aklen on 05.03.2020.
//
#ifndef PERSONAL_H
#define PERSONAL_H
#include "Interfaces.h"
#include "Employee.h"
using namespace std;


class Personal: public Employee, public WorkTime{
protected:
    int dayPayment;

public:
    Personal(int, string, int, int);// id, name, workTime, dayPayment
    double calcWorkTime() override ;
    void setPayment() override ;
};


class Cleaner: public Personal{
public:
    Cleaner(int, string, int, int);//id, name, workTime, dayPayment
};


class Driver: public Personal{
public:
    Driver(int, string, int, int);//id, name, workTime, dayPayment
};
#endif