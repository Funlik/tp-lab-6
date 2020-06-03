//
// Created by ASUS on 22.02.2020.
//

#ifndef PAYMENT_CLEANER_H
#define PAYMENT_CLEANER_H

#include "Personal.h"

class Cleaner : public Personal{
public:
    Cleaner(int _id, std::string _name, int _salary) :
            Personal(_id, _name, 0, 0, _salary) {}
};

#endif //PAYMENT_CLEANER_H
