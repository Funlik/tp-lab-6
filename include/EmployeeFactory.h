//
// Created by Илья on 002 02.03.20.
//

#ifndef TASK1_EMPLOYEEFACTORY_H
#define TASK1_EMPLOYEEFACTORY_H

#include "Employee.h"
#include <vector>
using std::vector;

class EmployeeFactory {
private:
    string filename;
    string projects_filename;
public:
    EmployeeFactory(string filename, string projects_filename);
    vector<Employee*>* getEmployees();
};


#endif //TASK1_EMPLOYEEFACTORY_H
