//
//  Employee.cpp
//  StaffDemo
//
//  Created by Олеся Мартынюк on 26.02.2020.
//  Copyright © 2020 Olesia Martinyuk. All rights reserved.
//

#include <stdio.h>
#include "Employee.h"

#include <string>

Employee::Employee(int ID, std::string name, int worktime){
    this->ID = ID;
    this->name = name;
    this->worktime = worktime;
    this->payment = 0;
}
void Employee::set_id(int ID){ // === [ Установка ID ] ===
    this->ID = ID;
}
int Employee::get_id(){
    return this->ID; // === [ Получение ID ] ===
}
void Employee::set_name(std::string name){ // === [ Установка имени ] ===
       this->name = name;
}
std::string Employee::get_name(){ // === [ Получение имени ] ===
       return this->name;
}
void Employee::set_wt(int worktime){ // === [ Установка отработанного времени ] ===
    this->worktime = worktime;
}
int Employee::get_wt(){
    return this->worktime; // === [ Получение отработанного времени ] ===
}
int Employee::get_payment(){ // === [ Получение платы за работу ] ===
    return this->payment;
}
void Employee::set_payment(int payment){ // === [ Установка заработанных денег ] ===
    this->payment = payment;
}
void Employee::count_payment() {} // === [ Установка заработанных денег ] ===
