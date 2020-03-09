#ifndef PROGRAMMER_H
#define PROGRAMMER_H

#include "Engineer.h"

constexpr int32_t ProgrammerBase = 52;

class Programmer : public Engineer
{
public:
    Programmer(int32_t id, std::string name, int32_t worktime, int32_t budget, float share)
        : Engineer(id, name, worktime, ProgrammerBase, budget, share) { }
};

#endif // PROGRAMMER_H
