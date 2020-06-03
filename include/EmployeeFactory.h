#ifndef EMPLOYEE_FACTORY_H
#define EMPLOYEE_FACTORY_H

#include <cstdint>
#include <string>
#include <vector>
#include "Employee.h"

enum class EmployeePosition
{
    Cleaner,
    Driver,
    Programmer,
    Tester,
    TeamLeader,
    Manager,
    ProjectManager,
    SeniorManager
};

std::string GetEmployeePositionName(EmployeePosition position);

typedef std::vector<std::string> parameter_list_t;

struct EmployeeFactoryEntity
{
    int32_t id;
    std::string name;
    int32_t worktime;
    EmployeePosition position;
    parameter_list_t additionalParameters;

    EmployeeFactoryEntity()
        : EmployeeFactoryEntity(0, "", 0, (EmployeePosition)0, parameter_list_t()) { }
    EmployeeFactoryEntity(int32_t id, std::string name, int32_t worktime, EmployeePosition position, parameter_list_t additionalParameters)
    {
        this->id = id;
        this->name = name;
        this->worktime = worktime;
        this->position = position;
        this->additionalParameters = additionalParameters;
    }

    static EmployeeFactoryEntity Parse(std::string str);
};

class EmployeeFactory
{
public:
    static Employee *CreateEmployee(EmployeeFactoryEntity entity);
};

#endif // EMPLOYEE_FACTORY_H