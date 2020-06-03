#include "../include/Driver.h"

Driver::Driver(int _id, std::string _name, int _worktime, double _payment)
        :Personal(_id, _name, _worktime, _payment){

}

std::string Driver::getPosition() {
    return position;
}