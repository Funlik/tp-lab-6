//
// Created by Mikhail on 08.03.2020.
//

#include <Factory.h>

#include <string>
#include "MainClasses.h"

map<string, int> projects;
map<string, Generator*> generation = {
        {"Cleaner", new CleanerGenerator()},
        {"Driver", new DriverGenerator()},
        {"Tester", new TesterGenerator()},
        {"Programmer", new ProgrammerGenerator()},
        {"TeamLeader", new TeamLeaderGenerator()},
        {"Manager", new ManagerGenerator()},
        {"ProjectManager", new ProjectManagerGenerator()},
        {"SeniorManager", new SeniorManagerGenerator()},
};
Employee * Factory::createEmployee(vector<string> & data) {
    return generation[data[4]]->generate(data);
}