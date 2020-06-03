#pragma once
#include "Employee.h"
#include "Interfaces.h"

class Manager : public Employee, public Project {
protected:
    std::string project;
    double procent;
    int money_project;

public:
    Manager(int id, std::string fio, int worktime, std::string project, double procent, int money_project) : Employee(id, fio, worktime) {
        this->project = project;
        this->procent = procent;
        this->money_project = money_project;
    }

    double pay_project() {
        return(this->money_project * this->procent);
    }

    void Calc() override {
        this->payment = this->pay_project();
    }

};

class ProjectManager : public Manager, public Heading {
protected:
    int number_people;
    int money_for_people;

public:
    ProjectManager(int id, std::string fio, int worktime, std::string project, double procent, int money_project, int number_people, int money_for_people) : Manager(id, fio, worktime, project, procent, money_project) {
        this->number_people = number_people;
        this->money_for_people = money_for_people;
    }

    double pay_head() override {
        return (this->number_people * this->money_for_people);
    }

    void Calc() override {
        this->payment = this->pay_project() + this->pay_head();
    }

};

class SeniorManager : public ProjectManager {
public:
    SeniorManager(int id, std::string fio, int worktime, std::string project, double procent, int money_project, int number_people, int money_for_people) : ProjectManager(id, fio, worktime, project, procent, money_project, number_people, money_for_people)
    {}
};