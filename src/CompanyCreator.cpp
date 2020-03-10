#include "CompanyCreator.h"

CompanyCreator::CompanyCreator()= default;

std::vector<std::string> CompanyCreator::splitWorkerRecord(std::string& str, char splitter)
{
    std::vector<std::string> workerVector;
    std::string workerString;
    for (char character : str)
    {
        if (character == splitter)
        {
            workerVector.push_back(workerString);
            workerString = "";
        }
        else {
            workerString += character;
        }
    }
    workerVector.push_back(workerString);
    return workerVector;
}

Employee* CompanyCreator::createWorker(std::string &workerdata)
{
    std::vector<std::string> worker = splitWorkerRecord(workerdata, ';');

    std::string worker_id = worker[0];
    std::string worker_name = worker[1];
    std::string worker_job = worker[2];
    std::string worker_worktime = worker[3];
    std::string worker_base = worker[4];
    std::string worker_bonus = worker[5];
    std::string worker_baselead = worker[6];

    if (worker_job == "Cleaner")
    {
        auto* cleaner = new Cleaner(stoi(worker_id), worker_name, stoi(worker_worktime), stoi(worker_base));
        this->workers[worker_id] = cleaner;
        return this->workers[worker_id];
    }
    else if (worker_job == "Driver")
    {
        auto* driver = new Driver(stoi(worker_id), worker_name, stoi(worker_worktime), stoi(worker_base));
        this->workers[worker_id] = driver;
        return this->workers[worker_id];
    }
    else if (worker_job == "Tester")
    {
        auto* tester = new Tester(stoi(worker_id), worker_name, stoi(worker_worktime), stoi(worker_base), stoi(worker_bonus));
        this->workers[worker_id] = tester;
        return this->workers[worker_id];
    }
    else if (worker_job == "Programmer")
    {
        auto* programmer = new Programmer(stoi(worker_id), worker_name, stoi(worker_worktime), stoi(worker_base), stoi(worker_bonus));
        this->workers[worker_id] = programmer;
        return this->workers[worker_id];
    }
    else if (worker_job == "Team Leader")
    {
        auto* teamLeader = new TeamLeader(stoi(worker_id), worker_name, stoi(worker_worktime), stoi(worker_base), stoi(worker_bonus), stoi(worker_baselead));
        this->workers[worker_id] = teamLeader;
        return this->workers[worker_id];
    }
    else if (worker_job == "Manager")
    {
        auto* manager = new Manager(stoi(worker_id), worker_name, stoi(worker_worktime), stoi(worker_bonus));
        this->workers[worker_id] = manager;
        return this->workers[worker_id];
    }
    else if (worker_job == "Project Manager")
    {
        auto* projectManager = new ProjectManager(stoi(worker_id), worker_name, stoi(worker_worktime), stoi(worker_bonus), stoi(worker_baselead));
        this->workers[worker_id] = projectManager;
        return this->workers[worker_id];
    }
    else if (worker_job == "Senior Manager")
    {
        auto* projectManager = new SeniorManager(stoi(worker_id), worker_name, stoi(worker_worktime), stoi(worker_bonus), stoi(worker_baselead));
        this->workers[worker_id] = projectManager;
        return this->workers[worker_id];
    }
    else
        {
        return nullptr;
        }
}


Employee* CompanyCreator::getWorkerByID(const std::basic_string<char>& worker_id)
{
    return this->workers[worker_id];
}

void CompanyCreator::createProject(std::string& project_name)
{
    std::vector<std::string> project_data = splitWorkerRecord(project_name, ';');

    std::string project_calling = project_data[0];
    std::string project_budget = project_data[1];
    std::string project_teamleader = project_data[2];
    std::string project_programmers = project_data[3];
    std::string project_testers = project_data[4];
    std::string project_manager = project_data[5];
    std::string project_managers = project_data[6];

    auto* project = new Projects(project_calling, stoi(project_budget));

    auto* teamLeader = (TeamLeader*)this->workers[project_teamleader];
    teamLeader->setProject(project);

    std::vector<std::string> new_workers = splitWorkerRecord(project_programmers, ',');
    for (const std::string& new_worker : new_workers)
    {
        auto* programmer = (Programmer*)this->workers[new_worker];
        programmer->setProject(project);
        this->workers[new_worker] = programmer;
        teamLeader->addProgrammers(programmer);
    }

    new_workers = splitWorkerRecord(project_testers, ',');
    for (const std::string& new_worker : new_workers)
    {
        auto* tester = (Tester*)this->workers[new_worker];
        tester->setProject(project);
        this->workers[new_worker] = tester;
        teamLeader->addTesters(tester);
    }

    auto* projectManager = (ProjectManager*)this->workers[project_manager];
    projectManager->setProject(project);

    new_workers = splitWorkerRecord(project_managers, ',');
    for (const std::string& new_worker : new_workers)
    {
        auto* manager = (Manager*)this->workers[new_worker];
        manager->setProject(project);
        this->workers[new_worker] = manager;
        projectManager->addManagers(manager);
    }
    this->workers[project_manager] = projectManager;
}

void CompanyCreator::calculatePaymentForWorkers()
{
    for (auto & worker : this->workers)
    {
        (worker.second)->calculatePayment();
    }
}

void CompanyCreator::printWorkers()
{
    for (auto & worker : this->workers)
    {
        std::cout << (worker.second)->getID() << " " << (worker.second)->getName() << " " << (worker.second)->getWorkTime() << "h " << (worker.second)->getPayment() << "$" << std::endl;
    }
}