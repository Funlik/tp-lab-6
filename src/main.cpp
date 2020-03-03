#include "Employee.h"
#include "Cleaner.h"
#include "Driver.h"
#include "Tester.h"
#include "Programmer.h"
#include "TeamLeader.h"
#include "Manager.h"
#include "ProjectManager.h"
#include "SeniorManager.h"
#include <vector>
#include <iostream>
#include<random>
#include<string>
#include<fstream>
std::ifstream FileWorkers("workers.txt");

enum PROFFESIONS {MANAGER, CLEANER, DRIVER, PROGRAMMER, TEAMLEADER, TESTER, PROJECTMANAGER, SENIORMANAGER};


int main()
{
   std::vector<Employee*> employee;
   if (!FileWorkers.is_open())
   {
       std::cout<<"Error opening file";
       return 1;
   }
   int id;
   while (FileWorkers >> id)
   {
       std::string name, surname;
       FileWorkers >> name >> surname;
       std::string position;
       FileWorkers >> position;
       
       auto positionI = CLEANER;
       if (position == "Cleaner")                    positionI = CLEANER;
       if (position == "Driver")                positionI = DRIVER;
       if (position == "ProjectManager")        positionI = PROJECTMANAGER;
       if (position == "Tester")                positionI = TESTER;
       if (position == "Manager")                positionI = MANAGER;
       if (position == "TeamLeader")            positionI = TEAMLEADER;
       if (position == "SeniorManager")        positionI = SENIORMANAGER;
       if (position == "Programmer")            positionI = PROGRAMMER;
       
       int worktime, base, budget, salary, numprojects;
       double contribution;
       std::string project;
       
       switch (positionI)
       {
           case CLEANER:
               FileWorkers >> worktime;
               FileWorkers >> base;
               employee.push_back(new Cleaner(id, name + " " + surname, worktime, base));
               break;
               
           case DRIVER:
                FileWorkers >> worktime;
                FileWorkers >> base;
                employee.push_back(new Driver(id, name + " " + surname, worktime, base));
                break;
           case TESTER:
               FileWorkers >> worktime;
               FileWorkers >> base;
               FileWorkers >> project;
               FileWorkers >> budget;
               FileWorkers >> contribution;
               employee.push_back(new Tester(id, name + " " + surname, worktime, base, project, budget, contribution));
               break;
           case PROGRAMMER:
               FileWorkers >> worktime;
               FileWorkers >> base;
               FileWorkers >> project;
               FileWorkers >> budget;
               FileWorkers >> contribution;
               employee.push_back(new Programmer(id, name + " " + surname, worktime, base, project, budget, contribution));
               break;
           case TEAMLEADER:
                FileWorkers >> worktime;
                FileWorkers >> base;
                FileWorkers >> project;
                FileWorkers >> budget;
                FileWorkers >> contribution;
                FileWorkers >> salary;
                employee.push_back(new TeamLeader(id, name + " " + surname, worktime, base, project, budget, contribution, salary));
               break;
           case MANAGER:
               FileWorkers >> project;
               FileWorkers >> budget;
               FileWorkers >> contribution;
               employee.push_back(new Manager(id, name + " " + surname, project, budget, contribution));
               break;
           case PROJECTMANAGER:
               FileWorkers >> project;
               FileWorkers >> budget;
               FileWorkers >> contribution;
               FileWorkers >> salary;
               employee.push_back(new ProjectManager(id, name + " " + surname, project, budget, contribution, salary));
               break;
           case SENIORMANAGER:
                FileWorkers >> numprojects;
                double contribution;
                FileWorkers >> contribution;
                int salary;
                FileWorkers >> salary;
                employee.push_back(new SeniorManager(id, name + " " + surname, numprojects, contribution, salary));
               break;
       }
            
   }
   for (int i = 0; i < employee.size(); ++i)
   {
       employee[i]->setPayment();
       std::cout << employee[i]->getId() << "\t" << employee[i]->getFio() << "\t" << employee[i]->getPayment() << "\t" << employee[i]->getWorkTime() << "\n";
   }
   return 0;
}
