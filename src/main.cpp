#include <iostream>
#include "Cleaner.h"
#include "Driver.h"
#include "Manager.h"
#include "Employee.h"
#include "Programmer.h"
#include "ProjectManager.h"
#include "SeniorManager.h"
#include "TeamLeader.h"
#include "Tester.h"
#include "Personal.h"
#include <vector>
#include <fstream>
#include <sstream>
#include <iomanip>

using namespace std;

int main() {
    vector<Employee *> employees;
    ifstream streamFrom("C:\\Users\\daria\\CLionProjects\\lab_6\\Employees.txt");
    string input;
    while (getline(streamFrom, input, '\n')) {
        string line;
        stringstream inputStream(input);

        vector<string> entries;
        while (getline(inputStream, line, ',')) {
            entries.push_back(line);
        }

        if (entries.size() == 5) {
            if (entries[3] == "cleaner") {
                int id1 = stoi(entries[0]);
                string name1 = entries[1];
                int worktime1 = stoi(entries[2]);
                string spec1 = entries[3];
                int wage1 = stoi(entries[4]);
                Cleaner *cleaner1 = new Cleaner(id1, name1, worktime1, spec1, wage1);
                employees.push_back(cleaner1);
            } else {
                //Driver(int id, string name, int worktime, string spec, int wage
                int id1 = stoi(entries[0]);
                string name1 = entries[1];
                int worktime1 = stoi(entries[2]);
                string spec1 = entries[3];
                int wage1 = stoi(entries[4]);
                Driver *driver1 = new Driver(id1, name1, worktime1, spec1, wage1);
                employees.push_back(driver1);
            }
        }

        if (entries.size() == 7) {
            if (entries[3] == "programmer") {
                //Programmer(int id, string name, int worktime, string spec, int wage, int share, int projectBudget)
                int id = stoi(entries[0]);
                string name = entries[1];
                int wt = stoi(entries[2]);
                string spec = entries[3];
                int wage = stoi(entries[4]);
                int share = stoi(entries[5]);
                int pb = stoi(entries[6]);
                Programmer *programmer1 = new Programmer(id, name, wt, spec, wage, share, pb);
                employees.push_back(programmer1);
            } else {
//                Tester(int id, string name, int worktime, string spec, int wage, int share, int projectBudget)
                int id = stoi(entries[0]);
                string name = entries[1];
                int wt = stoi(entries[2]);
                string spec = entries[3];
                int wage = stoi(entries[4]);
                int share = stoi(entries[5]);
                int pb = stoi(entries[6]);
                Tester *tester1 = new Tester(id, name, wt, spec, wage, share, pb);
                employees.push_back(tester1);
            }
        }

        if (entries.size() == 9) {
            //TeamLeader(int id, string name, int worktime, int share, int wage, int projectBudget, int numWorkers, int payForWorker, string spec)
            int id = stoi(entries[0]);
            string name = entries[1];
            int wt = stoi(entries[2]);
            int share = stoi(entries[3]);
            int wage = stoi(entries[4]);
            int pb = stoi(entries[5]);
            int nw = stoi(entries[6]);
            int pfw = stoi(entries[7]);
            string spec = entries[8];
            TeamLeader *tl = new TeamLeader(id, name, wt, share, wage, pb, nw, pfw, spec);
            employees.push_back(tl);
        }

        if (entries.size() == 6) {
            //Manager(int id, string name, int worktime, int share, int projectBudget, string spec)
            Manager *manager1 = new Manager(stoi(entries[0]), entries[1], stoi(entries[2]), stoi(entries[3]),
                                            stoi(entries[4]), entries[5]);
            employees.push_back(manager1);
        }

        if (entries.size() == 8) {
            if (entries[5] == "projectManager") {
                //ProjectManager(int id, string name, int worktime, int share, int projectBudget, string spec, int numWorkers, int payForWorker)
                ProjectManager *pm1 = new ProjectManager(stoi(entries[0]), entries[1], stoi(entries[2]),
                                                         stoi(entries[3]), stoi(entries[4]), entries[5],
                                                         stoi(entries[6]),
                                                         stoi(entries[7]));
                employees.push_back(pm1);
            } else {
                SeniorManager *sm1 = new SeniorManager(stoi(entries[0]),entries[1],stoi(entries[2]),stoi(entries[3]),stoi(entries[4]),stoi(entries[5]),
                        stoi(entries[6]),entries[7]);
                employees.push_back(sm1);
            }

        }


    }
    streamFrom.close();
    cout<< setw(5)<<"ID"<<setw(30)<<"NAME"<<setw(30)<<"SPEC"<<setw(30)<<"PAYMENT\n";
    for(Employee *worker: employees){
        worker->calc();
        cout<<setw(5)<<worker->getId()<<setw(30)<<worker->getName()<<setw(30)<<worker->getSpec()<<setw(30)<<worker->getPayment()<<"\n";
    }

    return 0;
}