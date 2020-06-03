//
//  Engineer.cpp
//  StaffDemo
//
//  Created by Олеся Мартынюк on 26.02.2020.
//  Copyright © 2020 Olesia Martinyuk. All rights reserved.
//

#include <stdio.h>

#include "Engineer.h"
#include "Employee.h"
#include "Interfaces.h"

Engineer::Engineer(int ID, std::string name, int worktime, int base) : Employee(ID, name, worktime) {
   this->base = base;
}

int Engineer::count_worktime_money() { // === [ Расчет заработной платы по времени ] ===
   return this->worktime * this->base;
}

int Engineer::count_project_money(int part, int budget) { // === [ Расчет заработной платы по доле от проекта ] ===
   return (part*budget)/100;
}

void Engineer::count_payment(int part, int budget) { // === [ Установка заработанных денег ] ===
   this->payment = count_worktime_money() + count_project_money(part, budget);
}

void Engineer::count_payment() {}; // === [ Установка заработанных денег ] ===

#include <vector>
