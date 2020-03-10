//
// Created by aklen on 10.03.2020.
//
#include <Engineer.h>
using namespace std;


Engineer::Engineer(int id, string name, int workTime, int dayPayment, string projectName, int budget,
        double partOfWork):Employee(id,name,workTime){
    this->projectName = projectName;
    this->budget = budget;
    this->partOfWork = partOfWork;
    this->dayPayment = dayPayment;
}


double Engineer::calcProject(){
    double pay = partOfWork * budget;
    return pay;
}


double Engineer::calcWorkTime(){
    double pay = dayPayment * workTime;
    return pay;
}


void Engineer::setPayment(){
    payment = calcWorkTime() + calcProject();
}


Programmer::Programmer(int id, string name, int workTime, int dayPayment, string projectName, int budget,
        double partOfWork):Engineer(id,name,workTime,dayPayment,projectName,budget,partOfWork){
    setPayment();
}


void Programmer::setPayment(){
    payment = (calcProject() + calcWorkTime())*1.5;
}


Tester::Tester(int id, string name, int workTime, int dayPayment, string projectName, int budget,
               double partOfWork):Engineer(id,name,workTime,dayPayment,projectName,budget,partOfWork){
    setPayment();
}


void Tester::setPayment(){
    payment = (calcProject() + calcWorkTime())*1.2;
}


TeamLeader::TeamLeader(int id, string fio, int workTime, int dayPayment,  string projectName, int budget,
        double partOfWork, int AmountOfPeople, double PaymentPerOne):
        Programmer(id,fio,workTime,dayPayment,projectName,budget,partOfWork){
    this->AmountOfPeople = AmountOfPeople;
    this->PaymentPerOne = PaymentPerOne;
    setPayment();
}


double TeamLeader::calcHeading(){
    double pay = PaymentPerOne * AmountOfPeople;
    return pay;
}


double TeamLeader::calcWorkTime(){
    double pay = workTime * dayPayment;
    return pay;
}


double TeamLeader::calcProject(){
    double pay = budget* partOfWork;
    return pay;
}


void TeamLeader::setPayment(){
    payment = (calcHeading()+calcWorkTime()+calcProject());
}







