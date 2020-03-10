//
// Created by Mary on 26.02.2020.
//

#ifndef TASK1_PERSONAL_H
#define TASK1_PERSONAL_H
#include "employee.h"
#include "worktime.h"
class Personal: public Employee, public Worktime{
protected:
    int base;
public:
    Personal(std::string id, std::string name):Employee(id, name){
        //
    }
    double calcWorkTime() override {
        return this->worktime * this->base;
    }
    void calc() override {
        this->payment = calcWorkTime();
    }
};

class Cleaner: public Personal{

public:
    Cleaner(std::string id, std::string name): Personal(id, name){
        this->base = 200;
    }

    void print() override {
        std::cout << "------------------------\n";
        std::cout << "Cleaner id:" <<this->id<< "\nname:"<<this->name <<"\npayment:"<<this->payment<<std::endl;
        std::cout << "------------------------\n";
    }
};

class Driver: public Personal{
private:
    int base;
public:
    Driver(std::string id, std::string name):Personal(id, name){
        this->base = 250;
    }
    void print() override {
        std::cout << "------------------------\n";
        std::cout << "Driver id:" <<this->id<< "\nname:"<<this->name <<"\npayment:"<<this->payment<<std::endl;
        std::cout << "------------------------\n";
    }
};

#endif //TASK1_PERSONAL_H
