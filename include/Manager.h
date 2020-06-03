//
// Created by Mary on 26.02.2020.
//

#ifndef TASK1_MANAGER_H
#define TASK1_MANAGER_H
#include "employee.h"
#include "worktime.h"
class Manager: public Employee, public Project{
protected:
    Projects proj;
    double proportion;
public:
    Manager(std::string id, std::string name, Projects proj):Employee(id, name){
        this->proj = proj;
        this->proportion = 0.15;
    }
    double calcProject() override {
        return proj*this->proportion;
    }
    void calc() override {
        this->payment = calcProject();
    }
    void print() override {
        std::cout << "------------------------\n";
        std::cout << "Manager id:" <<this->id<< "\nname:"<<this->name <<"\npayment:"<<this->payment<<std::endl;
        std::cout << "------------------------\n";
    }
};

class ProjectManager: public Manager, public Heading{
private:
    int heads;
    int baseForHeads;
public:
    ProjectManager(std::string id, std::string name, Projects proj, int heads):
    Manager(id, name, proj){
        this->heads = heads;
        this->baseForHeads = 1000;
    }
    double calcHeading() override {
        return this->heads * this->baseForHeads;
    }

    void calc() override {
        this->payment = calcHeading() + calcProject();
    }

    void print() override {
        std::cout << "------------------------\n";
        std::cout << "ProjectManager id:" <<this->id<< "\nname:"<<this->name <<"\npayment:"<<this->payment<<std::endl;
        std::cout << "------------------------\n";
    }
};

class SeniorManager: public ProjectManager{
private:
    int benefit;
public:
    SeniorManager(std::string id, std::string name, Projects proj, int heads):
            ProjectManager(id, name, proj, heads){
        this->benefit = 0.1;
    }
    void calc() override {
        this->payment = (calcHeading() + calcProject()) * (1 + benefit);
    }

    void print() override {
        std::cout << "------------------------\n";
        std::cout << "SeniorManager id:" <<this->id<< "\nname:"<<this->name <<"\npayment:"<<this->payment<<std::endl;
        std::cout << "------------------------\n";
    }
};
#endif //TASK1_MANAGER_H
