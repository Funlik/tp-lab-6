//
// Created by Anton Korkunov on 05/03/2020.
//

#include "Project.h"

Project::Project(string _name, double _budget){
name=_name;
budget=_budget;

};

double Project::GetBudget(){
    return budget;
}

void Project::Make_Team(vector<Engineer*> &ENGWORKERS, vector<Manager*> &MANWORKERS){

    for(int i = 0; i<ENGWORKERS.size(); i++){
        AddEngineer(ENGWORKERS[i]);
    }

    for(int i = 0; i<MANWORKERS.size(); i++){
        AddManager(MANWORKERS[i]);
    }
}

void Project::AddEngineer(Engineer* tmp){
    tmp->Add_to_Project(this);
    ProjectEngineers.push_back(tmp);
}

void Project::AddManager(Manager* tmp){
    tmp->Add_to_Project(this);

    ProjectManagers.push_back(tmp);
}
int Project::Number_of_Engineers(){

    return ProjectEngineers.size();
}
int Project::Number_of_Managers(){

    return ProjectManagers.size();
}

string Project::getName(){
    return name;
}