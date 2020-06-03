//
// Created by ASUS on 05.03.2020.
//

#ifndef PAYMENT_PROJECTTEAM_H
#define PAYMENT_PROJECTTEAM_H

#include <iostream>
#include <vector>
#include <iomanip>

#include "Cleaner.h"
#include "Driver.h"
#include "Manager.h"
#include "Programmer.h"
#include "ProjectManager.h"
#include "SeniorManager.h"
#include "TeamLeader.h"
#include "Tester.h"

class Company;
class ProjectTeam{
private:
    std::vector<Cleaner> cleaners;
    std::vector<Driver> drivers;
    std::vector<Programmer> programmers;
    std::vector<Tester> testers;
    TeamLeader teamLeader;
    std::vector<Manager> managers;
    ProjectManager projectManager;
    static SeniorManager seniorManager;
    int projectValue;
    std::string name;
public:
    friend class Company;
    ProjectTeam(int value, std::string _name) : projectValue(value), name(_name) {}
    void setTime(int time);
    void calcPayment();
    void addCleaner(const Cleaner& cleaner);
    void addDriver(const Driver& driver);
    void addProgrammer(const Programmer& programmer);
    void addTester(const Tester& tester);
    void addTeamLeader(const TeamLeader& _teamLeader);
    void addManager(const Manager& manager);
    void addProjectManager(const ProjectManager& _projectManager);
    void addSeniorManager(const SeniorManager& _seniorManager);
    std::string getName() const;
    int getValue() const;
    void getDeclaration() const;
};
#endif //PAYMENT_PROJECTTEAM_H
