//
// Created by aklen on 10.03.2020.
//
#include "iostream"
#include <vector>
#include <fstream>
#include <string>
#include "Employee.h"
#include "Factory.h"
using namespace std;


int main(){
    vector <Employee*> workers;
    ifstream fin("../src/employees.txt");
    if(!fin.is_open()){
        return 0;
    }

    string line;
    while(getline(fin,line)){
        size_t last = 0;
        size_t next;
        vector<string> *newLine = new vector<string>();
        while((next = line.find(" ", last)) != string::npos){
            string current = line.substr(last, next - last);
            newLine->push_back(current);
            last = next + 1;
        }
        newLine->push_back((line.substr(last,line.length() - last)));
        workers.push_back(createWorker(*newLine));
    }
    fin.close();

//for(auto i: workers){
//        cout<<i->getId()<<" "<<i->getFio()<<" "<<i->getPayment()<<"\n";
//    }
//    TeamLeader *teamLeader = new TeamLeader(1, "Andrey Klenkov Dmitrievich", 35, 1500, "project", 50000, 0.4, 2, 6000);
//    cout<<teamLeader->getPayment();
//   return 0;
}

