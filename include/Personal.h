//
//  Personal.h
//  StaffDemo
//
//  Created by Олеся Мартынюк on 10.03.2020.
//  Copyright © 2020 Olesia Martinyuk. All rights reserved.
//

#ifndef Personal_h
#define Personal_h

#include "Interfaces.h"
#include "Employee.h"
#include <string>

class Personal: public WorkTime, public Employee {
protected:
    int worktime;
    int base; // === [ базовая ставка руб./час ] ===
public:
    Personal(int ID, std::string name, int worktime, int base);
    int get_base(); // === [ Получение базовой ставки ] ===
    void set_base(int base); // === [ Установка базовой ставки ] ===
    int count_worktime_money(); // === [ Расчет заработной платы по времени ] ===
    void count_payment(); // === [ Установка заработанных денег ] ===
};

#endif /* Personal_h */
