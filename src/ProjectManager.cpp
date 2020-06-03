//
//  ProjectManager.cpp
//  StaffDemo
//
//  Created by Олеся Мартынюк on 11.03.2020.
//  Copyright © 2020 Olesia Martinyuk. All rights reserved.
//

#include "ProjectManager.h"

ProjectManager::ProjectManager(int ID, std::string name, int worktime, int percent): Manager(ID, name, worktime, percent) {}

void ProjectManager::add_manager(Manager* manager) { // === [ Добавить манагера] ===
    this->managers.push_back(manager);
}

void ProjectManager::delete_manager(Manager* manager) {  // === [ Удалить манагера ] ===
    int n = int(this->managers.size());
    for (int i = 0; i < n; i++) {
        if (this->managers[i] == manager) {
            this->managers.erase(this->managers.begin() + i);
            break;
        }
    }
}

int ProjectManager::count_HEAD_payment(int leadbase) {
   return leadbase * this->managers.size();
}

void ProjectManager::count_payment(int percent, int budget, int leadbase)
{
   this->payment = count_project_money(percent, budget) + count_HEAD_payment(leadbase);
}
//??????????????
