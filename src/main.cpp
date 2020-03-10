#include "CompanyCreator.h"

#include <iostream>
#include <vector>
#include <fstream>

int main()
{
    std::vector<Employee*> workers;
    auto* compCreator = new CompanyCreator();
    std::ifstream workers_file("../workers.txt");
    std::string worker;

    getline(workers_file, worker, '\n');
    while (!workers_file.eof())
    {
        getline(workers_file, worker, '\n');
        if (!worker.empty())
        {
            workers.push_back(compCreator->createWorker(worker));
        }
    }
    workers_file.close();

    std::ifstream project_file("../projects.txt");
    getline(project_file, worker, '\n');
    while (!project_file.eof())
    {
        getline(project_file, worker, '\n');
        if (!worker.empty())
        {
            compCreator->createProject(worker);
        }
    }
    project_file.close();

    compCreator->calculatePaymentForWorkers();
    compCreator->printWorkers();
}