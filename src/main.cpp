//
// Created by lacos on 19.02.2020.
//
#include <iostream>
#include <iomanip>
#include <vector>
#include <fstream>
#include <sstream>
#include "employee.h"
#include "personal.h"
#include "engineer.h"
#include "manager.h"
#include "cleaner.h"
#include "programmer.h"
#include "tester.h"
#include "project_manager.h"
#include "team_leader.h"
#include "senior_manager.h"

using namespace std;

int main()
{
    vector<Employee*> employees;

    ifstream stream_from("staff.txt");

    string input;
    string currentStudentName;

    while (std::getline(stream_from, input, '\n'))
    {
        string line;
        stringstream inputStream(input);

        vector<string> tokens;
        while (std::getline(inputStream, line, ';'))
            tokens.push_back(line);

        if (tokens.size() == 3)
        {
            SeniorManager* seniorManager = new SeniorManager(tokens[0], tokens[1], tokens[2], "ZennoLab", 0.7, 30, 4000);
            employees.push_back(seniorManager);
            continue;
        }

        if (tokens.size() == 4)
        {
            if (tokens[2] == "Cleaner")
            {
                Cleaner* cleaner = new Cleaner(tokens[0], tokens[1], tokens[2], stoi(tokens[3]), 120);
                employees.push_back(cleaner);
            }

            if (tokens[2] == "Manager")
            {
                Manager* manager = new Manager(tokens[0], tokens[1], tokens[2], tokens[3], 0.3);
                employees.push_back(manager);
            }

            if (tokens[2] == "Project manager")
            {
                int personalCount = tokens[3] == "ZennoPosterPro" ? 12 : tokens[3] == "CapMonster2" ? 9 : 5;
                ProjectManager* projectManager = new ProjectManager(tokens[0], tokens[1], tokens[2], tokens[3], 0.55, personalCount, 700);
                employees.push_back(projectManager);
            }

            continue;
        }

        if (tokens.size() == 5)
        {
            if (tokens[2] == "Programmer")
            {
                Programmer* programmer = new Programmer(tokens[0], tokens[1], tokens[2], tokens[4], stoi(tokens[3]), 160, 0.1);
                employees.push_back(programmer);
            }

            if (tokens[2] == "Tester")
            {
                Tester* tester = new Tester(tokens[0], tokens[1], tokens[2], tokens[4], stoi(tokens[3]), 130, 0.2);
                employees.push_back(tester);
            }

            if (tokens[2] == "Team leader")
            {
                int personalCount = tokens[3] == "ZennoPosterPro" ? 12 : tokens[3] == "CapMonster2" ? 9 : 5;
                TeamLeader* tester = new TeamLeader(tokens[0], tokens[1], tokens[2], tokens[4], stoi(tokens[3]), 160, 0.2, personalCount, 7000);
                employees.push_back(tester);
            }
        }
    }

    stream_from.close();

    cout << setw(3) << "Id" << setw(25) << "Name" << setw(20) << "Position" << setw(8) << "Payment" << endl;
    for (auto emp : employees)
    {
        emp->Calculate();
        cout << setw(3) << emp->GetId() << setw(25) << emp->GetName() << setw(20) << emp->GetPosition() << setw(8) << emp->GetSalary() << endl;
    }

    return 0;
}
