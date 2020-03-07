#include "Personal.h" //fix

//Personal

Personal::Personal(int id, string name, int worktime, int base) : Employee(id, name, worktime){
	this->base = base;
}

int Personal::CalcWorkTimePay(){
	return (this->worktime * this->base);
}

void Personal::CalculatePayment(){
	this->payment = CalcWorkTimePay();
}

int Personal::GetBase(){
	return this->base;
}

void Personal::ChangeBase(int new_base) {
	this->base = new_base;
}

//Cleaner

Cleaner::Cleaner(int id, string name, int worktime, int base) : Personal(id, name, worktime, base) {
}

//Driver

Driver::Driver(int id, string name, int worktime, int base) : Personal(id, name, worktime, base) {
}
