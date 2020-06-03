#include "Cleaner.h"
#include "Driver.h"
#include "TeamLeader.h"
#include "Tester.h"
#include "SeniorManager.h"

#include <vector>
#include <fstream>
#include <iostream>

class Factory 
{
private:
    int num;
    std::vector<Cleaner>        cleaners;
    std::vector<Driver>         drivers;
    std::vector<Programmer>     programmers;
    std::vector<Tester>         testers;
    std::vector<TeamLeader>     teamLeaders;
    std::vector<Manager>        managers;
    std::vector<ProjectManager> projectManagers;
    std::vector<SeniorManager>  seniorManagers; 

public:
    Factory();
    ~Factory();

    int getNum();
    std::vector<Cleaner> getCleaners();
    std::vector<Driver> getDrivers();
    std::vector<Programmer> getProgrammers();
    std::vector<Tester> getTesters();
    std::vector<TeamLeader> getTeamLeaders();
    std::vector<Manager> getManager();
    std::vector<ProjectManager> getProjectManagers();
    std::vector<SeniorManager> getSeniorManager();

    void addCleaner(Cleaner cleaner);
    void addDriver(Driver driver);
    void addProgrammer(Programmer programmer);
    void addTester(Tester tester);
    void addTeamLeader(TeamLeader teamLeader);
    void addManager(Manager manager);
    void addProjectManager(ProjectManager projectManager);
    void addSeniorManager(SeniorManager seniorManager);

    void addWorker(std::string data);
    void readWorkers(std::string fname);  
};
