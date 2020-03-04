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
   Project(string _name, double _budget){
        name=_name;
        budget=_budget;

    };

    double GetBudget(){
        return budget;
    }
/*
    void Make_Team(vector<Employee*> &WORKERS){
        int globalsize=WORKERS.size();

        for(int i = 0; i<globalsize; i++){
            if((WORKERS[i]->Tell_me_your_profession()=="Programmer")||(WORKERS[i]->Tell_me_your_profession()=="Tester")||(WORKERS[i]->Tell_me_your_profession()=="TeamLeader")){
                AddEngineer(WORKERS[i]);
            }
            if((WORKERS[i]->Tell_me_your_profession()=="Manager")||(WORKERS[i]->Tell_me_your_profession()=="ProjectManager")||(WORKERS[i]->Tell_me_your_profession()=="SeniorManager")||(WORKERS[i]->Tell_me_your_profession()=="TeamLeader")){
                AddManager(WORKERS[i]);
            }
        }
    }
    */
     void Make_Team(vector<Engineer*> &ENGWORKERS, vector<Manager*> &MANWORKERS){
       //  ProjectManagers=MANWORKERS;
       //  ProjectEngineers=ENGWORKERS;

        for(int i = 0; i<ENGWORKERS.size(); i++){
                AddEngineer(ENGWORKERS[i]);
            }

        for(int i = 0; i<MANWORKERS.size(); i++){
                AddManager(MANWORKERS[i]);
            }
        }

/*
    int CntSub(){
      if(Number_of_Engineers()==0 || Number_of_Managers()==0) return 0;

      for(int i=0;i<Number_of_Managers();i++){
          if(ProjectManagers[i]->Tell_me_your_profession()=="TeamLeader"){
             ProjectManagers[i]->SetSub(Number_of_Engineers());
          }
          if(ProjectManagers[i]->Tell_me_your_profession()=="ProjectManager"){
              return (Number_of_Engineers()+Number_of_Managers()-1);
          }
          if(ProjectManagers[i]->Tell_me_your_profession()=="SeniorManager"){
              return (Number_of_Engineers()+Number_of_Managers());
          }
      }
     }*/

    void AddEngineer(Engineer* tmp){
       tmp->Add_to_Project(this);
        ProjectEngineers.push_back(tmp);
    }

    void AddManager(Manager* tmp){
        tmp->Add_to_Project(this);

        ProjectManagers.push_back(tmp);
    }
    int Number_of_Engineers(){

        return ProjectEngineers.size();
    }
    int Number_of_Managers(){

       return ProjectManagers.size();
    }
};


#endif //LAB6_PROJECT_H
