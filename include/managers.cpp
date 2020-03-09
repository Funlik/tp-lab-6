#include <string>
#include "emploee.h"
#include "Managers.h"
#include "Interfaces.h"
#include "Company.h"
#include <map>
using namespace std;
extern map <string, int> Projects;
Manager::Manager(int ID, string FIO, float INTERACTION, string PROJECT) : Employee(ID, FIO) {

	this->interaction = INTERACTION;
	this->project = PROJECT;



}
float Manager::CalcProjPaym(){
	return this->interaction * Projects[this->project];

}
void Manager::CalcPayment() {
	this->payment += CalcProjPaym();

}
ProjectManager::ProjectManager(int ID, string FIO, float INTERACTION, string PROJECT,  int PAYMFORHEAD, int NUMSUB) :Manager(ID, FIO, INTERACTION, PROJECT) {
	this->paymForHead = PAYMFORHEAD;
	this->numSub = NUMSUB;


};
int ProjectManager::CalcHeadPaym() {
	return this->numSub * this->paymForHead;

}
void ProjectManager::CalcPayment() {
	
	this->payment +=  this->CalcProjPaym() + this->CalcHeadPaym();

	
}
SeniorManager::SeniorManager(int ID, string FIO, float INTERACTION, int PAYMFORHEAD, int NUMSUB) : ProjectManager(ID, FIO, INTERACTION, "", PAYMFORHEAD, NUMSUB) {}

float SeniorManager::CalcProjPaym() {
	int tmp_payment=0;
	for (unsigned int i = 0; i < Projects.size(); i++) {
		tmp_payment +=  Projects[this->project];
	 }
	return tmp_payment* this->interaction;
}