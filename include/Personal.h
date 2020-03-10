#pragma once
#include "Employee.h"
#include "Interfaces.h"

class Personal : public Employee, public WorkTime {
protected:
    int base;

public:
    Personal(int id, std::string fio, int worktime, int base) : Employee(id, fio, worktime) {
        this->base = base;
    }

    double work_time() override {
        return (this->worktime * this->base);
    }

    void Calc() override {
        this->payment = work_time();
    }

};


class Cleaner : public Personal {
public:
    Cleaner(int id, std::string fio, int worktime, int base) : Personal(id, fio, worktime, base)
    {}
};

class Driver : public Personal {
protected:
    int bonus;

public:
    Driver(int id, std::string fio, int worktime, int base, int bonus) : Personal(id, fio, worktime, base) {
        this->bonus = bonus;
    }

    void Calc() override {
        this->payment = this->work_time() + bonus;
    }

};