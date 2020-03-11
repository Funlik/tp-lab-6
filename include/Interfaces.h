//
//  Interfaces.h
//  StaffDemo
//
//  Created by Олеся Мартынюк on 10.03.2020.
//  Copyright © 2020 Olesia Martinyuk. All rights reserved.
//

#ifndef Interfaces_h
#define Interfaces_h

class Heading {
public:
   virtual int count_HEAD_salary() = 0; // === [ Расчет заработной платы тим лидера ] ===
};

class Project {
public:
   virtual int count_project_money(int part, int budget) = 0; // === [ Расчет заработной платы по доле от проекта ] ===
};

class WorkTime{
public:
    virtual int count_worktime_money() = 0; // === [ Расчет заработной платы по времени ] ===
};

#endif /* Interfaces_h */
