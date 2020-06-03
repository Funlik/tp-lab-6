#pragma once
#include <string>
#include <Interfaces/ProjectSalary.h>
#include "Employee.h"
#include "Interfaces/WorkTime.h"

class Engineer :
        public Employee, public WorkTime, public ProjectSalary{
public:
    ~Engineer();
    int getWorkTime();
    void serWorkTime(int workTime);
    int getPartOfProject();
    void setPartOfProject(int partOfProject);
    int getProjectImportance();
    void setProjectImportance(int projectImportance);

protected:
    Engineer(std::string name, int id, int workTime, int payment, int partOfProject, int projectImportance);
    int workTime;
    int partOfProject;
    int projectImportance;

};
