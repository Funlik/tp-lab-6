//
// Created by aklen on 10.03.2020.
//

#include <Manager.h>
using namespace std;


Manager::Manager(int id, string name, int workTime, int dayPayment, string projectName, int budget, double partOfWork):
                Employee(id,name,workTime){
    this->dayPayment = dayPayment;
    this->projectName = projectName;
    this->budget = budget;
    this->partOfWork = partOfWork;
    setPayment();
}


double Manager::calcProject(){
    return budget * partOfWork;
}


double Manager::calcWorkTime(){
    return workTime * dayPayment;
}


void Manager::setPayment(){
    payment = calcProject() + calcWorkTime();
}


ProjectManager::ProjectManager(int id, string fio, int workTime, int dayPayment,  string projectName, int budget,
                               double partOfWork, int AmountOfPeople, double PaymentPerOne):Manager(
                                       id,fio,workTime,dayPayment,projectName,budget,partOfWork
                                       ){
    this->AmountOfPeople = AmountOfPeople;
    this->PaymentPerOne = PaymentPerOne;
    setPayment();
}


double ProjectManager::calcHeading(){
    return PaymentPerOne * AmountOfPeople;
}


void ProjectManager::setPayment(){
    payment = calcHeading() + calcProject();
}


SeniorManager::SeniorManager(int id, string fio, int workTime, int dayPayment, int AmountOfPeople,
        double PaymentPerOne):ProjectManager(id,fio,workTime,dayPayment,"", 0, 0, AmountOfPeople, PaymentPerOne){
    setPayment();
}


void SeniorManager::setPayment(){
    payment = calcHeading() * 2 + workTime*dayPayment;
}
