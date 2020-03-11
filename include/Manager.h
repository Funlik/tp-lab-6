//
//  Manager.h
//  StaffDemo
//
//  Created by Олеся Мартынюк on 10.03.2020.
//  Copyright © 2020 Olesia Martinyuk. All rights reserved.
//

#ifndef Manager_hpp
#define Manager_hpp

#include <stdio.h>

#include "Employee.h"
#include "Interfaces.h"

class Manager : public Employee, public Project {
protected:
    int percent;
    int budget;
public:
    Manager(int ID, std::string name, int worktime, int percent);
    int get_percent();
    void set_percent(int percent);
    void count_payment();
    int count_project_money (int percent, int budget);
    virtual void count_payment(int percent, int budget);
};

#endif /* Manager_h */

