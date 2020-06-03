#ifndef CLEANER_H
#define CLEANER_H

#include "Personal.h"

class Cleaner: public Personal
{
public:
    Cleaner(int id, std::string name, double worktime, double base);
    ~Cleaner();
};

#endif