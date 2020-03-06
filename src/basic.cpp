//
// Created by Оксана on 01.03.2020.
//
#include "abstracts.h"
#include "interfaces.h"
#include "basic.h"
#include <map>

extern map <string, int> projects;

Cleaner::Cleaner(int id, string fio, int rate) :Personal(id, fio, rate){};

Driver::Driver(int id, string fio, int rate, int surcharges) :Personal(id, fio, rate){
    this->surcharges = surcharges;
}
void Driver::calcPayment(){
    this->payment += this->calcHourlyPay() + surcharges;
}

Tester::Tester(int id, string fio, int rate, float contribution, string project) :Engineer(id, fio, rate, contribution, project) {};

Programmer::Programmer(int id, string fio, int rate, float contribution, string project) :Engineer(id, fio, rate, contribution, project){};

TeamLeader::TeamLeader(int id, string fio, int rate, float contribution, string project, int subordinates, int headpay)
:Programmer(id, fio, rate, contribution, project) {
    this->subordinates = subordinates;
    this->headpay = headpay;
}
int TeamLeader::calcHeadPay(){
    return this->subordinates * this->headpay;
}
void TeamLeader::calcPayment(){
    this->payment += this->calcHourlyPay() + this->calcProjPay() + this->calcHeadPay();
}


Manager::Manager(int id, string fio, float contribution, string project):Employee(id, fio) {
    this->contribution = contribution;
    this->project = project;
}
int Manager::calcProjPay(){
    return projects[this->project]*this->contribution;
}
void Manager::calcPayment(){
    this->payment += this->calcProjPay();
}


ProjectManager::ProjectManager(int id, string fio, float contribution, string project, int subordinates, int headpay): Manager(id, fio, contribution, project){
    this->subordinates = subordinates;
    this->headpay = headpay;
}
int ProjectManager::calcHeadPay(){
    return this->subordinates * this->headpay;
}
void ProjectManager::calcPayment(){
    this->payment += this->calcProjPay() + this->calcHeadPay();
}
 int SeniorManager::calcProjPay(){
    int sum = 0;
    for (auto x: projects){
        sum += x.second;
    }
    return sum * this->contribution;
}