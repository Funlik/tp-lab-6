#ifndef TESTER_H
#define TESTER_H

#include "Engineer.h"

class Tester : public Engineer
{
public:
    Tester(int id, std::string name, double worktime, double base);
    ~Tester();
};

#endif