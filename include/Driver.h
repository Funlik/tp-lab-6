//
// Created by ASUS on 22.02.2020.
//

#ifndef PAYMENT_DRIVER_H
#define PAYMENT_DRIVER_H

#include "Personal.h"

class Driver : public Personal{
public:
    Driver(int _id, std::string _name, int _salary) :
            Personal(_id, _name, 0, 0, _salary) {}
};


#endif //PAYMENT_DRIVER_H
