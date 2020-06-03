#include "Teamleader.h"

TeamLeader::TeamLeader(int id, string name, string occupation, int hourly_payment, int project_contribution, Project* current_project, int number_of_subjects) :
        Programmer(id, name, occupation, hourly_payment, project_contribution, current_project)
{
    /*
    this->id = id;
    this->name = name;
    this->occupation = occupation;
    this->hourly_payment = hourly_payment;
    this->project_contribution = project_contribution;
    this->current_project = current_project;
     */
    this->number_of_subjects = number_of_subjects;
}

int TeamLeader::calc_payment_by_heading()
{
    int money_per_person = 200;
    return money_per_person * number_of_subjects;
}

void TeamLeader::calc_payment()
{
    this->payment = this->calc_payment_by_worktime() + this->calc_payment_by_project() + this->calc_payment_by_heading();
}
