//
// Created by araxal on 03.03.2020.
//

#ifndef LAB6_WORKERFACTORY_H
#define LAB6_WORKERFACTORY_H

#include "WorkTime.h"
#include "Heading.h"
#include "Project.h"

#include "Employee.h"
#include "Personal.h"
#include "../include/Engineer.h"
#include "../include/Programmer.h"
#include "../include/Tester.h"
#include "../include/TeamLeader.h"
#include "../include/Manager.h"
#include "../include/SeniorManager.h"
#include "../include/ProjectManager.h"

struct Info {
    string spec = "";
    string name = "";
    int id = -1;
    double base = 0;
    double work_time = 0;
    double h_rate = 0;
};

class WorkerFactory {
public:
    static Employee *makeWorker(const Info &i);

    static Cleaner *makeCleaner(const string &spec, int id, const string &name, double work_time, double base);

    static Driver *makeDriver(const string &spec, int id, const string &name, double work_time, double base);


    static Programmer *
    makeProgrammer(const string &spec, int id, const string &name, double work_time, double base, double h_rate);

    static Tester *
    makeTester(const string &spec, int id, const string &name, double work_time, double base, double h_rate);

    static TeamLeader *
    makeTeamLeader(const string &spec, int id, const string &name, double work_time, double base, double h_rate);

    static Manager *makeManager(const string &spec, int id, const string &name, double work_time);

    static ProjectManager *makeProjectManager(const string &spec, int id, const string &name, double work_time);

    static SeniorManager *makeSeniorManager(const string &spec, int id, const string &name, double work_time);
};


#endif //LAB6_WORKERFACTORY_H
