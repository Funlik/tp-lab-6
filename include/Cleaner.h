//
//  Cleaner.h
//  StaffDemo
//
//  Created by Олеся Мартынюк on 09.03.2020.
//  Copyright © 2020 Olesia Martinyuk. All rights reserved.
//

#ifndef Cleaner_h
#define Cleaner_h

#include <string>
#include "Personal.h"
#include "Interfaces.h"
#include "Employee.h"

class Cleaner: public Personal {
public:
   Cleaner(int ID, std::string name, int worktime, int base);
};

#endif /* Cleaner_h */
