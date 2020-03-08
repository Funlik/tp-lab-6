#ifndef PROJECTMANAGER_H
#define PROJECTMANAGER_H

#include "Manager.h"
#include "IHeadEmployee.h"

class ProjectManager : public Manager, public IHeadEmployee
{
private:
    int32_t subordinates;
    int32_t subordinateBase;

public:
    ProjectManager(int32_t id, std::string name, int32_t worktime, int32_t budget, float share, int32_t subordinates, int32_t subordinateBase)
        : Manager(id, name, worktime, budget, share)
    {
        this->subordinates = subordinates;
        this->subordinateBase = subordinateBase;
    }

    int32_t GetSubordinates() { return subordinates; }
    int32_t GetSubordinateBase() { return subordinateBase; }

    virtual int32_t CalculateSalary() override { return Manager::CalculateSalary() + CalculateHeadSalary(); }
    virtual int32_t CalculateHeadSalary() override { return subordinates * subordinateBase; }
};

#endif // PROJECTMANAGER_H
