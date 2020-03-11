//
//  Cleaner.cpp
//  StaffDemo
//
//  Created by Олеся Мартынюк on 09.03.2020.
//  Copyright © 2020 Olesia Martinyuk. All rights reserved.
//

#include <stdio.h>

#include "Cleaner.h"
#include "Personal.h"
#include "Interfaces.h"
#include "Employee.h"
#include <string>

Cleaner::Cleaner(int ID, std::string name, int worktime, int base):Personal(ID, name, worktime, base) {}

