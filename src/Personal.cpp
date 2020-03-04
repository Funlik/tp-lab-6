#include <Personal.h>
//
// Created by Илья Соловьёв on 05.03.2020.
//

#include "Personal.h"


////////////
//PERSONAL//
////////////

Personal::Personal(int id, std::string name, int workDays, int paymentPerDay) : Employee(id, name, workDays) {
    this->paymentPerDay = paymentPerDay;
}

double Personal::wordDaysPayment() {
    double pay = workDays * paymentPerDay;
    return pay;
}

void Personal::setPayment() {
    payment = wordDaysPayment();
};


////////////
//CLEANER//
////////////


Cleaner::Cleaner(int id, std::string name, int workDays, int paymentPerDay) : Personal(id, name, workDays,
                                                                                       paymentPerDay) {
    setPayment();
}



//////////
//DRIVER//
//////////


Driver::Driver(int id, std::string name, int workDays, int paymentPerDay) : Personal(id, name, workDays,
                                                                                     paymentPerDay) {
    setPayment();
}

double Driver::wordDaysPayment() {
    double pay = workDays * paymentPerDay * 1.2; //coefficient for driver =1.2
    return pay;
}
