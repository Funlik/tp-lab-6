//
// Created by Anton Korkunov on 19/02/2020.
//

#include "Manager.h"
#include "Project.h"


Manager::Manager(float _BudgetProportion,int _id, string _FIO, int _worktime,string _Prof): Employee(_id,  _FIO,  _worktime, _Prof ){
    BudgetProportion=_BudgetProportion;
}

double Manager::Calculate(){
 payment+=ProjectPayment();
 return payment;
}

double Manager::ProjectPayment() {
    if(curProject==NULL){
        cout<<"This worker does not belong to any project";
        return 0;
    }
    return BudgetProportion * curProject->GetBudget();
}

void Manager::Payday(){
    Employee::Payday();
    cout<<"| Money from the project = "<<ProjectPayment()<<"| |Manager| ";
    cout<<"\n";
}

void Manager::Add_to_Project(Project* tmp){
    curProject=tmp;
}

ProjectManager ::ProjectManager(float _BudgetProportion,int _id, string _FIO, int _worktime,string _Prof,int _Sub,float MRate):Manager(_BudgetProportion, _id, _FIO, _worktime, _Prof) {
    Subordinates=_Sub;
    Manager_rate=MRate;
}

void ProjectManager::SetSub(int _Subordinates){
    Subordinates=_Subordinates;
    return;
}

double ProjectManager ::Heading_Payment() {
   return Subordinates * Manager_rate;
  // return curProject->Number_of_Workers() * Manager_rate;
}

double ProjectManager::Calculate(){
    payment+=ProjectPayment();
    payment+=Heading_Payment();
    return payment;
}

void ProjectManager::Payday(){
    Employee::Payday();
    cout<<"| Money from the project = "<<ProjectPayment()<<"| Money from Heading = "<<Heading_Payment()<<"| |ProjectManager| ";
    cout<<"\n";
}

SeniorManager ::SeniorManager(float _BudgetProportion,int _id, string _FIO, int _worktime,string _Prof,int _Sub,float MRate):ProjectManager( _BudgetProportion, _id, _FIO, _worktime,_Prof, _Sub,MRate) {
//////
}

void SeniorManager::Payday(){
    Employee::Payday();
    cout<<"| Money from the project = "<<ProjectPayment()<<"| Money from Heading = "<<Heading_Payment()<<"| |SeniorManager| ";
    cout<<"\n";
}