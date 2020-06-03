//
//  Employee.hpp
//  StaffDemo
//
//  Created by Олеся Мартынюк on 26.02.2020.
//  Copyright © 2020 Olesia Martinyuk. All rights reserved.
//

#ifndef Employee_h
#define Employee_h

#include <stdio.h>
#include <string>

class Employee {
protected:
    int ID; // идентификационный номер
    std::string name; // имя
    int worktime = 0; // отработанное время
    int payment = 0; // заработная плата (итог)
public:
    Employee(){}
    Employee(int ID, std::string name, int worktime);
    void set_id(int ID); // === [ Установка ID ] ===
    int get_id(); // === [ Получение ID ] ===
    void set_name(std::string name); // === [ Установка имени ] ===
    std::string get_name(); // === [ Получение имени ] ===
    void set_wt(int worktime); // === [ Установка отработанного времени ] ===
    int get_wt(); // === [ Получение отработанного времени ] ===
    int get_payment(); // === [ Получение заработанных денег ] ===
    void set_payment(int payment); // === [ Установка заработанных денег ] ===
    virtual void count_payment(); // === [ Установка заработанных денег ] ===
};

#endif /* Employee_hpp */
