//
// Created by Anton Korkunov on 19/02/2020.
//

#include "Engineer.h"
#include "Project.h"

Engineer::Engineer(float _BudgetProportion,float _payrate,int _id, string _FIO, int _worktime,string _Prof): Employee(_id,  _FIO,  _worktime, _Prof ) {
    payrate=_payrate;
    BudgetProportion=_BudgetProportion;
}

double Engineer::WorkTime_Payment(){
    //  this->payment += worktime * payrate;
    return worktime * payrate;
}

double Engineer::ProjectPayment() {
    if(curProject==NULL){
        cout<<"This worker does not belong to any project";
        return 0;
    }
    //  this->payment+=BudgetProportion*Prjct->GetBudget();
    return BudgetProportion * curProject->GetBudget();
}


void Programmer::Payday(){
    Employee::Payday();
    cout<<" |Money from WorkTime = "<<WorkTime_Payment()<<"| Money from the project = "<<ProjectPayment()<<"| |Programmer| ";
    cout<<"\n";
}

double Programmer::Calculate() {
   this->payment += ProjectPayment();
    this->payment += WorkTime_Payment();
    return payment;
}

TeamLeader::TeamLeader(float _BudgetProportion,float _payrate,int _id, string _FIO, int _worktime,string _Prof, int _Sub, float MRate):Programmer(_BudgetProportion, _payrate, _id, _FIO, _worktime, _Prof){
    Subordinates=_Sub;
    Manager_rate=MRate;
}

double TeamLeader::Heading_Payment() {
    return Subordinates * Manager_rate;
}


void TeamLeader::Payday(){
    Employee::Payday();
    cout<<" |Money from WorkTime = "<<WorkTime_Payment()<<"| Money from the project = "<<ProjectPayment()<<"| Money from Heading = "<<Heading_Payment()<<"| |TeamLeader| ";
    cout<<"\n";
}

double TeamLeader::Calculate() {
    this->payment += ProjectPayment();
    this->payment += WorkTime_Payment();
    this->payment += Heading_Payment();
    return payment;
}

void Tester::Payday(){
    Employee::Payday();
    cout<<" |Money from WorkTime = "<<WorkTime_Payment()<<"| Money from the project = "<<ProjectPayment()<<"| Bonus money = 150 "<<"| |Tester| ";
    cout<<"\n";
}

double Tester::Calculate() {
    this->payment += ProjectPayment();
    this->payment += WorkTime_Payment();
    this->payment += 150;
    return payment;
}