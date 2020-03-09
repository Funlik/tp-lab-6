#include <string>
#include "emploee.h"
#include "Engineers.h"
#include "Interfaces.h"
#include "Company.h"
#include <map>
extern map <string, int> Projects;
Engineer::Engineer(int ID, string FIO, int BASE, float INTERACTION, string PROJECT):Employee(ID, FIO) 
{
	this->base = BASE;
	this->interaction = INTERACTION;
	this->project = PROJECT;
	

}
int Engineer::CalcHourPaym() {
	return this->worktime * this->base;

}
float Engineer::CalcProjPaym() {
	return this->interaction * Projects[this->project];

}
void Engineer::CalcPayment() {
	this->payment += this->CalcHourPaym() + this->CalcProjPaym();

}
Programmer::Programmer(int ID, string FIO, int BASE, float INTERACTION, string PROJECT) : Engineer(ID, FIO, BASE, INTERACTION, PROJECT) {}

Tester::Tester(int ID, string FIO, int BASE, float INTERACTION, string PROJECT) : Engineer(ID, FIO, BASE, INTERACTION, PROJECT) {}


TeamLeader::TeamLeader(int ID, string FIO, int BASE, float INTERACTION, string PROJECT, int PAYMFORHEAD, int NUMSUB) : Programmer(ID, FIO, BASE, INTERACTION, PROJECT)
{
	this->paymForHead = PAYMFORHEAD;
	this->numSub = NUMSUB;

}

int TeamLeader::CalcHeadPaym() {
	return this->numSub * this-> paymForHead;

}
void TeamLeader::CalcPayment() {
	this->payment += this->CalcHourPaym() + this->CalcProjPaym() + this->CalcHeadPaym();

}
