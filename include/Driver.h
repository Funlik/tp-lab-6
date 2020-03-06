#ifndef DRIVER_H
#define DRIVER_H

#include "Personal.h"

class Driver: public Personal 
{
public:
    Driver(int id, std::string name, double worktime, double base);
    ~Driver();
};

#endif