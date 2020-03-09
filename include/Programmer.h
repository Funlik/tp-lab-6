#ifndef PROGRAMMER_H
#define PROGRAMMER_H

#include "Engineer.h"

class Programmer : public Engineer
{
public:
    static constexpr int32_t base = 52;

    Programmer(int32_t id, std::string name, int32_t worktime, int32_t budget, float share)
        : Engineer(id, name, worktime, base, budget, share) { }
};

#endif // PROGRAMMER_H
