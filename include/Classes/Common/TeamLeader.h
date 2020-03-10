//
// Created by fiskirton on 19.02.2020.
//

#ifndef TASK1_TEAMLEADER_H
#define TASK1_TEAMLEADER_H

#include "Classes/Common/Programmer.h"
#include "Interfaces/Heading.h"
#include <vector>

class TeamLeader: public Programmer, public Heading{
private:
    vector <Employee *> employees;

public:
    TeamLeader(int id, const string &name, const string &position);

    ~TeamLeader() override;

public:
    double calcSalary() override;
    double calcSalaryHeaders() override;
    void add_employee(Employee * employee) override;

public:
    const vector<Employee *> & getEmployees() const;

};



#endif //TASK1_TEAMLEADER_H
