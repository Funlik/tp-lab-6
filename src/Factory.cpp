#include "Factory.h"

Factory::Factory()
{
    num = 0;
}

Factory::~Factory()
{
}

int Factory::getNum()
{
    return this->num;
}

std::vector<Cleaner> Factory::getCleaners()
{
    return this->cleaners;
}

std::vector<Driver> Factory::getDrivers()
{
    return this->drivers;
}

std::vector<Programmer> Factory::getProgrammers()
{
    return this->programmers;
}

std::vector<Tester> Factory::getTesters()
{
    return this->testers;
}

std::vector<TeamLeader> Factory::getTeamLeaders()
{
    return this->teamLeaders;
}

std::vector<Manager> Factory::getManager()
{
    return this->managers;
}

std::vector<ProjectManager> Factory::getProjectManagers()
{
    return this->projectManagers;
}

std::vector<SeniorManager> Factory::getSeniorManager()
{
    return this->seniorManagers;
}

void Factory::addCleaner(Cleaner cleaner)
{
    this->num++;
    this->cleaners.push_back(cleaner);
}

void Factory::addDriver(Driver driver)
{
    this->num++;
    this->drivers.push_back(driver);
}

void Factory::addProgrammer(Programmer programmer)
{
    this->num++;
    this->programmers.push_back(programmer);
}

void Factory::addTester(Tester tester)
{
    this->num++;
    this->testers.push_back(tester);
}

void Factory::addTeamLeader(TeamLeader teamLeader)
{
    this->num++;
    this->teamLeaders.push_back(teamLeader);
}

void Factory::addManager(Manager manager)
{
    this->num++;
    this->managers.push_back(manager);
}

void Factory::addProjectManager(ProjectManager projectManager)
{
    this->num++;
    this->projectManagers.push_back(projectManager);
}

void Factory::addSeniorManager(SeniorManager seniorManager)
{
    this->num++;
    this->seniorManagers.push_back(seniorManager);
}

void Factory::addWorker(std::string data)
{
    int id;
    std::string name;
    double worktime;
    double base;
    double budget;
    double percent;
    double leaderBase;
    size_t index;
    size_t new_index;

    std::string wpos = data.substr(0, 3);

    index = data.find(' ', 4);
    id = atof(data.substr(4,index-4).c_str());
    new_index = data.find(' ', index+1);
    name = data.substr(index+1, new_index-index);
    index = new_index;
    new_index = data.find(' ', index+1);

    if      (wpos == "Clr")
    {
        worktime = atof(data.substr(index+1, new_index-index).c_str());
        base = atof(data.substr(new_index+1).c_str());
        Cleaner cleaner(id, name, worktime, base);
        this->addCleaner(cleaner);
    }
    else if (wpos == "Dvr")
    {
        worktime = atof(data.substr(index+1, new_index-index).c_str());
        base = atof(data.substr(new_index+1).c_str());
        Driver driver(id, name, worktime, base);
        this->addDriver(driver);
    }
    else if (wpos == "Pmr")
    {
        worktime = atof(data.substr(index+1, new_index-index).c_str());
        index = new_index;
        new_index = data.find(' ', index+1);
        base = atof(data.substr(index+1, new_index-index).c_str());
        index = new_index;
        new_index = data.find(' ', index+1);
        budget = atof(data.substr(index+1, new_index-index).c_str());
        percent = atof(data.substr(new_index+1).c_str());
        Programmer programmer(id, name, worktime, base, budget, percent);
        this->addProgrammer(programmer);
    }
    else if (wpos == "TLr")
    {
        worktime = atof(data.substr(index+1, new_index-index).c_str());
        index = new_index;
        new_index = data.find(' ', index+1);
        base = atof(data.substr(index+1, new_index-index).c_str());
        index = new_index;
        new_index = data.find(' ', index+1);
        budget = atof(data.substr(index+1, new_index-index).c_str());
        index = new_index;
        new_index = data.find(' ', index+1);
        percent = atof(data.substr(index+1, new_index-index).c_str());
        leaderBase = atof(data.substr(new_index+1).c_str());
        TeamLeader teamLeader(id, name, worktime, base, leaderBase, budget, percent);
        this->addTeamLeader(teamLeader);
    }
    else if (wpos == "Tsr")
    {
        worktime = atof(data.substr(index+1, new_index-index).c_str());
        index = new_index;
        new_index = data.find(' ', index+1);
        base = atof(data.substr(index+1, new_index-index).c_str());
        index = new_index;
        new_index = data.find(' ', index+1);
        budget = atof(data.substr(index+1, new_index-index).c_str());
        percent = atof(data.substr(new_index+1).c_str());
        Tester tester(id, name, worktime, base);
        this->addTester(tester);
    }
    else if (wpos == "Mgr")
    {
        budget = atof(data.substr(index+1, new_index-index).c_str());
        percent = atof(data.substr(new_index+1).c_str());
        Manager manager(id, name, budget, percent);
        this->addManager(manager);
    }
    else if (wpos == "PMr")
    {
        budget = atof(data.substr(index+1, new_index-index).c_str());
        index = new_index;
        new_index = data.find(' ', index+1);
        percent = atof(data.substr(index+1, new_index-index).c_str());
        leaderBase = atof(data.substr(new_index+1).c_str());
        ProjectManager projectManager(id, name, leaderBase, budget, percent);
        this->addProjectManager(projectManager);
    }
    else if (wpos == "SMr")
    {
        budget = atof(data.substr(index+1, new_index-index).c_str());
        index = new_index;
        new_index = data.find(' ', index+1);
        percent = atof(data.substr(index+1, new_index-index).c_str());
        leaderBase = atof(data.substr(new_index+1).c_str());
        SeniorManager seniorManager(id, name, leaderBase, budget, percent);
        this->addSeniorManager(seniorManager);
    }
    
}

void Factory::readWorkers(std::string fname)
{
    std::ifstream file(fname);
    std::string s;
    while(getline(file, s))
    {
        this->addWorker(s);
        std::cout << s << std::endl;
    }
    file.close();
}