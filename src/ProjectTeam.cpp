//
// Created by ASUS on 06.03.2020.
//
#include "ProjectTeam.h"
//
// Created by ASUS on 05.03.2020.
//

    void ProjectTeam::setTime(int time){
        for(auto & x : cleaners)
            x.setTime(time);
        for(auto & x : drivers)
            x.setTime(time);
        for(auto & x : programmers)
            x.setTime(time);
        for(auto & x : testers)
            x.setTime(time);
        for(auto & x : managers)
            x.setTime(time);
        teamLeader.setTime(time);
        projectManager.setTime(time);
    }
    void ProjectTeam::calcPayment(){
        for(auto & x : cleaners)
            x.calculatePaymentByTime();
        for(auto & x : drivers)
            x.calculatePaymentByTime();
        for(auto & x : programmers){
            x.calculatePaymentByTime();
            x.calculatePaymentByProjectPart(projectValue);
        }
        for(auto & x : testers){
            x.calculatePaymentByTime();
            x.calculatePaymentByProjectPart(projectValue);
        }
        for(auto & x : managers){
            x.calculatePaymentByProjectPart(projectValue);
        }
        teamLeader.calculatePaymentByProjectPart(projectValue);
        teamLeader.calculatePaymentByTime();
        teamLeader.calculatePaymentByHeading();
        projectManager.calculatePaymentByProjectPart(projectValue);
        projectManager.calculatePaymentByHeading();
    }
    void ProjectTeam::addCleaner(const Cleaner& cleaner){
        cleaners.push_back(cleaner);
    }
    void ProjectTeam::addDriver(const Driver& driver){
        drivers.push_back(driver);
    }
    void ProjectTeam::addProgrammer(const Programmer& programmer){
        programmers.push_back(programmer);
    }
    void ProjectTeam::addTester(const Tester& tester){
        testers.push_back(tester);
    }
    void ProjectTeam::addTeamLeader(const TeamLeader& _teamLeader){
        teamLeader = _teamLeader;
    }
    void ProjectTeam::addManager(const Manager& manager){
        managers.push_back(manager);
    }
    void ProjectTeam::addProjectManager(const ProjectManager& _projectManager){
        projectManager = _projectManager;
    }
    void ProjectTeam::addSeniorManager(const SeniorManager& _seniorManager){
        seniorManager = _seniorManager;
    }
    std::string ProjectTeam::getName() const {
        return name;
    }
    int ProjectTeam::getValue() const {
        return projectValue;
    }
    void ProjectTeam::getDeclaration(std::ostream & stream) const{
        stream << std::fixed << std::setprecision(0);
        stream << "Declaration:" << std::endl;
        stream << "ID: " << seniorManager.getId() << " " << seniorManager.getName()
            << " Senior Manager" <<" Payment: " << int(seniorManager.getPayment()) << std::endl;
        stream << "Project name: " << name << std::endl;
        for(auto & x : cleaners)
            stream << "ID: " << x.getId() << " " << x.getName()
                << " Cleaner" <<" Payment: " << x.getPayment() << std::endl;
        for(auto & x : drivers)
            stream << "ID: " << x.getId() << " " << x.getName()
                << " Driver" <<" Payment: " << x.getPayment() << std::endl;
        for(auto & x : programmers)
            stream << "ID: " << x.getId() << " " << x.getName()
                << " Programmer" <<" Payment: " << x.getPayment() << std::endl;
        for(auto & x : testers)
            stream << "ID: " << x.getId() << " " << x.getName()
                << " Tester" <<" Payment: " << x.getPayment() << std::endl;
        for(auto & x : managers)
            stream << "ID: " << x.getId() << " " << x.getName()
                << " Manager" <<" Payment: " << x.getPayment() << std::endl;
        stream << "ID: " << teamLeader.getId() << " " << teamLeader.getName()
               << " Team Leader" <<" Payment: " << teamLeader.getPayment() << std::endl;
        stream << "ID: " << projectManager.getId() << " " << projectManager.getName()
               << " Project Manager" <<" Payment: " << projectManager.getPayment() << std::endl;

    }

SeniorManager ProjectTeam::seniorManager = SeniorManager();
