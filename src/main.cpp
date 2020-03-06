//
// Created by Оксана on 04.03.2020.
//
#include <sstream>
#include <fstream>
#include <iostream>
#include "factory.h"
#include "abstracts.h"
#include "interfaces.h"
#include "basic.h"
#include <string>
#include <stdlib.h>
#include <windows.h>
#include <vector>
#include <map>

using namespace std;

extern map <string, int> projects;

void setProjects(){
    ifstream fin("../projects.txt");
    string input;
    while(getline(fin, input)){
        cout << input;
        vector <string> inputParts = split(input, ' ');
        projects[inputParts[0]] = atoi(inputParts[1].c_str());
    }
    fin.close();
}
vector<Employee*> createWorkers(){
    ifstream fin("../employees.txt");
    string input;
    vector <Employee*> employees;
    while(getline(fin, input)){
        vector<string> inputParts = split(input, ' ');
        employees.push_back(Factory::createEmployee(inputParts));
    }
    fin.close();
    return employees;
}

int main(){
    SetConsoleOutputCP(65001);
    setProjects();
    //cout << projects[0];
    vector<Employee*> employees = createWorkers();
    employees[1]->setTime(40);
    employees[1]->calcPayment();
    cout << employees[1]->getPayment();
}
