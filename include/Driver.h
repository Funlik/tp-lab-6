#ifndef UNTITLED1_DRIVER_H
#define UNTITLED1_DRIVER_H

#include <string>
#include "Personal.h"

class Driver: public Personal {
private:
    std::string position = "Driver";
public:
    explicit Driver (int _id = 0, std::string _name = "Name", int _worktime = 0, double _payment = 0);
    std::string getPosition();
};


#endif //UNTITLED1_DRIVER_H
