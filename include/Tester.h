#ifndef TESTER_H
#define TESTER_H

#include "Engineer.h"

constexpr int32_t TesterBase = 40;

class Tester : public Engineer
{
public:
    Tester(int32_t id, std::string name, int32_t worktime, int32_t budget, float share)
        : Engineer(id, name, worktime, TesterBase, budget, share) { }
};

#endif // TESTER_H
