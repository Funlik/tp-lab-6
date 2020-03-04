#include <iostream>
#include "Employee.h"
#include "Personal.h"
#include "WorkTime.h"
#include "Engineer.h"
#include "Manager.h"
#include <fstream>
#include <sstream>
#include <cstdlib>
#include "Project.h"

using namespace std;

std::vector<std::string> split(const std::string& s, char delimiter) {
    std::vector<std::string> tokens;
    std::string token;
    std::istringstream tokenStream(s);
    while (std::getline(tokenStream, token, delimiter))
        tokens.push_back(token);
    return tokens;
}


void Create2(vector<string> &info, vector<Employee*> &WORKERS, vector<Manager*> & Managers, vector <Engineer*> &Engineers){
    static int i =0;
    string buf = info[0];
    i++;
        if(buf == "Driver"){
            Employee * temp = new Driver(stof(info[2]),i,info[1],0,info[0]);
            WORKERS.emplace_back(temp);
        }
        else if(buf == "Cleaner"){
            Employee * temp = new Cleaner(stof(info[2]),i,info[1],0,info[0]);
           WORKERS.emplace_back(temp);
        }
        else if(buf == "Programmer"){
            Engineer * temp = new Programmer(0.1,stof(info[2]),i,info[1],0,info[0]);
         //  WORKERS.emplace_back(temp);
            Engineers.emplace_back(temp);
        }
        else if(buf == "Tester"){
            Engineer * temp = new Tester(0.1,stof(info[2]),i,info[1],0,info[0]);
        //   WORKERS.emplace_back(temp);
            Engineers.emplace_back(temp);
        }
        else if(buf == "TeamLeader"){
            Engineer * temp = new TeamLeader(0.1,stof(info[2]),i,info[1],0,info[0],stoi(info[4]),stof(info[3]));
     //      WORKERS.emplace_back(temp);
             Engineers.emplace_back(temp);
        }
        else if(buf == "Manager"){
            Manager * temp = new Manager(0.1  ,i,info[1],0,info[0]);
          //  WORKERS.emplace_back(temp);
            Managers.emplace_back(temp);
        }
        else if(buf == "ProjectManager"){
            Manager * temp = new ProjectManager(0.25,i,info[1],0,info[0],stoi(info[3]),stoi(info[2]));
         //  WORKERS.emplace_back(temp);
            Managers.emplace_back(temp);
        }
        else if(buf == "SeniorManager"){
            Manager * temp = new SeniorManager(0.25,i,info[1],0,info[0],stoi(info[3]),stoi(info[2]));
        //    WORKERS.emplace_back(temp);
            Managers.emplace_back(temp);
        }

}

int main() {

    vector<string> Worker;
    vector<Employee*> WORKERS;
    vector<Manager*> Managers;
    vector<Engineer*> Engineers;
    ifstream fs1("/Users/antonkorkunov/CLionProjects/lab6/Workers", ios::in);
    if(!fs1) return 2;
    while(!fs1.eof()){
        std::string buf;
        getline(fs1,buf,'\n');
        Worker.push_back(buf);
        vector<string> data=split(buf,' ');
        Create2(data,WORKERS,Managers,Engineers);
        for(auto s : data)
            std::cout << s << " ";
        std::cout << std::endl;
    }
    fs1.close();


    Project NewProject("bruh",10000);


   NewProject.Make_Team(Engineers,Managers);
//   NewProject.CntSub();

   cout<<"Personal:\n";
    for(int i = 0; i<WORKERS.size();i++){
        WORKERS[i]->setWorktime(30);
        WORKERS[i]->Calculate();
        WORKERS[i]->Payday();
    }

    cout<<"\nManagers:\n";
    for(int i = 0; i<Managers.size();i++){
        Managers[i]->setWorktime(30);
        Managers[i]->Calculate();
        Managers[i]->Payday();
    }

    cout<<"\nEngineers:\n";
    for(int i = 0; i<Engineers.size();i++){
        Engineers[i]->setWorktime(30);
        Engineers[i]->Calculate();
        Engineers[i]->Payday();
    }


    return 0;
}