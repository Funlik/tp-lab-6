//
// Created by ASUS on 05.03.2020.
//

#ifndef PAYMENT_FABRIC_H
#define PAYMENT_FABRIC_H


#include "ProjectTeam.h"

void fabric(ProjectTeam& team, const std::vector<std::string>& personParameters){
    static int newId = 1;
    std::string name = personParameters[0] + " " + personParameters[1];
    if(personParameters[2] == "Driver"){
        team.addDriver(Driver(newId++,name,stoi(personParameters[3])));
    }
    if(personParameters[2] == "Cleaner"){
        team.addCleaner(Cleaner(newId++, name, stoi(personParameters[3])));
    }
    if(personParameters[2] == "Programmer"){
        team.addProgrammer(Programmer(newId++, name,
                          stoi(personParameters[3]), stoi(personParameters[4])));
    }
    if(personParameters[2] == "Tester"){
        team.addTester(Tester(newId++, name,
                      stoi(personParameters[3]), stoi(personParameters[4])));
    }
    if(personParameters[2] == "TeamLeader"){
        team.addTeamLeader(TeamLeader(newId++, name, stoi(personParameters[3]), stoi(personParameters[4]),
                          stoi(personParameters[5]), stoi(personParameters[6])));
    }
    if(personParameters[2] == "Manager"){
        team.addManager(Manager(newId++, name, stoi(personParameters[3])));
    }
    if(personParameters[2] == "ProjectManager"){
        team.addProjectManager(ProjectManager(newId++, name, stoi(personParameters[3]),
                              stoi(personParameters[4]), stoi(personParameters[5])));
    }
    if(personParameters[2] == "SeniorManager"){
        team.addSeniorManager(SeniorManager(newId++, name, stoi(personParameters[3]),
                             stoi(personParameters[4]), stoi(personParameters[5])));
    }

}

#endif //PAYMENT_FABRIC_H
