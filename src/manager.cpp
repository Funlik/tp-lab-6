#include<iostream>
#include<string>
#include "employee.h"
#include "manager.h"
#define tmp 200
#define min_rate 10000

using namespace std;

	Manager::Manager(int id, string name, int worktime, double part, int fund) :Employee(id, name, worktime), Project(fund){
		this->part = part;
	};
	double Manager::countByProject(){
		return fund*part;
	}
	int Manager::getPayment(){
		payment = countByProject()+min_rate;
		return payment;
	}

	ProjectManager::ProjectManager(int id, string name, int worktime, double part,int fund, int people):Manager(id, name, worktime, part, fund){
		this->people = people;
	};
	int ProjectManager::countByHeading(){
		return  people*rate_for_sub;
	}
	int ProjectManager::getPayment(){
		payment = countByProject() + countByHeading() + min_rate;
		return payment;
	}

	
	int SeniorManager::getPayment(){
		payment = ProjectManager::getPayment();
		return payment;
	}
