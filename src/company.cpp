#pragma once
#include <map>
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include "Company.h"

using namespace std;


map <string, int> Projects;
void setProjects() {
    ifstream fin("projects.txt");
    string projName;
    int budget;
    while (fin >> projName) {
        fin >> budget;
        Projects[projName] = budget;
        
    }

    fin.close();
}