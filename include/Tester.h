#ifndef TESTER_H
#define TESTER_H

#include "Engineer.h"

class Tester : public Engineer
{
public:
    Tester(int32_t id, std::string name, int32_t worktime, int32_t budget, float share)
        : Engineer(id, name, worktime, 40, budget, share) { }
};

#endif // TESTER_H
