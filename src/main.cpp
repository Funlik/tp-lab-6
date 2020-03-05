#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <sstream>
#include "../include/WorkerFactory.h"
#include <fstream>

using namespace std;

vector<string> split(const string &s, char delim) {
    vector<string> result;
    stringstream ss(s);
    string item;

    while (getline(ss, item, delim)) {
        result.push_back(item);
    }

    return result;
}

void print_info(Employee *empl) {
    empl->get_salary();
    cout << empl->get_speciality() << " | " << empl->get_id() << " | " << empl->get_name() << " | "
         << empl->get_current_payment() << endl;
}

int main() {
    ifstream workers_f("../txt/workers.txt");

    ifstream p("../txt/projects.txt");

    ifstream ceos("../txt/ceos.txt");


    map<string, Specific_project *> projects;

    if (!p.is_open()) {
        cout << "не могу открыть файл projects.txt"<<endl;
        return 1;
    }

    while (!p.eof()) {
        string s;
        getline(p, s);
        vector<string> tmp = split(s, ':');
        projects[tmp[0]] = new Specific_project(tmp[0], stod(tmp[1]));
    }

    p.close();
    auto *sm = new SeniorManager("Senior Manager", 12345, "undefined", 0);
    vector<ProjectManager *> pms;
    vector<TeamLeader *> tleaders;
    vector<Programmer *> programmers;
    vector<Employee *> employees;

    if (ceos.is_open()) {
        Info i;
        string s;
        while (!ceos.eof()) {
            getline(ceos, s);
            vector<string> splitValues = split(s, ':');
            i.spec = splitValues[0];
            i.id = stoi(splitValues[1]);
            i.name = splitValues[2];
            i.work_time = stod(splitValues[3]);
            i.base = stod(splitValues[4]);
            i.h_rate = stod(splitValues[5]);

            string project_name = splitValues[6];
            int impact = stoi(splitValues[7]);
            if (i.spec == "Senior Manager") {
                sm = WorkerFactory::makeSeniorManager(i.spec, i.id, i.name, i.work_time);
                sm->set_project(projects[project_name]);
                sm->set_impact(impact);
            } else if (i.spec == "Project Manager") {
                ProjectManager *_pm = WorkerFactory::makeProjectManager(i.spec, i.id, i.name, i.work_time);
                _pm->set_project(projects[project_name]);
                _pm->set_impact(impact);
                pms.push_back(_pm);
                sm->add_manager(_pm);
            } else if (i.spec == "Team Leader") {
                TeamLeader *_tl = WorkerFactory::makeTeamLeader(i.spec, i.id, i.name, i.work_time, i.base, i.h_rate);
                _tl->set_project(projects[project_name]);
                _tl->set_impact(impact);
                tleaders.push_back(_tl);
            }
        }
    }else{
        cout << "не могу открыть файл ceos.txt"<<endl;
        return 1;
    }
    ceos.close();

    if (workers_f.is_open()) {
        Info i;
        string s;
        while (!workers_f.eof()) {
            getline(workers_f, s);
            vector<string> splitValues = split(s, ':');
            i.spec = splitValues[0];
            i.id = stoi(splitValues[1]);
            i.name = splitValues[2];
            i.work_time = stod(splitValues[3]);
            i.base = stod(splitValues[4]);
            i.h_rate = stod(splitValues[5]);

            string project_name = splitValues[6];
            int impact = stoi(splitValues[7]);
            if (i.spec == "Programmer") {
                Programmer *progger = WorkerFactory::makeProgrammer(i.spec, i.id, i.name, i.work_time, i.base,
                                                                    i.h_rate);
                progger->set_impact(impact);
                if (project_name == "Project3") {
                    tleaders[2]->add_assigned_programmer(progger);
                } else if (project_name == "Project2") {
                    tleaders[1]->add_assigned_programmer(progger);
                } else {
                    tleaders[0]->add_assigned_programmer(progger);
                }
                programmers.push_back(progger);
            } else if (i.spec == "Manager") {
                Manager *manager = WorkerFactory::makeManager(i.spec, i.id, i.name, i.work_time);
                manager->set_project(projects[project_name]);
                if (project_name == "Project3") {
                    pms[2]->add_manager(manager);
                } else if (project_name == "Project2") {
                    pms[1]->add_manager(manager);
                } else {
                    pms[0]->add_manager(manager);
                }
            } else if (i.spec == "Tester") {
                Tester *t = WorkerFactory::makeTester(i.spec, i.id, i.name, i.work_time, i.base, i.h_rate);
                t->set_project(projects[project_name]);
                t->set_impact(impact);
                employees.push_back((Employee *) t);
            } else {
                Employee *emp = WorkerFactory::makeWorker(i);
                employees.push_back(emp);
            }
        }
    }else{
        cout << "не могу открыть файл workers.txt"<<endl;
        return 1;
    }

    workers_f.close();

    cout << endl << "Spec" << " | " << "Id" << " | " << "Name" << " | " << "Salary" << endl;
    print_info(sm);

    for (auto tl: tleaders) {
        print_info(tl);
    }

    for (auto pm: pms) {
        print_info(pm);
    }

    for (auto progger: programmers) {
        print_info(progger);
    }

    for (auto empl: employees) {
        print_info(empl);
    }
    
    return 0;
}
