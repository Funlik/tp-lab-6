//
//  TeamLeader.cpp
//  StaffDemo
//
//  Created by Олеся Мартынюк on 10.03.2020.
//  Copyright © 2020 Olesia Martinyuk. All rights reserved.
//

#include <stdio.h>
#include "TeamLeader.h"


TeamLeader::TeamLeader(int ID, std::string name, int worktime, int base) : Programmer(ID, name, worktime, base) {}

void TeamLeader::add_tester(Tester* tester) { // === [ Добавить тестера ] ===
   this->testers.push_back(tester);
}

void TeamLeader::add_programmer(Programmer* programmer) {  // === [ Добавить программиста ] ===
   this->programmers.push_back(programmer);
}


void TeamLeader::delete_tester(Tester* tester) { // === [ Удалить тестера ] ===
    int n = int(this->testers.size());
    for (int i = 0; i < n; i++) {
       if (this->testers[i] == tester) {
           this->testers.erase(this->testers.begin() + i);
           break;
       }
    }
}

void TeamLeader::delete_programmer(Programmer* programmer) {  // === [ Удалить программиста ] ===
    int n = int(this->programmers.size());
    for (int i = 0; i < n; i++) {
       if (this->programmers[i] == programmer) {
           this->programmers.erase(this->programmers.begin() + i);
           break;
       }
   }
}

int TeamLeader::count_HEAD_salary(int TL_salary) {  // === [ Получение процентов от прогеров и тестеров ] ===
   return TL_salary * (this->testers.size() + this->programmers.size());
}

void TeamLeader::count_payment(int part, int budget, int TL_salary) {  // === [ Установка заработанных денег ]
    this->payment = count_worktime_money() + count_project_money(part, budget) + count_HEAD_salary(TL_salary);
} 
