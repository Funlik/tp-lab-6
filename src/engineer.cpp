#include<iostream>
#include<string>
#define tmp 100
#include "employee.h"
#include "engineer.h"
using namespace std;

	Engineer::Engineer(int id, string name, int worktime, int rate, double part,int fund) :Employee(id, name, worktime),Project(fund){
		this->rate = rate;
		this->part = part;
	};
	int Engineer::countByTime(){
		return worktime*rate;
	}
	double Engineer::countByProject(){
		return fund*part;
	}
	int Engineer::getPayment(){
		payment = countByProject()+countByTime();
		return payment;
	}

	
	int Programmer::getPayment(){
		payment =Engineer::getPayment();
		return payment;
	}

	int Tester::getPayment(){
		payment =Engineer::getPayment();
		return payment;
	}

	TeamLeader::TeamLeader(int id, string name, int worktime, int rate, double part,int fund, int people) :Programmer(id, name, worktime, rate, part, fund){
		this->people = people;
	};
	int TeamLeader::countByHeading(){
		return  people*rate_for_sub;
	}
	int TeamLeader::getPayment(){
		payment = Programmer::getPayment() + countByHeading();
		return payment;
	}
