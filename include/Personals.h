#pragma once
#include <string>
#include "emploee.h"
#include "Interfaces.h"
#include <map>
using namespace std;
class Personal: public Employee, public WorkTime {
protected: 
	int base;

public:
	Personal(int ID, string FIO, int BASE);
	void CalcPayment() override;
	int CalcHourPaym() override;
	
};


class Cleaner : public Personal{
public:
	Cleaner(int ID, string FIO, int BASE);

};
class Driver : public Personal{
public:
	Driver(int ID, string FIO, int BASE);

};