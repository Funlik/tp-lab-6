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
//#include <windows.h>
#include <vector>
#include <map>

using namespace std;

extern map <string, int> projects;

void setProjects(){
    ifstream fin("../projects.txt");
    string input;
    while(getline(fin, input)){
        vector <string> inputParts = split(input, ' ');
        projects[inputParts[0]] = stoi(inputParts[1]);
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
    //SetConsoleOutputCP(65001);
    setProjects();
    //cout << projects[0];
    vector<Employee*> employees = createWorkers();
    cout << "Statement of workers: each employee works 40 hours\n";
    int totalSalary = 0;
    for(auto x: employees){
        x->setTime(40);
        x->calcPayment();
        totalSalary += x->getPayment();
        cout << x->getFio() << " " << x->getPayment() << endl;
    }
    cout << "Total salary: " << totalSalary;


}
