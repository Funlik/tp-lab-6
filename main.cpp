#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "Engineer.h"
#include "Employee.h"
#include "Manager.h"
#include "Personal.h"
#include "Factory.h"
using namespace std;

int main() {
    ifstream file("workers.txt");
    Factory* office = new Factory();
    vector<Employee*> workers(18);
    vector<string>positions(18);
    if (file.is_open()){
        cout << "File was opened successful:)" << endl;
        string line;
        int i = 0;
        while (getline(file, line)){
            int id, base, percent, worktime;
            string name, position;
            istringstream iss(line);
            iss >> id >> name >> position >> base >> percent >> worktime;
            positions[i] = position;
            workers[i] = office->NewEmployee(position, id, name, worktime, base, percent);
            i++;
        }
    }
    else{
        cout << "Can't open a file:(" << endl;
    }

    for (int i = 0; i < 18; i++){
        Employee* worker = workers[i];
        if (positions[i] == "Cleaner") {
            worker->CalculatePayment();
        }
        else if (positions[i] == "Driver") {
            worker->CalculatePayment();
        }
        else if (positions[i] == "Tester") {
            ((Tester*)worker)->CalculatePayment(5, 30000);
        }
        else if (positions[i] == "Programmer") {
            ((Programmer*)worker)->CalculatePayment(5, 30000);
        }
        else if (positions[i] == "TeamLeader") {
            ((TeamLeader*)worker)->CalculatePayment(8, 30000, 300);
        }
        else if (positions[i] == "Manager") {
            ((Manager*)worker)->CalculatePayment(20, 30000);
        }
        else if (positions[i] == "ProjectManager") {
            ((ProjectManager*)worker)->CalculatePayment(23, 30000, 350);
        }
        else if (positions[i] == "SeniorManager") {
            ((SeniorManager*)worker)->CalculatePayment(28, 30000, 400);
        }
        cout << worker->GetId() << " - " << worker->GetName() << " - " << positions[i] << " - " << worker->GetWorkTime() << " - "
             << worker->GetPayment() << '\n';
    }
    return 0;
}