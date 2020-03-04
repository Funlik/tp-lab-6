#include "Employees.h"

//Factory
Employee* EmployeeFactory::CreateEmployee(int id, string name, int payment, string type, Project* project) {
	if (type == "Cleaner") { return new Cleaner(id, name, type, payment); }
	else if (type == "Driver") { return new Driver(id, name, type, payment); }
	else if (type == "Tester") { if (project == NULL) cout << "project error" << endl; project->AddEmp();  project->AddEngineer(); return new Tester(id, name, type, payment, project); }
	else if (type == "Programmer") { if (project == NULL) cout << "project error" << endl; project->AddEmp();  project->AddEngineer();  return new Programmer(id, name, type, payment, project); }
	else if (type == "TeamLeader") { if (project == NULL) cout << "project error" << endl; project->AddEmp(); return new TeamLeader(id, name, type, payment, project, project->GetNEngineers()); }
	else if (type == "Manager") { if (project == NULL) cout << "project error" << endl; project->AddEmp(); return new Manager(id, name, type, payment, project); }
	else if (type == "ProjectManager") { if (project == NULL) cout << "project error" << endl; return new ProjectManager(id, name, type, payment, project, project->GetNumber()); }
	else if (type == "SeniorManager") { if (project == NULL) cout << "project error" << endl; return new SeniorManager(id, name, type, payment, project, project->GetNumber()); }
	return NULL;
}

//Project
void Project::SetProportion(double l1, double l2, double l3) {
	proportion[0] = l1;
	proportion[1] = l2;
	proportion[2] = l3;
}
void Project::SetBudget(int budget) {
	this->budget = budget;
}
void Project::PrintInfo(levels lvl) {
	cout << "( " << name << " " << budget << " $ | " << proportion[lvl] << " )";
}
Project::Project(string name, double l1, double l2, double l3) {
	proportion.push_back(l1);
	proportion.push_back(l2);
	proportion.push_back(l3);
	this->name = name;
	number = 0;
	nEngineers = 0;
}
int Project::GetPay(levels lvl) {
	return floor(proportion[lvl] * budget);
}
string Project::GetName() {
	return name;
}
void Project::AddEmp(int num) {
	number += num;
}
void Project::AddEngineer() {
	nEngineers++;
}
int Project::GetNumber() {
	return number;
}
int Project::GetNEngineers() {
	return nEngineers;
}

//Interfaces
int WorkTime::Calculations(int parts, int payment) {
	return parts * payment;
}

int ProjectPay::ProjPay(Project *proj, levels lvl, int donework) {
	return proj->GetPay(lvl) * donework;
}

int Heading::HeadPay(int num, int payment, int donework) {
	return num * payment * donework / 5;
}

//Employee
Employee::Employee(int id, string name, string job, int payment) {
	this->id = id;
	this->donework = 0;
	this->name = name;
	this->payment = payment;
	this->job = job;
}
int Employee::GetId() {
	return id;
}
string Employee::GetName() {
	return name;
}
void Employee::AddDone(int num) {
	donework += num;
}

//Manager
Manager::Manager(int id, string name, string job, int payment, Project* proj) : Employee(id, name, job, payment) {
	this->project = proj;
	this->lvl = lowPay;
}
void Manager::PrintInfoString() {
	cout << id << " " << name << " " << job
		<< " [ Days: " << donework << " ] ";
	project->PrintInfo(lvl);
	cout << " " << payment << " $" << endl;
}
int Manager::CalcPay() {
	int donework = this->donework;
	this->donework = 0;
	return ProjPay(project, lvl, donework);
}

