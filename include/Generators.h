//
// Created by Mikhail on 08.03.2020.
//

#ifndef TASK1_GENERATORS_H
#define TASK1_GENERATORS_H

#include <string>
#include <iostream>
#include <vector>
#include <MainClasses.h>

using std::stoi;
using std::stof;
using std::vector;
using std::string;

struct Generator {
    virtual Employee* generate(vector<string> &) = 0;
    virtual ~Generator() = default;
};

struct CleanerGenerator : public Generator {
    Employee* generate(vector<string> & data) override {
        return new Cleaner(stoi(data[0]), data[1] + " " + data[2] + " " + data[3],
                           stoi(data[5]));
    }
};
struct DriverGenerator : public Generator {
    Employee* generate(vector<string> & data) override {
        return new Driver(stoi(data[0]), data[1] + " " + data[2] + " " + data[3],
                          stoi(data[5]), stoi(data[6]));
    }
};
struct TesterGenerator : public Generator {
    Employee* generate(vector<string> & data) override {
        return new Tester(stoi(data[0]), data[1] + " " + data[2] + " " + data[3],
                          stoi(data[5]), stof(data[6]), data[7]);
    }
};
struct ProgrammerGenerator : public Generator {
    Employee* generate(vector<string> & data) override {
        return new Programmer(stoi(data[0]), data[1] + " " + data[2] + " " + data[3],
                              stoi(data[5]), stof(data[6]), data[7]);
    }
};
struct TeamLeaderGenerator : public Generator {
    Employee* generate(vector<string> & data) override {
        return new TeamLeader(stoi(data[0]), data[1] + " " + data[2] + " " + data[3], stoi(data[5]),
                              stof(data[6]), data[7], stoi(data[8]), stoi(data[9]));
    }
};
struct ManagerGenerator : public Generator {
    Employee* generate(vector<string> &data) override {
        return new Manager(stoi(data[0]), data[1] + " " + data[2] + " " + data[3], stof(data[5]), data[6]);
    }
};
struct ProjectManagerGenerator : public Generator {
    Employee* generate(vector<string> &data) override {
        return new ProjectManager(stoi(data[0]), data[1] + " " + data[2] + " " + data[3], stof(data[5]),
                                  data[6], stoi(data[7]), stoi(data[8]));
    }
};
struct SeniorManagerGenerator : public Generator {
    Employee* generate(vector<string> &data) override {
        return new SeniorManager(stoi(data[0]), data[1] + " " + data[2] + " " + data[3], stof(data[5]),
                                 stoi(data[6]), stoi(data[7]));
    }
};


#endif //TASK1_GENERATORS_H
