#include "Cleaner.h"
#include <string>

Cleaner::Cleaner(int id, std::string name, double worktime, double payment) : Personal(id, name, worktime, payment) {}

//void Cleaner::calcPayment()
//{
//	this->payment = calcWorkTimePayment();
//}