//ProjectManager
ProjectManager::ProjectManager(int id, string name, string job, int payment, Project* proj, int number) : Manager(id, name, job, payment, proj) {
	this->lvl = medPay;
	this->number = number;
}
void ProjectManager::PrintInfoString() {
	cout << id << " " << name << " " << job
		<< " [ Days: " << donework << " ] ";
	project->PrintInfo(lvl);
	cout << " { Employees: " << number << " } " << payment << " $" << endl;
}
int ProjectManager::CalcPay() {
	int donework = this->donework;
	this->donework = 0;
	return ProjPay(project, lvl, donework) + HeadPay(number, payment, donework);
}

//SeniorManager
SeniorManager::SeniorManager(int id, string name, string job, int payment, Project* proj, int number) : ProjectManager(id, name, job, payment, proj, number) {
	this->lvl = highPay;
}
void SeniorManager::PrintInfoString() {
	cout << id << " " << name << " " << job
		<< " [ Days: " << donework << " ] "
	    << " { Employees: " << number << " } " << payment << " $" << endl;
}
int SeniorManager::CalcPay() {
	int donework = this->donework;
	this->donework = 0;
	return ProjPay(project, lvl, donework) + HeadPay(number, payment, donework);
}

//Engineer
Engineer::Engineer(int id, string name, string job, int payment, Project* proj) : Employee(id, name, job, payment) {
	this->project = proj;
}

//Programmer
Programmer::Programmer(int id, string name, string job, int payment, Project* proj) : Engineer(id, name, job, payment, proj) {
	this->lvl = medPay;
}
void Programmer::PrintInfoString() {
	cout << id << " " << name << " " << job
		<< " [ Days: " << donework << " ] ";
	project->PrintInfo(lvl);
	cout << " " << payment << " $" << endl;
}
int Programmer::CalcPay() {
	int donework = this->donework;
	this->donework = 0;
	return Calculations(donework, payment) + ProjPay(project, lvl, donework);
}

//TeamLeader
TeamLeader::TeamLeader(int id, string name, string job, int payment, Project* proj, int number = 0) : Programmer(id, name, job, payment, proj) {
	this->number = number;
	this->lvl = highPay;
}
void TeamLeader::PrintInfoString() {
	cout << id << " " << name << " " << job
		<< " [ Days: " << donework << " ] ";
	project->PrintInfo(lvl);
	cout << " { Employees: " << number << " } " << payment << " $" << endl;
}
int TeamLeader::CalcPay() {
	int donework = this->donework;
	this->donework = 0;
	return Calculations(donework, payment) + ProjPay(project, lvl, donework) + HeadPay(number, payment, donework);
}
void TeamLeader::AddNum(int num) {
	this->number = num;
}

//Tester
Tester::Tester(int id, string name, string job, int payment, Project* proj) : Engineer(id, name, job, payment, proj) {
	this->lvl = medPay;
}
void Tester::PrintInfoString() {
	cout << id << " " << name << " " << job
		<< " [ Days: " << donework << " ] ";
	project->PrintInfo(lvl);
	cout << " " << payment << " $" << endl;
}
int Tester::CalcPay() {
	int donework = this->donework;
	this->donework = 0;
	return Calculations(donework, payment) + ProjPay(project, lvl, donework);
}

//Personal
Personal::Personal(int id, string name, string job, int payment) : Employee(id, name, job, payment) {
	
}
int Personal::CalcPay() {
	int buf = donework;
	donework = 0;
	return Calculations(buf, payment);
}

//Cleaner
Cleaner::Cleaner(int id, string name, string job, int payment) : Personal(id, name, job, payment) {
	
}
void Cleaner::PrintInfoString() {
	cout << id << " " << name << " " << job
		<< " [ Days: " << donework << " ] "
		<< payment << " $" << endl;
}

//Driver
Driver::Driver(int id, string name, string job, int payment) : Personal(id, name, job, payment) {
	
}
void Driver::PrintInfoString() {
	cout << id << " " << name << " " << job
		<< " [ Days: " << donework <<  " ] "
		<< payment << " $" << endl;
}
int Driver::CalcPay() {
	int buf1 = donework;
	donework = 0;
	return Calculations(buf1, payment);
}

