//
//  main.cpp
//  StaffDemo
//
//  Created by Олеся Мартынюк on 19.02.2020.
//  Copyright © 2020 Olesia Martinyuk. All rights reserved.
//

#include <vector>
#include <iostream>
#include <fstream>
#include <string>

#include "Employee.h"
#include "Cleaner.h"
#include "Programmer.h"
#include "TeamLeader.h"
#include "Manager.h"
#include "Driver.h"
#include "Tester.h"
#include "ProjectManager.h"
#include "SeniorManager.h"

using namespace std;

vector<Employee*> emp;

int main(int argc, const char * argv[]) {
    ifstream StaffFile("staff.txt");
    int id;
    while (StaffFile >> id) {
        string name, pos;
        int base, percent, worktime;
        StaffFile >> name >> pos >> base >> percent >> worktime;
        if (pos == "Cleaner") {
            emp.push_back(new Cleaner(id, name, worktime, base));
            emp.back()->count_payment();
        }
        else if (pos == "Driver") {
            emp.push_back(new Driver(id, name, worktime, base));
            emp.back()->count_payment();
        }
        else if (pos == "Tester") {
            emp.push_back(new Tester(id, name, worktime, base));
            ((Tester*)emp.back())->count_payment(5, 20000);
        }
        else if (pos == "Programmer") {
            emp.push_back(new Programmer(id, name, worktime, base));
            ((Programmer*)emp.back())->count_payment(5, 30000);
        }
        else if (pos == "TeamLeader") {
            emp.push_back(new TeamLeader(id, name, worktime, base));
            ((TeamLeader*)emp.back())->count_payment(9, 30000, 300);
        }
        else if (pos == "Manager") {
            emp.push_back(new Manager(id, name, worktime, percent));
            ((Manager*)emp.back())->count_payment(20, 20000);
        }
        else if (pos == "ProjectManager") {
            emp.push_back(new ProjectManager(id, name, worktime, percent));
            ((ProjectManager*)emp.back())->count_payment(20, 30000, 300);
        }
        else if (pos == "SeniorManager") {
            emp.push_back(new SeniorManager(id, name, worktime, percent));
            ((SeniorManager*)emp.back())->count_payment(20, 40000, 400);
        }
    }
    
    for (auto const& w: emp) {
        cout << w->get_id() << " - " << w->get_name() << " - " << w->get_payment() << " - " << w->get_wt() << endl;
    }
    
}

