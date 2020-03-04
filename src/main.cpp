//
// Created by Илья Соловьёв on 19.02.2020.
//

#include "iostream"

using namespace std;

#include "general.h"
#include "personal.h"
#include "engineer.h"
#include "manager.h"
#include <vector>
#include <string>
#include <fstream>
#include "workersFabric.h"

int main() {
//    vector<Employee*> workers;
//    Driver *dr = new Driver(1, "Petr", 5, 500);
//    workers.push_back(dr);
//    Cleaner *cl = new Cleaner(2, "Masha", 6, 400);
//    workers.push_back(cl);
//
//    for (auto worker: workers){
//        cout<< worker->getName()<<" "<<worker->getPayment()<<endl;
//    }

    ifstream in("../src/data.txt");
    if (!in.is_open()) {
        return 0;
    }

    vector<Employee *> workers;


    string line;
    while (getline(in, line)) {
        size_t prev = 0;
        size_t next;
        vector<string> *vectorLine = new vector<string>(0);

        while ((next = line.find(" ", prev)) != string::npos) {
            string tmp = line.substr(prev, next - prev);
            vectorLine->push_back(tmp);
            prev = next + 1;
        }
        vectorLine->push_back(line.substr(prev, line.length() - prev));
        workers.push_back(createWorker(*vectorLine));
    }
    in.close();


    for (auto worker = workers.begin(); worker != workers.end(); worker++) {
        cout << (*worker)->getWritingOut() << endl;
    }


    return 0;
}