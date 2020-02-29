#ifndef DRIVER_H
#define DRIVER_H
#include "Personal.h"
class Driver : public Personal {
public:
	Driver(int id, std::string name, int worktime, int base);
	void Calc();
};
#endif
