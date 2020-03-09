#include <string>
#include "emploee.h"
#include <map>

using namespace std;

Employee::Employee(int ID, string FIO) 
{
	this->id = ID;
	this->fio = FIO;
	
}
int Employee::getID() const {
	return id;
}
void Employee::setTime(int WORKTIME) {
	this->worktime = WORKTIME;
};
string Employee::getFIO() const{
	return fio;
}
float Employee::getPayment() const {
	return payment;
}
