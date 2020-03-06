//
// Created by ASUS on 05.03.2020.
//

#ifndef PAYMENT_SPLIT_H
#define PAYMENT_SPLIT_H

#include <sstream>
#include "ProjectTeam.h"

std::vector<ProjectTeam> split(std::ifstream& file_people, std::ifstream& file_projects){
    std::string line;
    std::vector<std::string> person;

    std::vector<ProjectTeam> teams;
    while(std::getline(file_projects, line, ' ')){
        std::string name = line;
        std::getline(file_projects, line, '\n');
        int value = stoi(line);
        teams.emplace_back(value, name);
    }
    while(std::getline(file_people, line, '\n')){
        std::stringstream person_line(line);
        while(std::getline(person_line, line, ' ')) {
            person.push_back(line);
        }
        //Employee* employee = fabric(person);
        for(auto& x : teams){
            if(x.getName() == line){
                fabric(x, person);
            }
        }
        if(line == "AllProjects")
            fabric(teams[0], person);
        person.clear();
    }

    return teams;
}

#endif //PAYMENT_SPLIT_H
