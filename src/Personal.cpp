#include "../headers/Personal.h"

Personal::Personal(int _id, std::string _name, int _worktime, double _payment)
                    :Employee(_id, _name, _worktime, _payment){

}

double Personal::payroll() {
    return worktime*payment;
}