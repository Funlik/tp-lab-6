//
//  ProjectManager.hpp
//  StaffDemo
//
//  Created by Олеся Мартынюк on 11.03.2020.
//  Copyright © 2020 Olesia Martinyuk. All rights reserved.
//

#ifndef ProjectManager_h
#define ProjectManager_h

#include <stdio.h>
#include <vector>
#include "Manager.h"
#include "Interfaces.h"

class ProjectManager: public Manager {
private:
    int PM_salary;
    std::vector <Manager*> managers;
public:
    ProjectManager(int ID, std::string name, int worktime, int percent);
    void add_manager(Manager* manager); // === [ Добавить манагера] ===
    void delete_manager(Manager* manager); // === [ Удалить манагера ] ===
    int count_HEAD_payment(int leadbase); // === [ Получение процентов от прогеров и тестеров ] ===
    void count_payment(int percent, int budget, int leadbase); // // === [ Установка заработанных денег ]
//    ????????????????????????
};

#endif /* ProjectManager_h */
