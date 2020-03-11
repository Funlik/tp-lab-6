//
//  Programmer.h
//  StaffDemo
//
//  Created by Олеся Мартынюк on 10.03.2020.
//  Copyright © 2020 Olesia Martinyuk. All rights reserved.
//

#ifndef Programmer_h
#define Programmer_h

#include "Engineer.h"

class Programmer: public Engineer {
public:
   Programmer(int ID, std::string name, int worktime, int base);
};

#endif /* Programmer_h */
