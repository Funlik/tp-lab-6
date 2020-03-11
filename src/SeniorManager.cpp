//
//  SeniorManager.cpp
//  StaffDemo
//
//  Created by Олеся Мартынюк on 11.03.2020.
//  Copyright © 2020 Olesia Martinyuk. All rights reserved.
//

#include "SeniorManager.h"

SeniorManager::SeniorManager(int ID, std::string name, int worktime, int base) : ProjectManager(ID, name, worktime, base) {}

void SeniorManager::add_project_manager(ProjectManager* project_manager) {
    this->project_managers.push_back(project_manager);
}

void SeniorManager::delete_project_manager(ProjectManager* project_manager) {
    int n = int(this->project_managers.size());
    for (int i = 0; i < n; i++) {
       if (this->project_managers[i] == project_manager) {
           this->project_managers.erase(this->project_managers.begin() + i);
           break;
       }
   }
}

int SeniorManager::count_HEAD_payment(int leadbase) {
   return leadbase * this->project_managers.size();
}

void SeniorManager::count_payment(int percent, int budget, int leadbase)
{
   this->payment = count_project_money(percent, budget) + count_HEAD_payment(leadbase);
}
//       ???????????????????????
