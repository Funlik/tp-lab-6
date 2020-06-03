#include<iostream>
#include<string>
#include "employee.h"
#include "personal.h"
using namespace std;
	Personal::Personal(int id, string name, int worktime, int rate):Employee(id, name, worktime){
		this->rate = rate;
	}
	int Personal::countByTime(){
		return worktime*rate;
	}
	int Personal::getPayment(){
		payment = countByTime();
		return payment;
	}

	
	int Cleaner::getPayment(){
		payment =Personal::getPayment();
		return payment;
	}
	
	Driver::Driver(int id, string name, int worktime, int rate, int overtime) :Personal(id, name, worktime, rate){
		this->overtime = overtime;
	};
	int Driver::getPayment(){
		payment =Personal::getPayment()+overtime;
		return payment;
	}
