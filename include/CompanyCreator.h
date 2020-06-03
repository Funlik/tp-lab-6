#ifndef LAB6_COMPANYCREATOR_H
#define LAB6_COMPANYCREATOR_H

#include "Driver.h"
#include "Cleaner.h"
#include "Tester.h"
#include "Programmer.h"
#include "TeamLeader.h"
#include "Manager.h"
#include "ProjectManager.h"
#include "SeniorManager.h"
#include "Employee.h"
#include "Project.h"
#include <vector>
#include <iostream>
#include <map>


class CompanyCreator
{
protected:
    static std::vector<std::string> splitWorkerRecord(std::string& str, char splitter);
    std::map<std::string, Employee*> workers;
public:
    CompanyCreator();

    Employee* createWorker(std::string& workerdata);
    Employee* getWorkerByID(const std::basic_string<char>& workerid);
    void createProject(std::string& projectname);
    void calculatePaymentForWorkers();
    void printWorkers();
};

#endif //LAB6_COMPANYCREATOR_H
