#include "Manager.h" //fix

//Manager

Manager::Manager(int id, string name, int worktime, int percent) : Employee(id, name, worktime) {
    this->percent = percent;
}

int Manager::GetPercent() {
    return this->percent;
}

void Manager::ChangePercent(int new_percent) {
    this->percent = new_percent;
}

int Manager::CalcProjPay(int percent, int budget) {
    return percent * budget * 0.01;
}

void Manager::CalculatePayment(int percent, int budget) {
    this->payment = CalcProjPay(percent, budget);
}

void Manager::CalculatePayment() {
}

//ProjectManager

ProjectManager::ProjectManager(int id, string name, int worktime, int base) : Manager(id, name, worktime, base) {
}

void ProjectManager::AddManager(Manager* new_man) {
    this->man_workers.push_back(new_man);
}

void ProjectManager::DelManager(Manager* old_man) {
    for (int i = 0; i < this->man_workers.size(); i++) {
        if (this->man_workers[i] == old_man) {
            this->man_workers.erase(this->man_workers.begin() + i);
            return;
        }
    }
}

int ProjectManager::CalcHeadPay(int leaderbase) {
    return leaderbase * this->man_workers.size();
}

void ProjectManager::CalculatePayment(int percent, int budget, int leaderbase) {
    this->payment = CalcProjPay(percent, budget) + CalcHeadPay(leaderbase);
}

//SeniorManager

SeniorManager::SeniorManager(int id, string name, int worktime, int base) : ProjectManager(id, name, worktime, base) {
}

void SeniorManager::AddProjMan(ProjectManager* new_prman){
    this->prman_workers.push_back(new_prman);
}

void SeniorManager::DelProjMan(ProjectManager* old_prman){
    for (int i = 0; i < this->prman_workers.size(); i++){
        if (this->prman_workers[i] == old_prman){
            this->prman_workers.erase(this->prman_workers.begin() + i);
            return;
        }
    }
}

int SeniorManager::CalcHeadPay(int leaderbase){
    return leaderbase * (this->prman_workers.size());
}

void SeniorManager::CalculatePayment(int percent, int budget, int leaderbase) {
    this->payment = CalcProjPay(percent, budget) + CalcHeadPay(leaderbase);
} 