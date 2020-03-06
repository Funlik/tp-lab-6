//
// Created by Оксана on 01.03.2020.
//
#include <iostream>
#include "abstracts.h"
#include "interfaces.h"
#include <map>
using namespace std;

extern map <string, int> projects;

Employee::Employee(int id, string fio) {
    this->id = id;
    this->fio = fio;
}

int Employee::getId() {
    return this->id;
}

string Employee::getFio() {
    return this->fio;
}

int Employee::getPayment() {
    return this->payment;
}
void Employee::setTime(int worktime){
    this->worktime = worktime;
};


Personal::Personal(int id, string fio, int rate) :Employee(id, fio) {
    this->rate = rate;
}

int Personal::calcHourlyPay() {
    return this->rate * this->worktime;
}

void Personal::calcPayment() {
    this->payment += this->calcHourlyPay();
}


Engineer::Engineer(int id, string fio, int rate, float contribution, string project):Employee(id, fio) {
    this->rate = rate;
    this->contribution = contribution;
    this->project = project;
}

int Engineer::calcHourlyPay(){
    return this->worktime * this->rate;
}
int Engineer::calcProjPay(){
    return projects[this->project]*this->contribution;
}
void Engineer::calcPayment(){
    this->payment += this->calcHourlyPay() + this->calcProjPay();
}

