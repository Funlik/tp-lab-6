//
// Created by Anton Korkunov on 05/03/2020.
//

#include "Employee.h"

Employee::Employee(int _id, string _FIO, int _worktime, string _Prof){
    id=_id;
    FIO = _FIO;
    worktime=_worktime;
    payment=0;
    Prof=_Prof;
};
string Employee::Tell_me_your_profession(){
    return Prof;
}
void Employee::Payday(){
    cout<<id<<". "<<FIO<<" worked time - "<<worktime<<"| salary - "<<payment<<" ";
};
double Employee::getMoney(){
    return payment;
};
void Employee::setWorktime(int time){
    this->worktime=time;
}
