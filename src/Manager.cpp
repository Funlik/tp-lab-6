//
//  Manager.cpp
//  StaffDemo
//
//  Created by Олеся Мартынюк on 10.03.2020.
//  Copyright © 2020 Olesia Martinyuk. All rights reserved.
//

#include "Manager.h"

Manager::Manager(int ID, std::string name, int worktime, int percent): Employee(ID, name, worktime) {
   this->percent = percent;
}
int Manager::get_percent() {
   return this->percent;
}
void Manager::set_percent(int percent) {
   this->percent = percent;
}
void Manager::count_payment() {}

int Manager::count_project_money(int percent, int budget) {
   return (percent * budget)/100;
}
void Manager::count_payment(int percent, int budget) {
   this->payment = count_project_money(percent, budget);
}




