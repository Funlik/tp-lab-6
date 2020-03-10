#ifndef UNTITLED1_SENIORMANAGER_H
#define UNTITLED1_SENIORMANAGER_H


#include "ProjectManager.h"

class SeniorManager: public ProjectManager {
private:
    std::string position = "SeniorManager";
public:
    explicit SeniorManager(int _id = 0, std::string _name = "Name", int _worktime = 0);
    double payroll(int projectBudget, int people);
    double payroll2(int projectBudget);
    int payroll3(int people);
    std::string getPosition();
};


#endif //UNTITLED1_SENIORMANAGER_H
