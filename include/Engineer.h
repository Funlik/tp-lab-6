#pragma once
#include "Employee.h"
#include "Interfaces.h"

class Enginer : public Employee, public WorkTime, public Project {
protected:
    std::string project;
    double procent;
    int base;
    int money_project;

public:
    Enginer(int id, std::string fio, int worktime, int base, std::string project, double procent, int money_project) : Employee(id, fio, worktime) {
        this->base = base;
        this->procent = procent;
        this->project = project;
        this->money_project = money_project;
    }

    double work_time() override {
        return (this->worktime * this->base);
    }

    double pay_project() override {
        return (this->money_project * this->procent);
    }

    void Calc() override {
        this->payment = this->work_time() + this->pay_project();
    }

};

class Programmer : public Enginer {
public:
    Programmer(int id, std::string fio, int worktime, int base, std::string project, double procent, int money_project) : Enginer(id, fio, worktime, base, project, procent, money_project)
    {}

};


class Tester : public Enginer {
public:
    Tester(int id, std::string fio, int worktime, int base, std::string project, double procent, int money_project) : Enginer(id, fio, worktime, base, project, procent, money_project)
    {}

};

class TeamLeader : public Programmer, public Heading {
protected:
    int number_people;
    int money_for_people;

public:
    TeamLeader(int id, std::string fio, int worktime, int base, std::string project, double procent, int money_project, int number_people, int money_for_people) : Programmer(id, fio, worktime, base, project, procent, money_project) {
        this->number_people = number_people;
        this->money_for_people = money_for_people;
    }

    double pay_head() override {
        return (this->number_people * this->money_for_people);
    }

    void Calc() override {
        this->payment = this->pay_head() + this->pay_project() + this->work_time();
    }

};