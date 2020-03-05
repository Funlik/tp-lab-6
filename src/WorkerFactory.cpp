//
// Created by araxal on 03.03.2020.
//

#include "../include/WorkerFactory.h"

Employee *WorkerFactory::makeWorker(const Info &i) {
    if (i.spec == "Cleaner") {
        Employee *emp = WorkerFactory::makeCleaner(i.spec, i.id, i.name, i.work_time, i.base);
        return emp;
    } else if (i.spec == "Driver") {
        Employee *emp = WorkerFactory::makeDriver(i.spec, i.id, i.name, i.work_time, i.base);
        return emp;
    } else if (i.spec == "Programmer") {
        Employee *emp = WorkerFactory::makeProgrammer(i.spec, i.id, i.name, i.work_time, i.base, i.h_rate);
        return emp;
    } else if (i.spec == "Tester") {
        Employee *emp = WorkerFactory::makeTester(i.spec, i.id, i.name, i.work_time, i.base, i.h_rate);
        return emp;
    } else if (i.spec == "Team Leader") {
        Employee *emp = WorkerFactory::makeTeamLeader(i.spec, i.id, i.name, i.work_time, i.base, i.h_rate);
        return emp;
    } else if (i.spec == "Manager") {
        Employee *emp = WorkerFactory::makeManager(i.spec, i.id, i.name, i.work_time);
        return emp;
    } else if (i.spec == "Project Manager") {
        Employee *emp = WorkerFactory::makeProjectManager(i.spec, i.id, i.name, i.work_time);
        return emp;
    } else if (i.spec == "Senior Manager") {
        Employee *emp = WorkerFactory::makeSeniorManager(i.spec, i.id, i.name, i.work_time);
        return emp;
    }
}


Cleaner *WorkerFactory::makeCleaner(const string &spec, int id, const string &name, double work_time, double base) {
    return new Cleaner(spec, id, name, work_time, base);
}

Driver *WorkerFactory::makeDriver(const string &spec, int id, const string &name, double work_time, double base) {
    return new Driver(spec, id, name, work_time, base);
}

Programmer *WorkerFactory::makeProgrammer(const string &spec, int id, const string &name, double work_time, double base,
                                          double h_rate) {
    return new Programmer(spec, id, name, work_time, base, h_rate);
}

Tester *WorkerFactory::makeTester(const string &spec, int id, const string &name, double work_time, double base,
                                  double h_rate) {
    return new Tester(spec, id, name, work_time, base, h_rate);
}

TeamLeader *WorkerFactory::makeTeamLeader(const string &spec, int id, const string &name, double work_time, double base,
                                          double h_rate) {
    return new TeamLeader(spec, id, name, work_time, base, h_rate);
}

Manager *WorkerFactory::makeManager(const string &spec, int id, const string &name, double work_time) {
    return new Manager(spec, id, name, work_time);
}

ProjectManager *WorkerFactory::makeProjectManager(const string &spec, int id, const string &name, double work_time) {
    return new ProjectManager(spec, id, name, work_time);
}

SeniorManager *WorkerFactory::makeSeniorManager(const string &spec, int id, const string &name, double work_time) {
    return new SeniorManager(spec, id, name, work_time);
}