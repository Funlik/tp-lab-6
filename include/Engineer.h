//
//  Engineer.h
//  StaffDemo
//
//  Created by Олеся Мартынюк on 26.0.2020.
//  Copyright © 2020 Olesia Martinyuk. All rights reserved.
//

#ifndef Engineer_h
#define Engineer_h

#include "Employee.h"
#include "Interfaces.h"

#include <vector>
#include <string>

class Engineer : public WorkTime, public Employee, public Project {
protected:
    int base; // === [ базовая ставка руб./час ] ===
    int budget; // === [ бюджет ] ===
    int part; // === [ часть от бюджета ] ===
public:
   Engineer(int ID, std::string name, int worktime, int base);
   int count_worktime_money(); // === [ Расчет заработной платы по времени ] ===
   int count_project_money(int part, int budget); // === [ Расчет заработной платы по доле от проекта ] ===
   void count_payment(int part, int budget); // === [ Установка заработанных денег ] ===
   void count_payment(); // === [ Установка заработанных денег ] ===
};

#endif /* Engineer_h */
