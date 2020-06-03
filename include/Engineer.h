//
// Created by Mary on 26.02.2020.
//

#ifndef TASK1_ENGINEER_H
#define TASK1_ENGINEER_H
#include "employee.h"
#include "worktime.h"
class Engineer: public Employee, public Worktime, public Project{
protected:
    int base;
    Projects proj;
    double benefit;
    double proportion;
public:
    Engineer(std::string id, std::string name, Projects proj):Employee(id, name){
        this->proj = proj;
    }
    void calc() override {
        this->payment = calcWorkTime() + calcProject();
    }
    double calcProject() override {
        return proj*this->proportion;
    }
    double calcWorkTime() override {
        return (this->base * this->worktime) * (1 + this->benefit);
    }

};

class Programmer: public Engineer{
public:
    Programmer(std::string id, std::string name, Projects proj)
    :Engineer(id, name, proj){
        this->base = 800;
        this->benefit = 0.1;
        this->proportion = 0.1;
    }
    void print() override {
        std::cout << "------------------------\n";
        std::cout << "Programmer id:" <<this->id<< "\nname:"<<this->name <<"\npayment:"<<this->payment<<std::endl;
        std::cout << "------------------------\n";
    }
};

class Tester: public Engineer{
public:
    Tester(std::string id, std::string name, Projects proj)
            :Engineer(id, name, proj){
        this->base = 600;
        this->benefit = 0.1;
        this->proportion = 0.15;
    }
    void print() override {
        std::cout << "------------------------\n";
        std::cout << "Tester id:" <<this->id<< "\nname:"<<this->name <<"\npayment:"<<this->payment<<std::endl;
        std::cout << "------------------------\n";
    }
};

class TeamLeader: public Programmer, public Heading{
private:
    int heads;
    int baseForHeads;
public:
    TeamLeader(std::string id, std::string name, Projects proj, int heads):Programmer(id, name, proj){
        this->heads = heads;
        this->baseForHeads = 1000;
    }
    double calcHeading(){
        return this->heads*this->baseForHeads;
    }
    void calc() override {
        this->payment = calcWorkTime() + calcProject() + calcHeading();
    }
    void print() override {
        std::cout << "------------------------\n";
        std::cout << "TeamLeader id:" <<this->id<< "\nname:"<<this->name <<"\npayment:"<<this->payment<<std::endl;
        std::cout << "------------------------\n";
    }
};
#endif //TASK1_ENGINEER_H
