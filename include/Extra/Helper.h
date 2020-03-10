//
// Created by fiskirton on 09.03.2020.
//

#ifndef STUFF_HELPER_H
#define STUFF_HELPER_H

#include <vector>
#include <string>
#include <sstream>
#include <random>
#include <iostream>
#include <map>
#include <fstream>
#include <random>

#include "Classes/Common/Project.h"
#include "Classes/Abstract/Employee.h"
#include "Factory/Factory.h"

using namespace std;

vector<string> split(const string& s, char delimiter);

double getRandom(double min, double max);

const map<string, Project *> & getProjects(const string &filename);

vector<Employee *> & getEmployeesByPosition(const string &position, const vector<Employee *>& employees);

#endif //STUFF_HELPER_H
