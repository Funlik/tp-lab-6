//
//  Driver.h
//  StaffDemo
//
//  Created by Олеся Мартынюк on 10.03.2020.
//  Copyright © 2020 Olesia Martinyuk. All rights reserved.
//

#ifndef Driver_h
#define Driver_h

#include <string>
#include "Personal.h"
#include "Interfaces.h"
#include "Employee.h"


class Driver:public Personal {
public:
   Driver(int ID, std::string name, int worktime, int base);
};

#endif /* Driver_h */
