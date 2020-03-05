//
// Created by Anton Korkunov on 13/02/2020.
//

#ifndef LAB6_PROJECT_H
#define LAB6_PROJECT_H

#include "Employee.h"
#include "Manager.h"
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <vector>
#include "Engineer.h"


using namespace std;

class Project{
private:
    string name;
    double budget;
    vector <Engineer*> ProjectEngineers;
    vector <Manager*> ProjectManagers;

public:
    Project(string _name, double _budget);
    double GetBudget();
    void Make_Team(vector<Engineer*> &ENGWORKERS, vector<Manager*> &MANWORKERS);
    void AddEngineer(Engineer* tmp);
    void AddManager(Manager* tmp);
    int Number_of_Engineers();
    int Number_of_Managers();
    string getName();
};


#endif //LAB6_PROJECT_H
