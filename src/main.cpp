//
// Created by Mikhail on 26.02.2020.
//
#include <Interfaces.h>
#include <AbstractClasses.h>
#include <MainClasses.h>
#include <Factory.h>

#include <map>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>

using std::ifstream;
using std::map;
using std::string;
using std::vector;
using std::stringstream;

extern map <string, int> projects;

vector<string> split(const string& s, char del = ' ') {
    stringstream ss(s);
    vector<string> out;
    string cur;
    while(getline(ss, cur, del)) {
        out.push_back(cur);
    }
    return out;
}

void setProjects(){
    ifstream fin("../projects.txt");
    string input;
    while(getline(fin, input)){
        vector<string> pr = split(input);
        projects[pr[0]] = stoi(pr[1]);
    }
    fin.close();
}

vector<Employee*> createWorkers(){
    ifstream fin("../employees.txt");
    string cur;
    vector <Employee*> employees;
    while(getline(fin, cur)){
        auto parts =  split(cur, ' ');
        Factory* fac = new Factory();
        employees.push_back(fac->createEmployee(parts));
    }
    fin.close();
    return employees;
}

int main() {
    setProjects();
    vector<Employee*> employees = createWorkers();
    employees[1]->setTime(80);
    employees[1]->calcPayment();
    std::cout << employees[1]->getPayment();
}