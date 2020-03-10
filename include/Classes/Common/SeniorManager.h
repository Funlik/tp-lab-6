//
// Created by fiskirton on 19.02.2020.
//

#ifndef TASK1_SENIORMANAGER_H
#define TASK1_SENIORMANAGER_H

#include "Classes/Common/ProjectManager.h"

class SeniorManager;
class SeniorManagerDestroyer{
private:
    SeniorManager * p_instance;

public:
    ~SeniorManagerDestroyer();
    void init(SeniorManager * p);
};

class SeniorManager: public ProjectManager{
private:
    vector <Project *> projects;

private:
    static SeniorManager * p_instance;
    static SeniorManagerDestroyer destroyer;

protected:
    SeniorManager(int id, const string &name, const string &position);
    SeniorManager(const SeniorManager&) = default;
    SeniorManager& operator=(SeniorManager const &) = default;
    ~SeniorManager() override;
    friend class SeniorManagerDestroyer;

public:
    double calcSalaryHeaders() override;
    double calcSalary() override;

public:

    static SeniorManager * getInstance(int id, const string &name, const string &position);
    const vector<Project *> & getProjects() const;
    void add_project(Project * project);

};

#endif //TASK1_SENIORMANAGER_H
