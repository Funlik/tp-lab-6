//
//  SeniorManager.hpp
//  StaffDemo
//
//  Created by Олеся Мартынюк on 11.03.2020.
//  Copyright © 2020 Olesia Martinyuk. All rights reserved.
//

#ifndef SeniorManager_h
#define SeniorManager_h

#include <stdio.h>
#include <vector>
#include "ProjectManager.h"

class SeniorManager: public ProjectManager {
private:
    int SM_salary;
    std::vector<ProjectManager*> project_managers;

public:
   SeniorManager(int ID, std::string name, int worktime, int percent);
   void add_project_manager(ProjectManager* project_manager); // === [ Добавить проектного манагера ] ===
   void delete_project_manager(ProjectManager* project_manager); // === [ Добавить проектного манагера ] ===
   int count_HEAD_payment(int leadbase); // === [ Получение процентов от проектных манагеров ] ===
   void count_payment(int percent, int budget, int leadbase); // // === [ Установка заработанных денег ]
  //  ??????????
};

#endif /* SeniorManager_h */
