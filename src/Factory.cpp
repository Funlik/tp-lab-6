#include "Factory.h"

Factory::Factory(vector<Project *> projects)
{
    this->projects = projects;
}

Employee *Factory::create(vector<string> data)
{
    string occupation = data[2];

    if(occupation == "Cleaner")
    {
        if(data.size() < 4)
            return nullptr;
        return ( new Cleaner(stoi(data[0]), data[1], data[2], stoi(data[3])) );
    }
    if(occupation == "Driver")
    {
        if(data.size() < 4)
            return nullptr;
        return ( new Driver(stoi(data[0]), data[1], data[2], stoi(data[3])) );
    }
    if(occupation == "Tester")
    {
        if(data.size() < 6)
            return nullptr;
        Project* current_project = nullptr;
        string request_project_name = data[5];
        for(auto* project : this->projects)
        {
            if(project->getTitle() == request_project_name)
            {
                current_project = project;
                break;
            }
        }
        if(current_project == nullptr)
            return nullptr;
        return ( new Tester(stoi(data[0]), data[1], data[2], stoi(data[3]), stoi(data[4]), current_project) );
    }
    if(occupation == "Programmer")
    {
        if(data.size() < 6)
            return nullptr;
        Project* current_project = nullptr;
        string request_project_name = data[5];
        for(auto* project : this->projects)
        {
            if(project->getTitle() == request_project_name)
            {
                current_project = project;
                break;
            }
        }
        if(current_project == nullptr)
            return nullptr;
        return ( new Programmer(stoi(data[0]), data[1], data[2], stoi(data[3]), stoi(data[4]), current_project) );
    }
    if(occupation == "TeamLeader")
    {
        if(data.size() < 7)
            return nullptr;
        Project* current_project = nullptr;
        string request_project_name = data[5];
        for(auto* project : this->projects)
        {
            if(project->getTitle() == request_project_name)
            {
                current_project = project;
                break;
            }
        }
        if(current_project == nullptr)
            return nullptr;
        return ( new TeamLeader(stoi(data[0]), data[1], data[2], stoi(data[3]), stoi(data[4]), current_project, stoi(data[6]) ) );
    }
    if(occupation == "Manager")
    {
        if(data.size() < 5)
            return nullptr;
        Project* current_project = nullptr;
        string request_project_name = data[4];
        for(auto* project : this->projects)
        {
            if(project->getTitle() == request_project_name)
            {
                current_project = project;
                break;
            }
        }
        if(current_project == nullptr)
            return nullptr;
        return ( new Manager(stoi(data[0]), data[1], data[2], stoi(data[3]), current_project) );
    }
    if(occupation == "ProjectManager")
    {
        if(data.size() < 6)
            return nullptr;
        Project* current_project = nullptr;
        string request_project_name = data[4];
        for(auto* project : this->projects)
        {
            if(project->getTitle() == request_project_name)
            {
                current_project = project;
                break;
            }
        }
        if(current_project == nullptr)
            return nullptr;
        return ( new ProjectManager(stoi(data[0]), data[1], data[2], stoi(data[3]), current_project, stoi(data[5])) );
    }
    if(occupation == "SeniorManager")
    {
        if(data.size() < 6)
            return nullptr;
        Project* current_project = nullptr;
        string request_project_name = data[4];
        for(auto* project : this->projects)
        {
            if(project->getTitle() == request_project_name)
            {
                current_project = project;
                break;
            }
        }
        if(current_project == nullptr)
            return nullptr;
        return ( new SeniorManager(stoi(data[0]), data[1], data[2], stoi(data[3]), current_project, stoi(data[5]), this->projects ) );
    }
    return nullptr;
}

void Factory::addProject(Project *newProject)
{
    this->projects.push_back(newProject);
}

void Factory::deleteProject(Project* to_delete)
{
    size_t i = 0;
    for(auto* project : this->projects)
    {
        if(project->getTitle() == to_delete->getTitle())
        {
            this->projects.erase(this->projects.begin() + i);
            return;
        }
        i++;
    }
}
