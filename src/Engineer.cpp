#include "Engineer.h" //fix

//Engineer

Engineer::Engineer(int id, string name, int worktime, int base) : Employee(id, name, worktime) {
	this->base = base;
}

int Engineer::CalcWorkTimePay() {
	return this->worktime * this->base;
}

int Engineer::CalcProjPay(int percent, int budget) {
	return percent*budget*0.01;
}

void Engineer::CalculatePayment(int percent, int budget){
	this->payment = CalcWorkTimePay() + CalcProjPay(percent, budget);
}

void Engineer::CalculatePayment(){
	return;
}

//Programmer

Programmer::Programmer(int id, string name, int worktime, int base) : Engineer(id, name, worktime, base) {
}

//Tester

Tester::Tester(int id, string name, int worktime, int base) : Engineer(id, name, worktime, base) {
}

//TeamLeader

TeamLeader::TeamLeader(int id, string name, int worktime, int base) : Programmer(id, name, worktime, base) {
}

void TeamLeader::AddTester(Tester* new_test){
	this->test_workers.push_back(new_test);
}

void TeamLeader::DelTester(Tester* old_test){
	for (int i = 0; i < this->test_workers.size(); i++){
		if (this->test_workers[i] == old_test){
			this->test_workers.erase(this->test_workers.begin() + i);
			return;
		}
	}
}

void TeamLeader::AddProgrammer(Programmer* new_prog){
	this->prog_workers.push_back(new_prog);
}

void TeamLeader::DelProgrammer(Programmer* old_prog){
	for (int i = 0; i < this->prog_workers.size(); i++){
		if (this->prog_workers[i] == old_prog){
			this->prog_workers.erase(this->prog_workers.begin() + i);
			return;
		}
	}
}

int TeamLeader::CalcHeadPay(int leaderbase){
	return leaderbase * (this->test_workers.size() + this->prog_workers.size());
}

void TeamLeader::CalculatePayment(int percent, int budget, int leaderbase){
	this->payment = CalcWorkTimePay() + CalcProjPay(percent, budget) + CalcHeadPay(leaderbase);
}
