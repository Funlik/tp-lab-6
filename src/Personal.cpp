//
// Created by aklen on 10.03.2020.
//

#include <Personal.h>
using namespace std;


Personal::Personal(int id, string fio, int workTime, int dayPayment):Employee(id,fio,workTime){
    this->dayPayment = dayPayment;
}


double Personal::calcWorkTime(){
    return workTime * dayPayment;
}


void Personal::setPayment(){
    payment = calcWorkTime();
}


Cleaner::Cleaner(int id, string fio, int workTime, int dayPayment):Personal(id,fio,workTime,dayPayment){
    setPayment();
}


Driver::Driver(int id, string fio, int workTime, int dayPayment):Personal(id,fio,workTime,dayPayment) {
    setPayment();
}


