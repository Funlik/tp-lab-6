#ifndef PROGRAMMER_H
#define PROGRAMMER_H

#include "Engineer.h"

class Programmer : public Engineer
{ 
public:
    Programmer(int id, std::string name, double worktime, double base, double budget, double persent);
    ~Programmer();
};

#endif