//
// Created by fiskirton on 09.03.2020.
//

#include "Extra/Helper.h"

vector<string> split(const string& s, char delimiter)
{

    vector<std::string> tokens;
    string token;
    istringstream tokenStream(s);

    while (getline(tokenStream, token, delimiter))
    {
        tokens.push_back(token);
    }

    return tokens;

}

double getRandom(double min, double max){

    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_real_distribution<double> dist(min, max);

    return dist(mt);

}

const map<string, Project *> & getProjects(const string &filename) {

    auto * projects = new map<string, Project *>;

    ifstream reader(filename);

    string line;
    vector<string> data;

    if (reader.is_open()) {
        while (getline(reader, line)){
            data = split(line, ',');
            auto * project = new Project(data[0], stoi(data[1]));
            projects->insert(make_pair(data[0], project));
        }

        reader.close();
    }

    return *projects;

}

vector<Employee *> & getEmployeesByPosition(const string &position, const vector<Employee *>& employees){

    auto * concrete_employees = new vector<Employee *>;

    for (auto emp: employees){
        if (emp->getPosition() == position){
            concrete_employees->push_back(emp);
        }
    }

    return *concrete_employees;
}