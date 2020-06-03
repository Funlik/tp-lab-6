//
// Created by aklen on 10.03.2020.
//

#include <Employee.h>
using namespace std;


Employee::Employee(int id, string name, int workTime){
    this->id = id;
    this->name = name;
    this->workTime = workTime;
}


double Employee::getPayment(){
    return payment;
}


string Employee::getFio(){
    return name;
}


int Employee::getId(){
    return id;
}




