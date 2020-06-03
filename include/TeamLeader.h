//
//  TeamLeader.h
//  StaffDemo
//
//  Created by Олеся Мартынюк on 10.03.2020.
//  Copyright © 2020 Olesia Martinyuk. All rights reserved.
//

#ifndef TeamLeader_h
#define TeamLeader_h

#include "Programmer.h"
#include "Tester.h"
#include <string>
#include <vector>

class TeamLeader: public Programmer {
private:
    int TL_salary;
    std::vector<Tester*> testers;
    std::vector<Programmer*> programmers;
public:
    TeamLeader(int ID, std::string name, int worktime, int base);
    void add_tester(Tester* tester);  // === [ Добавить тестера ] ===
    void add_programmer(Programmer* programmer); // === [ Добавить программиста ] ===
    void delete_tester(Tester* tester); // === [ Удалить тестера ] ===
    void delete_programmer(Programmer* programmer); // === [ Удалить программиста ] ===
    int count_HEAD_salary(int TL_salary); // === [ Получение процентов от прогеров и тестеров ] ===
    void count_payment(int part, int budget, int TL_salary); // === [ Установка заработанных денег ] ===
};
#endif /* TeamLeader_h */
