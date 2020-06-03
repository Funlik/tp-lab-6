//
//  Personal.cpp
//  StaffDemo
//
//  Created by Олеся Мартынюк on 10.03.2020.
//  Copyright © 2020 Olesia Martinyuk. All rights reserved.
//

#include <stdio.h>
#include "Personal.h"

Personal::Personal(int ID, std::string name, int worktime, int base): Employee(ID, name, worktime){
   this->base = base;
   this->worktime = worktime;
}
int Personal::get_base(){ // === [ Получение базовой ставки ] ===
   return this->base;
}
void Personal::set_base(int base){ // === [ Установка базовой ставки ] ===
   this->base = base;
}
int Personal::count_worktime_money(){ // === [ Расчет заработной платы по времени ] ===
   return (this->worktime * this->base);
}
void Personal::count_payment() { // === [ Установка заработанных денег ] ===
    this->payment = count_worktime_money();
}




