#ifndef TEAMLEADER_H
#define TEAMLEADER_H

#include "IHeadEmployee.h"
#include "Programmer.h"

class TeamLeader : public Programmer, public IHeadEmployee
{
private:
    int32_t subordinates;
    int32_t subordinateBase;

public:
    TeamLeader(int32_t id, std::string name, int32_t worktime, int32_t budget, float share, int32_t subordinates, int32_t subordinateBase)
        : Programmer(id, name, worktime, budget, share)
    {
        this->subordinates = subordinates;
        this->subordinateBase = subordinateBase;
    }

    int32_t GetSubordinates() { return subordinates; }
    int32_t GetSubordinateBase() { return subordinateBase; }

    virtual int32_t CalculateSalary() override { return Programmer::CalculateSalary() + CalculateHeadSalary(); }
    virtual int32_t CalculateHeadSalary() override { return subordinates * subordinateBase; }
};

#endif // TEAMLEADER_H
