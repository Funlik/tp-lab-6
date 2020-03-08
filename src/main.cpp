#include <cstdint>
#include <fstream>
#include <iostream>
#include <string>
#include "EmployeeFactory.h"

int32_t main()
{
    std::ifstream streamReader("Employees.txt");
    std::string str;
    std::vector<Employee *> employees;
    std::vector<EmployeePosition> employeePositions;
    std::getline(streamReader, str);
    while (str != "")
    {
        if (str[0] != '#')
        {
            EmployeeFactoryEntity entity = EmployeeFactoryEntity::Parse(str);
            employees.push_back(EmployeeFactory::CreateEmployee(entity));
            employeePositions.push_back(entity.position);
        }
        std::getline(streamReader, str);
    }
    std::cout << "| Id | Name                             | Position         | Salary  |" << std::endl;
    std::cout << "| -- | -------------------------------- | ---------------- | ------- |" << std::endl;
    for (uint32_t i = 0; i < employees.size(); i++)
    {
        std::string employeeId = std::to_string(employees[i]->GetId());
        std::string employeeName = employees[i]->GetName();
        std::string employeePosition = GetEmployeePositionName(employeePositions[i]);
        std::string employeeSalary = "$" + std::to_string(employees[i]->CalculateSalary());
        std::cout << "| " + employeeId + std::string(2 - employeeId.length(), ' ') + " |"
            + " " + employeeName + std::string(32 - employeeName.length(), ' ') + " |"
            + " " + employeePosition + std::string(16 - employeePosition.length(), ' ') + " |"
            + " " + employeeSalary + std::string(7 - employeeSalary.length(), ' ') + " |" << std::endl;
    }
    std::cout << "| -- | -------------------------------- | ---------------- | ------- |" << std::endl;
    for (uint32_t i = 0; i < employees.size(); i++)
        delete employees[i];
}
