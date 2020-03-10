#include "../headers/Employee.h"

#include <utility>

Employee::Employee(int _id, std::string _name, int _worktime, double _payment)
        :id{_id}, name{std::move(_name)}, worktime{_worktime}, payment{_payment} {

}

int Employee::getId() {
    return id;
}

std::string Employee::getName() {
    return name;
}

int Employee::getWorkTime() {
    return worktime;
}
