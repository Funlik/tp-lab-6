//
//  Tester.h
//  StaffDemo
//
//  Created by Олеся Мартынюк on 10.03.2020.
//  Copyright © 2020 Olesia Martinyuk. All rights reserved.
//

#ifndef Tester_h
#define Tester_h

#include "Engineer.h"

class Tester : public Engineer {
public:
   Tester(int ID, std::string name, int worktime, int base);
};

#endif /* Tester_h */
